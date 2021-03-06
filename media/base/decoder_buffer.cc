// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "media/base/decoder_buffer.h"

#include "base/logging.h"
#include "media/base/decrypt_config.h"

#if !defined(OS_ANDROID)
#include "base/memory/aligned_memory.h"
#endif

namespace media {

DecoderBuffer::DecoderBuffer(int buffer_size)
    : Buffer(base::TimeDelta(), base::TimeDelta()),
      buffer_size_(buffer_size) {
  Initialize();
}

DecoderBuffer::DecoderBuffer(const uint8* data, int buffer_size)
    : Buffer(base::TimeDelta(), base::TimeDelta()),
      buffer_size_(buffer_size) {
  // Prevent invalid allocations.  Also used to create end of stream buffers.
  if (!data) {
    buffer_size_ = 0;
    data_ = NULL;
    return;
  }

  Initialize();
  memcpy(data_, data, buffer_size_);
}

DecoderBuffer::~DecoderBuffer() {
#if !defined(OS_ANDROID)
  base::AlignedFree(data_);
#else
  delete[] data_;
#endif
}

void DecoderBuffer::Initialize() {
  DCHECK_GE(buffer_size_, 0);
#if !defined(OS_ANDROID)
  data_ = reinterpret_cast<uint8*>(
      base::AlignedAlloc(buffer_size_ + kPaddingSize, kAlignmentSize));
  memset(data_ + buffer_size_, 0, kPaddingSize);
#else
  data_ = new uint8[buffer_size_];
#endif
}

scoped_refptr<DecoderBuffer> DecoderBuffer::CopyFrom(const uint8* data,
                                                     int data_size) {
  DCHECK(data);
  return make_scoped_refptr(new DecoderBuffer(data, data_size));
}

scoped_refptr<DecoderBuffer> DecoderBuffer::CreateEOSBuffer() {
  return make_scoped_refptr(new DecoderBuffer(NULL, 0));
}

const uint8* DecoderBuffer::GetData() const {
  return data_;
}

int DecoderBuffer::GetDataSize() const {
  return buffer_size_;
}

uint8* DecoderBuffer::GetWritableData() {
  return data_;
}

const DecryptConfig* DecoderBuffer::GetDecryptConfig() const {
  return decrypt_config_.get();
}

void DecoderBuffer::SetDecryptConfig(scoped_ptr<DecryptConfig> decrypt_config) {
  decrypt_config_ = decrypt_config.Pass();
}

}  // namespace media

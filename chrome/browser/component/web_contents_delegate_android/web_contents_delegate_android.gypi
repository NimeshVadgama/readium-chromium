# Copyright (c) 2012 The Chromium Authors. All rights reserved.
#
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

{
  'conditions': [
    ['OS=="android"', {
      'targets': [
        {
          'target_name': 'web_contents_delegate_android',
          'type': 'static_library',
          'dependencies': [
            '../../../base/base.gyp:base',
            '../../../content/content.gyp:content_browser',
            '../../../content/content.gyp:content_common',
            '../../../net/net.gyp:net',
            '../../../skia/skia.gyp:skia',
            '../../../ui/ui.gyp:ui',
            '../../../webkit/support/webkit_support.gyp:glue',
            'browser_component_jni_headers',
          ],
          'include_dirs': [
            '../../..',
            '../../../skia/config',
            '<(SHARED_INTERMEDIATE_DIR)/chrome/browser_component',
          ],
          'sources': [
            'component_jni_registrar.cc',
            'component_jni_registrar.h',
            'web_contents_delegate_android.cc',
            'web_contents_delegate_android.h',
          ],
        },
        {
          'target_name': 'web_contents_delegate_android_java',
          'type': 'none',
          'dependencies': [
            '<(DEPTH)/base/base.gyp:base',
            '<(DEPTH)/content/content.gyp:content_java',
          ],
          'variables': {
            'package_name': 'web_contents_delegate_android',
            'java_in_dir': 'java',
          },
          'includes': [ '../../../../build/java.gypi' ],
        },
      ],
    }],
  ],
}

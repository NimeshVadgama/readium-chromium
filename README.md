Readium-Chromium
===============

Readium-Chromium is a customized Chromium using Readium-WebKit.

This repository is based on Chromium 22 branch.

http://src.chromium.org/svn/branches/1229_12 @ 152690

# Warning

Don't use this chromium to read untrusted web site or epub because this chromium is old and some security fix may not be applied. 

# Release Note
Please refer to the following URL.

https://github.com/readium/Readium-Chromium/blob/master/ReleaseNote.md

# How to use a binary release
If you just want to use Readium Chromium, you can download Mac binary from the following URL.

http://github.readium.org/releases/custom_chromium/ReadiumChromium-Release201-2012-10-22.zip

Old releases are [here](https://github.com/readium/Readium-Chromium/blob/master/OldRelease.md).

We currently develop chromium on Mac.
For Windows or Linux users, you may be able to build from source, but we don't test it.

Double click donwloaded "ReadiumChromium-Release2-2012-09-24.zip" in Finder to extract the file.

Double click "Readium Chromium" in Finder to execute the binary.

Go to http://readium.org/ and Click "+ ADD TO CHROME".

# How to get source
gclient config ssh://git@github.com/readium/Readium-Chromium.git --name src

gclient sync

# How to build
Please follow chromium instruction.

http://www.chromium.org/Home

# How to contribute
If you want to fix our custom chromium, please do following.

* Fork Readium-Chromium on github.
* Fork Readium-WebKit on github.
* Edit DEPS file of your "master" branch like following. You should change "webkit_git", "skia_src_git" and "skia_include_git"

> Edit this

>   "webkit_git": "ssh://git@github.com/readium/Readium-WebKit.git",

> like

>   "webkit_git": "ssh://git@github.com/[your github name]/Readium-WebKit.git",


* Get source

> gclient config ssh://git@github.com/[your github name]/Readium-Chromium.git --name src

> gclient sync

# About rebase
We rebased Chromium version from 18 to 22 on Aug 29, 2012.
This changes master's history and you cannot pull or gclient sync from original source, if you had got Readium Chromium code before Aug 29, 2012.
If you want to update your forked repository, please follow the following guide.

* Fork Readium-skia-src and Readium-skia-include on github.
* Update your forked chromium and readium repository like following.

> cd my-readium-chromium/src

> git checkout -b master-save master    # backup your old master

> git push origin master-save           # I supporse your github is origin

> git fetch readium                     # I supporse readium github is readium

> git branch -d master                  # delete old master

> git checkout -b master readium/master

> git push -f origin master             # WARNING!! This make your repository be not able to be pulled from other repository!

> emacs DEPS                            # Edit repository position like first checkout

> git commit -a

> git push origin master                # Your forked chromium repository must have DEPS which point to your forked repositories.

> cd third_party/WebKit

> git checkout -b master-save master    # backup your old master

> git push origin master-save           # I supporse your github is origin

> git fetch readium                     # I supporse readium github is readium

> git branch -d master                  # delete old master

> git checkout -b master readium/master

> git push -f origin master             # WARNING!! This make your repository be not able to be pulled from other repository!

> cd ../../../

> gclient sync

If you want to restore your changes, please cherry-pick from master-save or your branch.

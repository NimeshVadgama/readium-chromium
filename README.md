Readium-Chromium
===============

modified Chromium to use Readium-WebKit.

This repository based on Chromium 18 branch.

http://src.chromium.org/svn/branches/1025/src @121524


# How to use
If you want to just use Readium Chromium, you can download Mac binary from the following URL.

We currently develop chromium on Mac.
For Windows or Linux users, you may be able to build from source, but we don't test it.

Double click donwloaded "Chromium.zip" in Finder to extract the file.

Double click "Chromium" in Finder to execute the binary.

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
* Edit DEPS file of your "master" branch like following.

> Edit this

>   "webkit_git": "ssh://git@github.com/readium/Readium-WebKit.git",

> like

>   "webkit_git": "ssh://git@github.com/[your github name]/Readium-WebKit.git",

* Get source

> gclient config ssh://git@github.com/[your github name]/Readium-Chromium.git --name src

> gclient sync


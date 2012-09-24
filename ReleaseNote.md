Readium-Chromium Release Note
===============

# Release 2
This release is based on Chromium 22.

## Feature Changes
* [Implement Vertical Orientations of text-orientation: mixed-right](https://github.com/readium/Readium-WebKit/issues/13)

## Bug Fixes
* [Fix float block's logical top margin is illegal in vertical writing mode.](https://github.com/readium/Readium-WebKit/issues/10)
* [Fix ruby text is incorrectly positioned when its writing-mode is changed to vertical after layout is done](https://github.com/readium/Readium-WebKit/issues/11)

## Reverted Fixes
Following fixes are reverted from previous release

* [Small kanas and prolonged marks become characters not starting a line.](https://github.com/readium/Readium-ICU/issues/2)

# Release 1

This release is based on Chromium 18.

## Feature Changes
* [Small kanas and prolonged marks become characters not starting a line.](https://github.com/readium/Readium-ICU/issues/2)
* [Not to cancel text combine even if the width is larger than its line width.](https://github.com/readium/Readium-WebKit/issues/2)
* [Not to break line inside simple ruby.](https://github.com/readium/Readium-WebKit/issues/7)
* [Implement text-orientation: sideways](https://github.com/readium/Readium-WebKit/issues/8)

## Bug Fixes
* [Emphasis mark is printed after inline-block with justify](https://github.com/readium/Readium-WebKit/issues/3)
* [The characters before and after ruby and replaced element ignore line breaking rules](https://github.com/readium/Readium-WebKit/issues/5)

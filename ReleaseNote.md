Readium-Chromium Release Note
===============

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

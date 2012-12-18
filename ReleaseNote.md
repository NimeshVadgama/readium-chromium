Readium-Chromium Release Note
===============

# Release 3
This release is based on Chromium 24.

## **Known Issue**
* This chromium cannot show bold character, when you change fonts and the font does not have a bold version.
* Japanese character is offset to top-right in vertical writing mode on Mountain Lion.

Above are issues of Chromium 24.

## Feature Changes
* [Implement hanging-punctuation: allow-end](https://github.com/readium/Readium-WebKit/issues/24)
* [text-combine falls back to none rather than scale when wider than 1.1em](https://github.com/readium/Readium-WebKit/issues/15) (text-combine-mode: auto behavior)

## Bug Fixes
* [When the 1st row step over pages, all rows are expanded.](https://github.com/readium/Readium-WebKit/issues/26)
* [table-caption stride over pages](https://github.com/readium/Readium-WebKit/issues/25)
* [WebKit should use vertical glyph for upright U+0x2026 HORIZONTAL ELLIPSIS](https://github.com/readium/Readium-WebKit/issues/22)
* [not upright: full width equals sign](https://github.com/readium/Readium-WebKit/issues/21)
* [(readium/readium #79)Link elements containing ruby are not functioning in vertical-writing](https://github.com/readium/Readium-WebKit/issues/20)
* [(readium/readium #76)surrogate pair](https://github.com/readium/Readium-WebKit/issues/19)
* [Uninitialized text decoration color is propagated to ruby text.](https://github.com/readium/Readium-WebKit/issues/14)
* [If there is no ancestor which have specified height, image percent height should be ignored when calculate auto width.](https://github.com/readium/Readium-WebKit/issues/16)

## Reverted Fixes

Revert the following patches not to break English contents.
* [Fix Japanese justification](https://github.com/readium/Readium-WebKit/issues/4)
* [Line break between inseparable characters.](https://github.com/readium/Readium-WebKit/issues/6)


# Release 2.0.1
This release is based on Chromium 22.

## **Known Issue**
This chromium cannot show bold character, when you change fonts and the font does not have a bold version.

This is an issue of Chromium 22.

## Bug Fixes
* [crashes frequently](https://github.com/readium/Readium-Chromium/issues/7)

# Release 2
This release is based on Chromium 22.

## **Known Issue**
This chromium cannot show bold character, when you change fonts and the font does not have a bold version.

This is an issue of Chromium 22.

## Feature Changes
* [Implement Vertical Orientations of text-orientation: mixed-right](https://github.com/readium/Readium-WebKit/issues/13)

## Bug Fixes
* [Fix float block's logical top margin is illegal in vertical writing mode.](https://github.com/readium/Readium-WebKit/issues/10)
* [Fix ruby text is incorrectly positioned when its writing-mode is changed to vertical after layout is done.](https://github.com/readium/Readium-WebKit/issues/11)

## Reverted Fixes
Following fixes are reverted from previous release.
* [Small kanas and prolonged marks become characters not starting a line.](https://github.com/readium/Readium-ICU/issues/2)

# Release 1

This release is based on Chromium 18.

## Feature Changes
* [Small kanas and prolonged marks become characters not starting a line.](https://github.com/readium/Readium-ICU/issues/2)
* [Not to cancel text combine even if the width is larger than its line width.](https://github.com/readium/Readium-WebKit/issues/2)
* [Not to break line inside simple ruby.](https://github.com/readium/Readium-WebKit/issues/7)
* [Implement text-orientation: sideways.](https://github.com/readium/Readium-WebKit/issues/8)

## Bug Fixes
* [Emphasis mark is printed after inline-block with justify.](https://github.com/readium/Readium-WebKit/issues/3)
* [The characters before and after ruby and replaced element ignore line breaking rules.](https://github.com/readium/Readium-WebKit/issues/5)

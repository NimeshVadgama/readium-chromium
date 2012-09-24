Readium-Chromium Release Note
===============

# Release 2
This release based on Chromium 22.

## Feature Changes
* Implement Vertical Orientations of text-orientation: mixed-right

## Bug Fixes
* Fix float block's logical top margin is illegal in vertical writing mode.
* Fix ruby text is incorrectly positioned when its writing-mode is changed to vertical after layout is done

## Reverted Fixes
Reverted following fixes from previous release.

* Small kanas and prolonged marks become characters not starting a line.

# Release 1

This release based on Chromium 18.

## Feature Changes
* Small kanas and prolonged marks become characters not starting a line.
* Not to cancel text combine even if the width is larger than its line width.
* Fix line break between some inseparable characters.
* Not to break line inside simple ruby.
* Implement text-orientation: sideways

## Bug Fixes
* Emphasis mark is printed after inline-block with justify
* The characters before and after ruby and replaced element ignore line breaking rules

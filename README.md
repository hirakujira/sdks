# theos/sdks
This repository contains patched iOS SDKs containing private symbols. These were removed from official SDKs starting in Xcode 7.3 and the iOS 9.3 SDK.

To use with Theos, [download this repo](https://github.com/theos/sdks/archive/master.zip), extract, and copy whichever SDKs you desire into `$THEOS/sdks/`.

Generated using [create_patched_sdk.sh](create_patched_sdk.sh) and inoahdev’s [tbd](https://github.com/inoahdev/tbd) using binaries retrieved from the dyld shared cache.

### About this fork

* Updated `create_patched_sdk.sh`, which is compatible with latest tbd tool and vairous Xcode versions now.
* Uses [Big Repo Cleaner](https://rtyley.github.io/bfg-repo-cleaner/) to remove old sdks. This git repo only contains latest SDK for each major iOS versions.

### Usage
* Dump SDK: `./create_patched_sdk.sh 1 ./ 1 - ./tbd /Applications/Xcode.app`
* Remove old SDKs from repo: `java -jar ./bfg-1.13.0.jar --delete-folders iPhoneOS10.3.sdk ./`
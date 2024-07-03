# ALT

![ALT](https://massdrop-s3.imgix.net/product-images/alt-keyboard/FP/WNxwR19gTua3nxiiQWP3_AI7B3311%20copy%20page.jpg?auto=format&fm=jpg&fit=max&w=700&h=467&dpr=1&q=80)

The Massdrop ALT is a 65% mechanical keyboard featuring dual USB-C connectors, an integrated Hi-Speed USB 2.0 hub, and fully customizable RGB backlighting and underlighting.

[Layout](http://www.keyboard-layout-editor.com/#/gists/ef4eb0912f6cb89edc64534180a0a7a9)

## How to build:
* Change keymap file if necessary
* Download and install [QMK MSYS](https://msys.qmk.fm/)
* From QMK MSYS run 
    ```
    qmk setup BorisTestov/qmk_firmware -y
    qmk config user.keyboard=massdrop/alt user.keymap=fylch_alt
    qmk compile
    ```
    First two steps (setup and config) executed only once. On future updates run only `qmk compile`

* Download [mdloader](https://github.com/Massdrop/mdloader/releases)
* From terminal run
    ```
    .\mdloader.exe --first --download .\qmk_firmware\.build\massdrop_alt_fylch_alt.hex --restart
    ```
* Hold MD Boot key (FN + B) for 0.5 seconds

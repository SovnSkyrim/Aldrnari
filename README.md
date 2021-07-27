# Aldrnari

- [Preamble](#preamble)
- [Installation](#installation)
  - [Pre-Installation](#pre-installation)
    - [Installing Microsoft Visual C++ Redistributable Package](#installing-microsoft-visual-c-redistributable-package)
    - [Steam Config](#steam-config)
      - [Disable the Steam Overlay](#disable-the-steam-overlay)
    - [Change Steams Update Behavior](#change-steams-update-behavior)
    - [Set the Game language to English](#set-the-game-language-to-english)
    - [Clean Skyrim](#clean-skyrim)
    - [Start Skyrim](#start-skyrim)
  - [Using Wabbajack](#using-wabbajack)
    - [Preparations](#preparations)
    - [Downloading and Installing](#downloading-and-installing)
      - [Problems with Wabbajack](#problems-with-wabbajack)
  - [Post-Installation](#post-installation)
    - [Copy Game Folder Files](#copy-game-folder-files)
    - [Graphical Settings](#graphical-settings)
    - [Pagefile in prevention of memory crashes](#pagefile-in-prevention-of-memory-crashes)
    - [Getting an ENB](#getting-an-enb)
    - [Profiles](#Profiles)
- [Updating](#updating)
- [In Game MCM Options](#in-game-mcm-options)
- [How to start playing](#How-to-start-playing)
- [FAQ](#faq)
  - [Ultrawide Options](#ultrawide-options)
  - [Performance stuff](#Performance-stuff)
    - [Tweaking the ENB](#tweaking-the-enb)
    - [Tweaking the Game Settings](#tweaking-the-game-settings)
- [Removing the Modlist](#removing-the-modlist)
- [Credits and Thanks](#credits-and-thanks)
- [Contact](#contact)
- [Contributing](#contributing)
- [Changelog](#changelog)

# Preamble

Aldrnari (ᚨᛚᛞᚱᚾᚨᚱᛁ) is my project to make a Skyrim **I** want to play.
It is an ode to my love for folk music altogether, in fact, the idea came when I got curious into [Yggdrasil Music and SoundFX Overhaul](https://www.nexusmods.com/skyrimspecialedition/mods/21578) and started listening to folk music altogether.

Aldrnari means "the nourisher of life", it is one of the many ways to translate fire in old norse.
The idea came from the Heilung track [Elddansurin](https://www.youtube.com/watch?v=Xph2Phcj0LA) (it means [The fire dancer](https://lyricstranslate.com/en/elddansurin-fire-dancer.html)) because it represents how folk helped healing my soul and how in Dark Souls, fire is extremely important.
Because yes, this list is heavily inspired by the Souls Games, in the combat and gameplay mechanics, you'll see further below.

This list is made to be challenging, rewarding, you will become an overpowered Dragonborn who goes against terrible and fierce enemies. 
It is deeply inspired by games like Dark Souls and Hellblade: Senua's Sacrifice, while having an artistic direction that comes close to screen-archery.

If you have any questions regarding the list, you're free to ask in the [Wabbajack Discord](https://discord.gg/wabbajack) or [my own personal server](https://discord.gg/ZgjVrXp).

This project started as a collaboration between Althro and I on Tinvaak 2, we went in our own ways when we realised that our goals were different. Aldrnari still woudldn't have existed without Althro and Tinvaak 2.

# Disclaimer

### READING THIS README IN ITS ENTIRETY IS REQUIRED FOR THE LIST TO WORK. IT WILL NOT WORK IF YOU DON'T READ. THIS ISN'T ROCKET SCIENCE SO BE PATIENT AND READ CAREFULLY. THE README DOESN'T END AT "HOW TO START UP THE LIST". 
### I am going to answer "readme" to any question answered in this document - you have been warned. 
### THIS LIST MASSIVELY CHANGES THE GAME, AND I'VE PUT MY OWN TWEAKS INTO IT. YOU WOULDNT HAVE THE SAME EXPERIENCE IF YOU MODDED THE GAME YOURSELF WITH THE SAME MODS; THUS, DO NOT REPORT ANY BUG/ERROR/ISSUE/PROBLEM TO MOD AUTHORS BUT ONLY TO ME THROUGH WABBAJACK'S OR MY DISCORD.

# Noteworthy Mods and what gameplay to expect.

Aldrnari goes a step beyond to make a fresher gameplay, thus I would need an entire document on what's in there to explain everything.
That's exactly what [Modified Gameplay.md](https://github.com/SovnSkyrim/Aldrnari/blob/main/Modified%20Gameplay.md) is, so go check it out.

# Installation
### Prerequisites
#### PC Specifications
Aldrnari is meant to use every single inch of my computer, here are my specs:
  - I7-7700k
  - 1080Ti Zotac - 11GB of VRAM
  - 32GB of 3200mhz DDR4 RAM

Full PC Part Picker setup is [here](https://fr.pcpartpicker.com/list/ZHQQgt). VRAM is king in Skyrim Modding, so I would recommend atleast 8GB.

I do not have stable 60FPS on 1440p everywhere with my setup because frankly, I do not care about it if combat is fluid and I can take sexy screenshots.
The average is 60FPS with dips in 50FPS in very few areas, all this at 1080p because my screen is a 3840x1080p (no I don't play in ultrawide, that's pointless and no support will be offered for that neither).

No performance options are available for now as this is a Beta, it will change at some point, atleast it should.
If you are sad that this is how I made the list then go play [QWEST!](https://github.com/SovnSkyrim/QWEST), it's made so everyone runs it.

Disclaimer: Any questions regarding the specs and performance of the list will be redirected to here if you're asking me. I cannot stress how much I will not change the performance of the list. It is primarily made for screen-archery with innovative gameplay, notice how screen-archery goes first in my mind. You are free to modify the list once you have it to fit your frames dream, I will just not help you (atleast for now).

#### Size on Drive
Aldrnari is a big list, it requires:
  - Over 130GB for the Downloads folder
  - Over 220GB for the Installation folder

So 350GB **minimum** is required. I cannot stress how much a SSD is needed for **atleast** the game and the list. You can put your downloads in an HDD and it will only slow your installation process.

### Pre-Installation

These steps are only needed if you install the Modlist for the first time. If you are updating the Modlist, jump straight to [Updating](#updating).

#### Installing Microsoft Visual C++ Redistributable Package

I doubt you need to do this since you likely already have this installed. This package is required for MO2 and you can download it from [Microsoft](https://support.microsoft.com/en-us/help/2977003/the-latest-supported-visual-c-downloads). Download the x64 version under "Visual Studio 2015, 2017 and 2019". [Direct link](https://aka.ms/vs/16/release/vc_redist.x64.exe) if you can't find it.

#### Steam Library

If you have your steam library in program files, read [this](https://github.com/LostDragonist/steam-library-setup-tool/wiki/Usage-Guide) to put it somewhere else.
I will not provide support to people with Skyrim in their Program Files folder.
Locations like Documents, Downloads, Desktop, or OneDrive are NOT fine. The best location would be ``C:\SteamLibrary`` if you have a single drive, or whichever Drive Letter you have on your main Games drive. Such a location is also called the "root of the drive."

#### Change Steam's Update Behavior

SSE is still being updated by Bethesda (they only add Creation Club content). Whenever the game updates, the entire modding community goes silent for the next one or two weeks because some mods need to be updated to the latest game runtime version.

To ensure that Steam does not automatically update the game for you, head over to the Properties window, navigate to the _Updates_ tab and change _Automatic updates_ to _Only update this game when I launch it_. You should also disable the Steam Cloud while you're at it.

#### Set the Game language to English

Just do it. This entire Modlist is in English and 99% of all mods you will find are also in English. I highly recommend playing the game in English and **I will not give support to people with a non-English game**.

Open the Steam Properties window, navigate to the _Language_ tab and select _English_ from the dropdown menu.

#### Clean Skyrim

I highly recommend uninstalling the game through Steam, deleting the game folder, and reinstalling it. You should also clean up the `Skyrim Special Edition` folder in `Documents/My Games/` by deleting the contents in it. Alternatively, use the [Shredder](https://www.nexusmods.com/skyrimspecialedition/mods/30133).

If you ever used Vortex to mod Skyrim SE, using the Shredder becomes a critically important step, as Vortex will conflict heavily with any Wabbajack installation, so backup your stuff or shred it.

If the Shredder is unavailable at the time you read this, manually uninstall Vortex and manually delete the `Skyrim Special Edition` folder located in your `SteamLibrary\steamapps\common`, where your SteamLibrary is.

## Start Skyrim

After you have done everything above and got a clean SSE installation ready, start the Launcher and open the _Options_ menu.

1. Leave the quality to what Skyrim sets it to, but you can lower it if you wish. FPS gain is minor though.
2. Set the _Aspect Ratio_ and _Resolution_ to your monitor's native values
3. Set _Antialiasing_ to _Off_
4. Check _Windowed Mode_ and _Borderless_

Start the game and exit once you're in the main menu.

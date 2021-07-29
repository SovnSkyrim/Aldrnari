![Logo](https://i.imgur.com/qOPBy7D.png)

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
It is an ode to my love for folk music, in fact, the idea came when I got curious into [Yggdrasil Music and SoundFX Overhaul](https://www.nexusmods.com/skyrimspecialedition/mods/21578) and started listening to folk music altogether.

Aldrnari means "the nourisher of life", it is one of the many ways to translate fire in old norse.
The idea came from the Heilung track [Elddansurin](https://www.youtube.com/watch?v=Xph2Phcj0LA) (it means [The fire dancer](https://lyricstranslate.com/en/elddansurin-fire-dancer.html)) because it represents how folk helped healing my soul and how in Dark Souls, fire is extremely important.
Because yes, this list is heavily inspired by the Souls Games, in the combat and gameplay mechanics, you'll see further below.

This list is made to be challenging, rewarding, you will become an overpowered Dragonborn who goes against terrible and fierce enemies. 
It is deeply inspired by games like Dark Souls and Hellblade: Senua's Sacrifice, while having an artistic direction that comes close to screen-archery.

If you have any questions regarding the list, you're free to ask in the [Wabbajack Discord](https://discord.gg/wabbajack) or [my own personal server](https://discord.gg/ZgjVrXp).

This project started as a collaboration between Althro and I on Tinvaak 2, we went in our own ways when we realised that our goals were different. Aldrnari still woudldn't have existed without Althro and Tinvaak 2.

The art for the list was made by [Crithion/m.vlad](https://mvlad.design/), a fellow Modlist Developper (author of [Narsil](https://mvlad.design/narsil/), a VR list), and artist. I commissioned him and he did an amazing job!

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
  - Over 120GB for the Downloads folder
  - Over 180GB for the Installation folder
  - an additional 10GB for the temporary files during Installation

So 310GB **minimum** is required. I cannot stress how much a SSD is needed for **atleast** the game and the list. You can put your downloads in an HDD and it will only slow your installation process.

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

### Using Wabbajack

## Preparations

Download the release to a _working folder_. This folder **must not** be in a _common folder_ like your Desktop, Downloads or Program Files folder. It's best to create a Wabbajack folder near the root level of your drive like `C:/Wabbajack`.

Grab the latest release of Wabbajack from [here](https://github.com/wabbajack-tools/wabbajack/releases) and place the `Wabbajack.exe` file in the _working folder_.

Wabbajack will not work with Windows 7, I will not offer any kind of support for users of that operating system.

## Downloading and Installing

The download and installation process can take a very long time depending on your system specs. Wabbajack will calculate the amount of threads it will use at the start of the installation. To have the highest amount of threads and thus the fastest speed, it is advised to have the working folder on an SSD.
The list, being unofficial, is only available on [my Discord server](https://discord.gg/ZgjVrXp), in #links.

1. Grab the Wabbajack installation file from my discord and open the Wabbajack exe
2. On the main menu for Wabbajack, select "Install From Disk" and select the downloaded file on my Discord.
3. Create a folder for the List at the root of your drive (like the Wabbajack folder) called "Aldrnari".
4. Select the created folder in 3. as your installation folder.
5. Go back to your drive, and create a new folder, called "Wabbajack Downloads Folder". This specific folder can be on a different drive if you wish.
6. Select the created folder in 5. as your downloads folder.
7. Click the Go/Begin button.
8. Wait for Wabbajack to finish.

### Problems with Wabbajack

There are a lot of different scenarios where Wabbajack will produce an error. I recommend re-running Wabbajack before posting anything. Wabbajack will continue where it left off so you lose no progress.

**Could not download x**:

If a mod updated and the old files got deleted, it is impossible to download them. In this case, just wait until I update the Modlist.

If Wabbajack stalls on the MEGA.NZ files, get the files below and place them AS IS in the downloads folder you've selected, then restart Wabbajack completely. It's only those 4.
- https://mega.nz/file/IS4EjJhC#inP4yfb3i-UO_sx790OpoFDk81x-WIRf9WcBeKxnmYo
- https://mega.nz/file/4LxGTALK#7I8XPLnIW0PxR_r_nXMP-9ZUnZ16MlFVMdFdgGy-gF0
- https://mega.nz/file/8T4ixLCB#YKQw5EDFdL1_e-5G_JB8WgmUkJ8N0kNtpzeOwUHZcZY
- https://mega.nz/file/EcJhgKpY#4Q86Rd1hUepjm233r8Q_7x3fTWx9axJN2CUc8FXrBsg

**x is not a whitelisted download**:

This can happen when I update the modlist. Check if a new update is available and wait if there is none.

**Wabbajack could not find my game folder**:

Wabbajack will not work with a pirated version of the game. If you own the game on Steam, go back to the [Pre-Installation](#pre-installation) step.

### Post-Installation

## Copy Game Folder Files

When the installation is complete, copy the files in the `Aldrnari\Game Folder Files` folder and paste them into your Skyrim folder (with the SkyrimSE.exe and the data folder). [HERE](http://prntscr.com/124984m).

## Pagefile in prevention of memory crashes

Bigger Skyrim modlists need a lot of memory, and when there is not enough available it may fail allocating more. To fix this, you'll want to have a bigger pagefile.
A pagefile is a file on your disk Windows will use when there is not enough RAM available.
Never disable the pagefile - this may lead to various issues on your system, such as this Skyrim crash.

If you've never touched the pagefile, perform the following steps to prevent from memory crashes:
1. Press Windows + R on your keyboard and enter `sysdm.cpl ,3`
2. Under the Performance section, press 'Settings'
3. Go to the Advanced tab at the top, and at the Virtual memory section press 'Change...'
4. Disable 'Automatically manage paging file size for all drives'
5. If you have more than one drive, try enabling it for at least one more drive as a backup (make sure it has a decent bit of free space, like 15GB). Set the size to 'System managed size'.
Otherwise, set a custom size for the drive it's currently on and increase the maximum size to be at least 20GB.

## Getting an ENB

## How to start up Aldrnari

Head over to the installation folder and locate an executable named `ModOrganizer.exe` and launch it. Once it's launched, there will be a dropdown box on the top right and a big run button next to it. Ensure it is set to SKSE by selecting it in the dropdown box and then hitting the run button.

Upon pressing New Game, you will spawn on the walls of Helgen burning down. Once all the messages on the top left corner of the screen are gone, set the MCMs as instructed below.

If you press enter, you will be teleported to a location where you will be able to personalize your character.
After confirming your character, never use showracemenu to change its race or sex; you will then be able to start the game. If you want to customize the MCMs or need some more time to setup Skyrim Unbound, you can use the "Stay there" option.

Do NOT Select a NON DRAGONBORN OPTION within Skyrim Unbound! Doing so will result in broken questlines! You cannot escape your destiny!

## Updating

If this Modlist receives an update, please check the Changelog before doing anything. Always backup your saves or start a new game after updating.

**Wabbajack will delete all files that are not part of the Modlist when updating!**

This means that any additional mods you have installed on top of the Modlist will be deleted. Your downloads folder will not be touched!

Updating is like installing. You only have to make sure that you select the same path and tick the _overwrite existing Modlist_ button.

## In-Game MCM Options
Once the game has loaded, wait until there are no more messages on the top left corner. Then you can hit escape and click on Mod Configuration to continue this section.

MCMs are not automated due to a personal choice: There are many important tweaks, a mountain of informations, and useful stuff in them that can solve problems or make your experience better. Those are my own and what I recommend for the least amount of problems and a balanced experience.

Do NOT Select a **NON DRAGONBORN OPTION** within Skyrim Unbound! Doing so will result in broken questlines! You cannot escape your destiny!

#### Game Difficulty
- The difficulty in this Modlist is quite harder (more info on that in [Modified Gameplay.md](https://github.com/SovnSkyrim/Aldrnari/blob/main/Modified%20Gameplay.md)) so I highly suggest not using Legendary. I personally play on Expert; adept is also fine.


# How to start playing

After you finish customizing all the MCMs, the last thing to check is the Skyrim Unbound MCM. You can safely experiment with all the options in there, **EXCEPT choosing a Non-Dragonborn character.**
Anything else in that menu can be customized to your liking. When you're ready, simply press the Start Adventure button in the Unbound MCM. You will then be prompted to create your character as usual.

Please Note: Do NOT change sex or race with showracemenu after first confirming your character.

## FAQ

### Removing the Modlist

You can just remove the MO2 folder and be done with it. SKSE and ENB files will still be in your game folder so I recommend using [ENB and ReShade Manager](https://www.nexusmods.com/skyrimspecialedition/mods/4143) if you want to remove the ENB.

### Ultrawide Options

I have an ultra-wide, it's just not worth it in my opinion. Skyrim isn't made for it; if you disagree, check [this guide](https://docs.google.com/document/d/1D3Yapmu_IkTWSszJ4h9wpNxgNLCi46f7XiJknpdMb6E/edit?usp=sharing) by my friend Mantis for compatibility with such screens.

### I have a question

Ask it in my Discord, link [here](https://discord.gg/ZgjVrXp). The support channel in the Wabbajack Discord is for Installation questions, not support over in game stuff or suggestions.

### I have a bug

Report it in my Discord, link [here](https://discord.gg/ZgjVrXp). The support channel in the Wabbajack Discord is for Installation questions, not bug reports.

### A face part is crashing me! | Some hair/facial hair clips!

The 5th Facepart is a lie. Known and unsolvable. | Make sure to have selected a High Poly Head under Face Part, some hairstyle will remain bugged but it is known and I do not know how to fix them. The mod they're from doesn't only offer those bugged hairstyles so it remains for the rest of what it proposes.

Some NPCs have a neck seam, that's known, I'm waiting for an update of [EasyNPC](https://www.nexusmods.com/skyrimspecialedition/mods/52313?tab=description) to solve them, I talk to the author so don't worry, it'll come. Play with them for now.

### What perk does the new weapons use?
- Rapiers get Sword perks
- Pikes get great sword perks
- Halberds get two handed axe perks
- Quarter Staffs get War Hammer perks
- Claws get dagger perks
- Whips get mace perks

### My character T-Poses!

Cap your framerate, either with BethINI, SSE Display Tweaks, or ENB.

### "I am bothered by the way NPCs look in the game!" and "How do NPCs look?? Are they rugged? Are they supermodels? Are they vanilla?"

I really do not care and won't take your opinion into account. I've scoured a lot of NPC overhauls (from Eeekies', Northbourne, to Bijin, Pandorable or the Re-imagined Series) and handpicked them for the list so it fits MY tastes.

If you wonder how they look, [here's a document which lists what overhauls who (for vanilla NPCs)](https://github.com/SovnSkyrim/QWEST/blob/main/NPC%20Merge%20Notes.md). 

If you do not find someone, they're either from [Pride of Skyrim AIO](https://www.nexusmods.com/skyrimspecialedition/mods/48904) if a male, or [Courageous Women of Skyrim](https://www.nexusmods.com/skyrimspecialedition/mods/50812) if female. If neither of those have an overhaul, it'll be from [High Poly NPC Overhaul - Skyrim Special Edition](https://www.nexusmods.com/skyrimspecialedition/mods/44155). 

Any criticism on that is NOT welcome, and it is, in fact, the only aspect of the game I do not take ANY criticism from. Hearing complaints about this stuff gives me an instant headache. I cannot please everybody, so I decided to please myself.

### Creation Club (CC Content) Support?

Never gonna happen. I don't like paid mods at all, I don't think they're that high quality, and maintaining two profiles is already painful, so two more (EnaiRim CC and SimonRim CC) would be extremely annoying (we're talking running Synthesis eight times, DynDOLOD and Occlusion four times each).

CC Content isn't considered like DLCs (Dawnguard/Dragonborn/Hearthfire) and will never be treated as such.

Using them with QWEST! would be like installing your own mods: Support is forfeited and they will NOT work without patching.

## Credits and Thanks

- _YOU_ for actually reading the readme. Thanks a ton!!
- Halgari and everyone in the WJ Team - Wabbajack is awesome and so are you
- Althro for being such a resourceful person and helping with the Discord and development a lot.
- Chri3i for all the help during development, you are and keep being, a never ending help which is loved.
- TheSpaniard and Chanka for all the support you're doing in the discord.
- Crithion aka m.vlad for the art; trully amazing, I never spent my money so well.
- Every each of my Patreons for supporting me, and with the Special Folks of my discord, for helping with the development.

## Contact

While I'm always available on the [Wabbajack Discord](https://discord.gg/wabbajack), I would advise checking the Discord. The same goes for _Enhancements_ or _Feature/Mod Requests_. **DO NOT DM ME ON DISCORD. I WILL NOT PROVIDE SUPPORT FOR YOU IN DMS AND I WILL BLOCK YOU** but you can safely ping me in #qwest-support or my own Discord, I'll answer whenever I can.

## Changelog

See [Changelog](https://github.com/SovnSkyrim/Aldrnari/blob/main/Changelog.md).

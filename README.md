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

Aldrnari (ᚨᛚᛞᚱᚾᚨᚱᛁ) is my project to make a Skyrim ***I*** want to play.
It is an ode to my love for folk music; in fact, the idea came when I began listening to [Yggdrasil Music and SoundFX Overhaul](https://www.nexusmods.com/skyrimspecialedition/mods/21578) and started listening to folk music all together.

Aldrnari means "the nourisher of life" and is one of the many ways to say "fire" in Old Norse.
The idea came from the Heilung track [Elddansurin](https://www.youtube.com/watch?v=Xph2Phcj0LA) (it means [The fire dancer](https://lyricstranslate.com/en/elddansurin-fire-dancer.html)) because it represents how folk helped heal my soul and how, in Dark Souls, fire is extremely important.
Because yes, this list is heavily inspired by the Souls Games in the combat and gameplay mechanics, as you'll see further below.

This list is made to be challenging, rewarding, and, eventually, you will become an overpowered Dragonborn who goes against terrible and fierce enemies. 
It is deeply inspired by games like Dark Souls and Hellblade: Senua's Sacrifice, while having an artistic direction that comes close to screen-archery.

### Remarks

If you have any questions regarding the list, feel free to ask in the [Official Wabbajack Discord](https://discord.gg/wabbajack) or on the [Elysium and Aldrnari Community Discord](https://discord.gg/FAfPb9T).

This project started as a collaboration between Althro and I on Tinvaak 2. Over time, however, we realised our end goals were different, and he gave permission for me to use the base that had been created. Aldrnari would not exist without Althro and the work he put into creating and patching Tinvaak 2. Go show him some love and play [Tinvaak 2](https://github.com/Althro/Tinvaak2). [Permission proof](http://i.prntscr.com/NwKOu-apRU6DrMDb9R5eOw.png)

Due to being in programming studies, I (Sovn) will be updating the list less than some more active list developpers, but this list isn't going to die soon.

The art for the list was made by [Crithion/m.vlad](https://mvlad.design/), a fellow Modlist Developer (author of [Narsil](https://mvlad.design/narsil/), a VR list), and artist. I commissioned him and he did an amazing job!

# Disclaimer

### READING THIS README IN ITS ENTIRETY IS REQUIRED FOR THE LIST TO WORK. IT WILL NOT WORK IF YOU DON'T READ. THIS ISN'T ROCKET SCIENCE SO BE PATIENT AND READ CAREFULLY. THE README DOESN'T END AT "HOW TO START UP THE LIST". 
### I am going to answer "readme" to any question answered in this document - you have been warned. 
### THIS LIST MASSIVELY CHANGES THE GAME, IT HAS BEEN TAILORED IN A CERTAIN WAY THAT YOU WOULDNT HAVE THE SAME EXPERIENCE IF YOU MODDED THE GAME YOURSELF WITH THE SAME MODS; THUS, DO NOT REPORT ANY BUG/ERROR/ISSUE/PROBLEM TO MOD AUTHORS BUT ONLY TO ME THROUGH WABBAJACK'S DISCORD.

**Any changes that is not written in this readme breaks the rules of the Wabbajack Discord you're expected to join when seeking support for the list, thus avoid such behaviors and help will be provided.**


# Noteworthy Mods and what gameplay to expect.

An entire document has been made to give you as much information as I could without going too deep in analysis of mods. This document is called **[Modified Gameplay.md](https://github.com/SovnSkyrim/Aldrnari/blob/main/Modified%20Gameplay.md)** and acts as a second readme for the core gameplay and questions about what to expect. So go read [it](https://github.com/SovnSkyrim/Aldrnari/blob/main/Modified%20Gameplay.md)! 

# Installation
### Prerequisites
#### PC Specifications
Aldrnari is meant to use every single inch of my computer, and here are my specs:
  - I7-7700k
  - 1080Ti Zotac - 11GB of VRAM
  - 32GB of 3200mhz DDR4 RAM

Full PC Part Picker setup is [here](https://fr.pcpartpicker.com/list/ZHQQgt). I would recommend atleast 8GB+ of VRAM for 1080p, and for 1440p you will need a minimum of 10GB of VRAM, although more is highly recommended. There are tweaks at the bottom of this readme for 6GB of VRAM users, but they void support. I do not have stable 60FPS on 1440p everywhere with my setup because, frankly, I do not care about framerate if combat is fluid and I can take sexy screenshots. The average is 60FPS with dips in 50FPS in very few areas at 1080p because my screen is a 3840x1080p (no I don't play in ultrawide, that's pointless and no support will be offered for that either).

TitansBane, author of [Elysium](https://github.com/TitansBane/Elysium) has stated this: "When using Zangdar's ENB, the one within Elysium that **doesn't fit the weather mod** used in this list, I had more FPS than with Elysium, reaching a steady 60 FPS with a 3080, unlike Elysium which would dip to 50FPS. The key here is that the **recommended ENBs**, suited for NLA, are even **heavier** resulting in dips at 45FPS at times, all of this at 1440p."

If you want to join the community discord; click [here](https://discord.gg/Hg7HgzuZ)!

No performance options are available for now. If your PC does not meet the specifications required for this list, my other list, [QWEST!](https://github.com/SovnSkyrim/QWEST), will probably work for you. It's made so that everyone can play it.

Disclaimer: Any questions regarding the specs and performance of the list will be redirected to here if you're asking me. I cannot stress how much I will not change the performance of the list. It is primarily made for screen-archery with innovative gameplay. You are free to modify the list once you have it to fit your frames dream, but I will not support you in doing so.

#### Size on Drive

Aldrnari is a big list, but it is in a constant evolution. Check the Wabbajack UI by simply hovering your mouse on the card for the list to check it's size. It is atleast 350GB+ so you will NEED an SSD, for the game. You can always put the downloads folder on an HDD, it'll only make the installation slower.

### Pre-Installation

These steps are only needed if you install the Modlist for the first time. If you are updating the Modlist, jump straight to [Updating](#updating).

#### Installing Microsoft Visual C++ Redistributable Package - You do not have this on your computer natively!

I doubt you need to do this since you likely already have this installed. This package is required for MO2 and you can download it from [Microsoft](https://support.microsoft.com/en-us/help/2977003/the-latest-supported-visual-c-downloads). Download the x64 version under "Visual Studio 2015, 2017 and 2019". [Direct link](https://aka.ms/vs/16/release/vc_redist.x64.exe) if you can't find it.

#### Installing Microsoft .NET 5.0 - You do not have this on your computer natively!

Please ensure you have .NET v5.0 installed. Download the **desktop app installer and console app x64** from Microsoft here https://dotnet.microsoft.com/download/dotnet/5.0/runtime.

## FAILING TO INSTALL MICROSOFT VISUAL C++ AND MICROSOFT .NET 5.0 WILL RESULT IN CTDS WHEN LAUNCHING THE GAME. PLEASE INSTALL THEM.

#### Steam Library

If you have your Steam library in Program Files, read [this](https://github.com/LostDragonist/steam-library-setup-tool/wiki/Usage-Guide) to put it somewhere else.
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

[THIS](https://imgur.com/a/1dySo8q) is approximately what a clean Skyrim install should look like after shredding or cleaning it manually.

## Start Skyrim

After you have done everything above and got a clean SSE installation ready, start the Launcher and open the _Options_ menu.

1. Leave the quality to what Skyrim sets it to, but you can lower it if you wish. FPS gain is minor though.
2. Set the _Aspect Ratio_ and _Resolution_ to your monitor's native values
3. Set _Antialiasing_ to _Off_
4. Check _Windowed Mode_ and _Borderless_

Start the game and exit once you're in the main menu.

## Anniversary Edition (AE) workaround

This list isn't made for the Anniversary Edition of Skyrim released on the 11th November 2021, use this [tool](https://www.nexusmods.com/skyrimspecialedition/mods/57618?tab=description) to downgrade your local files to the last Skyrim Special Edition version the list has been made for.

After Wabbajack has been completed, you can safely verify your files within Steam to get back the good files for any list using AE, you only need the downgraded files for the installation.

### Using Wabbajack

## Preparations

Download the release to a _working folder_. This folder **must not** be in a _common folder_ like your Desktop, Downloads or Program Files folder. It's best to create a Wabbajack folder near the root level of your drive like `C:/Wabbajack`.

Grab the latest release of Wabbajack from [here](https://github.com/wabbajack-tools/wabbajack/releases) and place the `Wabbajack.exe` file in the _working folder_.

Wabbajack will not work with Windows 7, I will not offer any kind of support for users of that operating system.

The following files are **NOT** going to download themselves through Wabbajack. Yes I know, it's annoying, but there is nothing I can do for now about it. So since taking down the list would be even worse, ensure that those are downloaded somewhere; the next step is the creation of the folders for Wabbajack to function, and you will place those files in the "Downloads" Folder you will create.
 
- https://mega.nz/file/xUc0zRLY#NYwbmmHOZhpSF2hpV7hMRYejgZsL_MAIVv_DfjK9JRM - Elwaps Speedtree
- https://mega.nz/#!x0QWjKKL!B9xkI29Dg0YoBPAo1fyXa_PxtBoma_f4UmSMOiwnv2A - HG Hairdos
- https://drive.google.com/file/d/15FORniyQfEMRvcJoEsU9dzqzD30MjoHz/view?usp=sharing - xLODGEN.83
- https://mega.nz/file/S0gjECST#TvdX1Mh33lZqqT1vCbRJnDDTKnQ5E1-FI8hVRDi9Kps - [SunJeong] Ninirim Collection - 3BBB bodyslide v0.2
 

On top of those required files, there is a high chance that the mods in [this spreadsheet](https://docs.google.com/spreadsheets/d/1ouhJioGEfyNdpBbNU874-0zKjG_Q8Z3Xr57P4-2maMw/edit?usp=sharing) are goint to cause issues while downloading. So if you plan on leaving it overnight, [get those](https://docs.google.com/spreadsheets/d/1ouhJioGEfyNdpBbNU874-0zKjG_Q8Z3Xr57P4-2maMw/edit?usp=sharing) manually first, place in the downloads folder that is going to get created in the next step, and start the download as instructed in the next step. 

## Downloading and Installing

The download and installation process can take a very long time (10+hours) depending on your system specs. Wabbajack will calculate the amount of threads it will use at the start of the installation. To have the highest amount of threads and thus the fastest speed, it is advised to have the working folder on an SSD.

#### The BSA creation is an extremely important step to avoid the list being over 500GB in size and gain performance. It will take over 10hours for some people and that is normal. Avoid closing Wabbajack during it. Complaining about it in support isn't going to make it faster so please avoid doing so.

1. Open the Wabbajack.exe and select "Browse Modlists".
2. Scroll until you find Aldrnari, you can make it easier using the filter at the top for Games, in it select Skyrim Special Edition.
3. Create a folder for the List at the root of your drive (like the Wabbajack folder) called "Aldrnari".
4. Select the created folder in 3. as your installation folder.
5. Go back to your drive, and create a new folder, called "Wabbajack Downloads Folder". This specific folder can be on a different drive if you wish.
6. Put the files downloaded in the prior step into this folder AS IS. Do **not** extract the archives.
7. Select the created folder in 5. as your downloads folder.
8. Click the Go/Begin button.
9. Wait for Wabbajack to finish.

This is the biggest list on Wabbajack at the time of writing this, so it is normal that it takes an incredibly long time the first time you install it, users have reported downloading and installing for more than 10h, without Wabbajack ever erroring, thus, it is highly recommended to leave it over-night.

#### The BSA creation is an extremely important step to avoid the list being over 500GB in size and gain performance. It will take over 10hours for some people and that is normal. Avoid closing Wabbajack during it. Complaining about it in support isn't going to make it faster so please avoid doing so.


### Problems with Wabbajack

There are a lot of different scenarios where Wabbajack will produce an error. I recommend re-running Wabbajack before posting anything. Wabbajack will continue where it left off so you lose no progress.

**Could not download x**:

If a mod updated and the old files got deleted, it is impossible to download them. In this case, just wait until I update the Modlist.

Some files are known to be problematic, it is likely those are the ones that failed. You can download them here and place the archives **AS IS** in the downloads folder.

- https://mega.nz/file/xUc0zRLY#NYwbmmHOZhpSF2hpV7hMRYejgZsL_MAIVv_DfjK9JRM - Elwaps Speedtree
- https://mega.nz/#!x0QWjKKL!B9xkI29Dg0YoBPAo1fyXa_PxtBoma_f4UmSMOiwnv2A - HG Hairdos
- https://drive.google.com/file/d/15FORniyQfEMRvcJoEsU9dzqzD30MjoHz/view?usp=sharing - xLODGEN.83
- https://mega.nz/file/S0gjECST#TvdX1Mh33lZqqT1vCbRJnDDTKnQ5E1-FI8hVRDi9Kps - [SunJeong] Ninirim Collection - 3BBB bodyslide v0.2
- https://docs.google.com/spreadsheets/d/1ouhJioGEfyNdpBbNU874-0zKjG_Q8Z3Xr57P4-2maMw/edit?usp=sharing - Spreadsheet with the remaining files

**x is not a whitelisted download**:

This can happen when I update the modlist. Check if a new update is available and wait if there is none.

**Wabbajack could not find my game folder**:

Wabbajack will not work with a pirated version of the game. If you own the game on Steam, go back to the [Pre-Installation](#pre-installation) step.

### Post-Installation

## Stock Game

Unlike regular Skyrim installation or some other Wabbajack Lists, Aldrnari comes with the **Stock Game Feature**, basically, it's a copy of a Skyrim installation located within your installation folder, cleaned and with everything but an ENB in it. It allows you to not worry about conflicting files with Vortex or other Wabbajack lists. Thus, after Wabbajack completes, you need not to move anything to your regular Skyrim Installation.

There are more steps though, so please keep following the next steps to setup the game optimally.

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

Here's [my setup, for example](http://prntscr.com/1zg7x61).

## Getting an ENB

Aldrnari comes with 3 ENBs tweaked for the list's Setup:
- fnenb by Foxnne
- Pacific Blue by FOSSTEN
- Apex Somber by Digital Dreams

Info on them is in [Modified Gameplay.md](https://github.com/SovnSkyrim/Aldrnari/blob/main/Modified%20Gameplay.md) so I highly suggest reading it. (use control + F key combo to search for ENB).

How to install them? Simple, in the **installation folder** there will be a folder named **ENBs**, in there the three ENBs are located. Simply **copy the contents of the folder named after the preset you want to use to the Stock Game Folder located in the installation folder**.

If it prompts you to overwrite something, press yes.

## How to start up Aldrnari

Head over to the installation folder and locate an executable named `ModOrganizer.exe` and launch it. Once it's launched, there will be a dropdown box on the top right and a big run button next to it. Ensure it is set to SKSE by selecting it in the dropdown box and then hitting the run button.

If a message [Registry Key do not match](https://cdn.discordapp.com/attachments/879580504351981598/881915659188060230/mah1.jpg) appear, press Yes.

Upon pressing New Game, you will spawn on the walls of Helgen burning down. Once all the messages on the top left corner of the screen are gone, set the MCMs as instructed below.

If you press enter, you will be teleported to a location where you will be able to personalize your character.
After confirming your character, please note that you should not use the 'showracemenu' console command to change sex or race, it will break a lot more than you think. If you want to customize the MCMs or need some more time to setup Skyrim Unbound, you can use the "Stay there" option.

Do NOT Select a NON DRAGONBORN OPTION within Skyrim Unbound! Doing so will result in broken questlines! You cannot escape your destiny!

## Updating

If this Modlist receives an update, please check the Changelog before doing anything. Always backup your saves or start a new game after updating.

**Wabbajack will delete all files that are not part of the Modlist when updating!**

This means that any additional mods you have installed on top of the Modlist will be deleted. Your saves will be kept, but please check each update changelog to see if the update is save compatible.  Your downloads folder will not be touched!

Updating is like installing. You only have to make sure that you select the same path and tick the _overwrite existing Modlist_ button.

## In-Game MCM Options
Once the game has loaded, wait until there are no more messages on the top left corner. Then you can hit escape and click on Mod Configuration to continue this section.

MCMs are not automated due to a personal choice: There are many important tweaks, a mountain of informations, and useful stuff in them that can solve problems or make your experience better. Those are my own and what I recommend for the least amount of problems and a balanced experience.

Do NOT Select a **NON DRAGONBORN OPTION** within Skyrim Unbound! Doing so will result in broken questlines! You cannot escape your destiny!

Do not press enter as you will be teleported into an area which will nullify all MCM's completed after it. Make sure you are still above Helgen whilst yuou are completing MCM's.

#### Game Difficulty
- The difficulty in this Modlist is quite harder (more info on that in [Modified Gameplay.md](https://github.com/SovnSkyrim/Aldrnari/blob/main/Modified%20Gameplay.md)) so I highly suggest not using Legendary. I personally play on Expert. Adept is also fine.

#### All Geared up Derivative
- Weapons - Player
    - Shield Stay on arm while Equipped: Enable
    - Toggle un/equipping Torso Armor: Enable 
- Misc. Player :
  - Require Torso Armor : Enabled
  - (you can tweak stuff showing on you whenever you want, if something bothers you)
- NPC :
  - Enable Weapons : Enabled

#### Better Vampire NPCs
- Not an MCM   
    - In your inventory there's an item called "Vampire's Bloodgem" allowing to tweak stuff by clicking on it while crouched. 
        - I leave it as default. You can tweak it all you want. Experimental stuff may cause issues as expected. When done drop the bloodgem.

#### Campfire
- Gameplay
  - Hotkeys
    - Set your Hotkeys however you want
    - I go by :
    - Create item : N
    - Build Campfire : B
    - Harvest wood : H
    - Instincts : Nothing

#### Cold Region Behavior
- General Settings
	- Main Settings
		- Enable Mod Features

#### Engarde: 
- Keybutton
    - Defensive Actions
        - Modifier is by default Shift
        - Swap stuff around depending on what you want, leave as default if you're new to Engarde. Keep in mind off-hand action requires shift to be pressed
        - Defensive Action key: C 

#### Heartbreaker (Optional) 
- Main Settings
    - Learn Spell Power: Enabled
    - It gives you a power to put npcs in stagger once per IRL hour so you can rip out their hearts; you can also bind it so you can do it anytime.

#### MoreHUD:
- Presets
    - Load User Settings?: GO

#### OBIS - Bandits
- Leave as is
    - Why? Enabling in the MCMs is only for the additional spawns option, but that is not the aim of the encounter mods chosen in Aldrnari. I'm buffing everyone instead of giving you hordes of enemies.

#### OBIS - Patrols
- Settings
    - Enable: Enabled

#### Optimal Potion Hotkey
- Set one keybind (mine is "<" for Health only, I don't use the other ones)

#### Radiant Requirements
- Settings
  - Dragon lair: 10
  - Draugr Crypt: 5
  - Forsworn Camp: 10
  - Hagraven Nest: 20
  - Vampire Lair: 25
  - Werewolf Lair: 25
  - Dragon Priest Lair: 25
  - Falmer Hive: 20
  - Giant Camp: 20
  - Spriggan Grove: 10
  - Warlock Lair: 1

#### Real Names
- Basic Options:
	- Settings
		- Strangers Mode: Enabled
		- Title Preference:Title and/or Surname>Epithet
	- Special Exclusions:
		- Exclude Dragon Priests?: Enabled
		- Excluse Corpses?: Enabled

#### SkyUI
- Advanced → SWF Version Checking : 
  - Map Menu : Disabled
  - Favorites Menu : Disabled
  - Inventory Menu : Disabled
  - Barter Menu : Disabled
  - Container Menu : Disabled
  - Crafting Menu : Disabled

#### SmoothCam  -for 3rd person players-
- Presets
  - Load Preset
    There are two presets available for you to use. I personally prefer the Modern one but some prefer Souls Like, try both and see which you like!
- Make sure only the Alternate Conversation Camera Patch is ticked in Compatibility.

#### Thieves Guild Requirements
- Misc Options 
  - Load Preset  
Cycle through all the tabs
 - Load Preset again (now it will stick)
  
#### Timing is Everything
- Extra Options 
  - Load Preset  
Cycle through all the tabs
 - Load Preset again (now it will stick)

#### Trade and Barter
- Barter Rates
  - Modify Barter Settings: Enabled
    - Presets
       - Difficult Preset

# How to start playing

After you finish customizing all the MCMs, the last thing to check is the Skyrim Unbound MCM. You can safely experiment with all the options in there, **EXCEPT choosing a Non-Dragonborn character.**
Anything else in that menu can be customized to your liking. When you're ready, simply press the Start Adventure button in the Unbound MCM. You will then be prompted to create your character as usual.

Please Note: Do NOT change sex or race with showracemenu after first confirming your character.

## FAQ

### A word on transformation based builds

Vampire lords and werewolves are currently being investigated due to a large amount of bug reports, so unless you want to actively help the development by submitting detailled bug reports, I strongly advise against running such builds. (Liches are fine though)

### Community Discord?
If you want to join the community discord; click [here](https://discord.gg/FAfPb9T)!

### Removing the Modlist

You can just remove the MO2 folder and be done with it. Aldrnari uses the Stock Game system, which copies a game installation within it's installation folder, thus, it is entirely self contained.

### Gamepad Support?
[Check this guide by Evanidus14](https://github.com/Evanidus14/Aldrnari-Gamepad-Setup)

### Nevernude for streaming/suspicious wife?

Check under the "Generated FIles" Separator in the left panel of MO2 and tick [Underwear for NPCs](http://prntscr.com/1qpkyit), it'll dynamically add underwear to everyone as you loot them.

### Ultrawide Options

I have an ultra-wide, but it's just not worth the hassle of setting Skyrim up for it, in my opinion. You can try using [this](https://www.nexusmods.com/skyrimspecialedition/mods/53909) but I will not offer any kind of support regarding HUD/UI problems to you.

### I have a question

Ask it in Wabbajack's Discord, [link here](https://discord.com/invite/wabbajack). But make sure you're using the Aldrnari support channel and not a general channel!

### A face part is crashing me! | Some hair/facial hair clips!

The 5th Facepart is a lie. Known and unsolvable. | Make sure to have selected a High Poly Head under Face Part, some hairstyle will remain bugged but it is known and I do not know how to fix them. The mod they're from doesn't only offer those bugged hairstyles so it remains for the rest of what it proposes.

Some NPCs have a neck seam, that's known, I'm waiting for an update of [EasyNPC](https://www.nexusmods.com/skyrimspecialedition/mods/52313?tab=description) to solve them, I talk to the author so don't worry, it'll come. Play with them for now.

### What perk does the new weapons use?
- Rapiers get sword perks
- Pikes get greatsword perks
- Halberds get two-handed axe perks
- Quarter Staffs get war hammer perks
- Claws get dagger perks
- Whips get mace perks

### My character T-Poses!

Cap your framerate, either with BethINI, SSE Display Tweaks, or ENB.

### "I am bothered by the way NPCs look in the game!" and "How do NPCs look?? Are they rugged? Are they supermodels? Are they vanilla?"

I really do not care and won't take your opinion into account. I've scoured a lot of NPC overhauls (from Eeekies', Northbourne, to Bijin, Pandorable or the Re-imagined Series) and handpicked them for the list so it fits ***MY*** tastes.

If you wonder how they look, [here's a document which lists what overhauls who (for vanilla NPCs)](https://github.com/SovnSkyrim/QWEST/blob/main/NPC%20Merge%20Notes.md). 

If you do not find someone, they're either from [Pride of Skyrim AIO](https://www.nexusmods.com/skyrimspecialedition/mods/48904) if a male, or [Courageous Women of Skyrim](https://www.nexusmods.com/skyrimspecialedition/mods/50812) if female. If neither of those have an overhaul, it'll be from [Modpocalypse](https://www.nexusmods.com/skyrimspecialedition/mods/54422). 

Any criticism on that is NOT welcome, and it is, in fact, the only aspect of the game I do not take ANY criticism from. Hearing complaints about this stuff gives me an instant headache. I cannot please everybody, so I decided to please myself.

### I can't dodge! C is swapping shoulders/Making me run!

Watch [this video](https://www.youtube.com/watch?v=ZzyHYVAzQ8E) to replicate the setup.

If it still isn't working, check SmoothCam's MCM and your vanilla keybindings to check if something is conflicting. C is merely a placeholder and can be anything, same for < for the potions, it can be anything you wish.

### New armors have different textures/invisible on my beast race character..

New armors and most of the game is designed around humans and mers, not beast races. I cannot patch all armors so it'll remain that way.

### Where are my Screenshots???

Wabbajack **cannot** edit the Skyrim.ini to fill a new path for screenshots that make sense on your computer. FIll in a new path [in the Skyrim.ini](https://prnt.sc/1sk3z1m).

### Creation Club (CC Content) Support?

No, I don't like them.

CC Content isn't considered like DLCs (Dawnguard/Dragonborn/Hearthfire) and will never be treated as such.

Using them with Aldrnari would be like installing your own mods: Support is forfeited and they will NOT work without patching.

### Why don't you wanna use Inigo/Legacy of the Dragonborn (LOTD)????? They're the best mods ever!!!!
[Modified Gameplay.md](https://github.com/SovnSkyrim/Aldrnari/blob/main/Modified%20Gameplay.md) has the answer, use Ctrl+F in there.

### Please give us more fps... / A more performance friendly profile??

I have 2 tips one that voids support, one that doesnt:
- Regenerate DynDOLOD with other settings, not High
     - Current DynDOLOD uses High and Ultra Trees, those are known to be FPS Heavy
- Follow this set of instructions to put your ENB in a more performance mode:
     - In Enbseries.ini; change those values:
     - [EFFECT]
	- EnableDepthOfField=false
	- EnableNormalMappingShadows=false
     - [SSAO_GAME]
	- AOAmount=0.0
	- AOAmountInterior=0.0
     - [SSAO_SSIL]
	- UseSelfIntersecting=false
	- SourceTexturesScale=0.25
	- SamplingQuality=1
	- If you put intersecting to false, I strongly you to change SamplingRange=0.24 to SamplingRange=0.40 for balance the AO on face NPC in exterior
     - [COMPLEXFIRELIGHTS]
	- EnableShadow=false
     - [COMPLEXPARTICLELIGHTS]
	- EnableShadow=false
	- EnableNormalMappingShadows=false
     - [REFLECTION]
	- Quality=-1
     - [UNDERWATER]
	- HighQualityCaustics=false
     - [WATER]
	- EnableTessellation=false

Those are the easiest tweaks you can do. Editing DynDOLOD voids support, editing the ENB does not.

### I want to support your work!

I have a [Patreon](https://www.patreon.com/Sovn) but please, consider donating to [Wabbajack](https://www.patreon.com/user/overview?u=11907933) too!

## Credits and Thanks

- _YOU_ for actually reading the readme. Thanks a ton!!
- Halgari and everyone in the Wabbajack Team - Wabbajack is awesome and so are you for contributing to the project in the past or future.
- Special thanks to certain of my friends in the Wabbajack Team, namely Lively, JTK, Xanza, Jdsmith, Tate Taylor, Dylan Perry, Total, Luca, TitansBane, Unnoen, Fantastigasmical Alice, Patchier, Tsukino, cacophony, Wartortle, KFC, Chanka, TheSpaniard, Chris, Derryl, JanuarySnow, and Crithion - My life wouldn't be the same if I didn't join Wabbajack; this project has been influenced in one way or another but each and everyone of you.
- Althro for the creation of the base and being a very resourceful person. None of my work would simply exist without you. 
- Crithion aka m.vlad for the art; trully amazing, I never spent my money so well.
- Every each of my Patreons for supporting me, and with the Special Folks of my discord, for helping with the development.

## Contact

While I'm always available on the [Wabbajack Discord](https://discord.gg/wabbajack), I would advise checking the Discord. The same goes for _Enhancements_ or _Feature/Mod Requests_. **DO NOT DM ME ON DISCORD. I WILL NOT PROVIDE SUPPORT FOR YOU IN DMS AND I WILL BLOCK YOU**.

## Changelog

See [Changelog](https://github.com/SovnSkyrim/Aldrnari/blob/main/Changelog.md).

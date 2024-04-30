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

This project started as a collaboration between Althro and I on Tinvaak 2. Over time, however, we realised our end goals were different, and he gave permission for me to use the base that had been created; now only Aldrnari remains as Tinvaak 2 has been taken down. Aldrnari would not exist without Althro and the work he put into creating and patching Tinvaak 2. [Permission proof](http://i.prntscr.com/NwKOu-apRU6DrMDb9R5eOw.png)

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

Aldrnari is meant to use my computer; its main specs are as follows:

 - Ryzen 7 5800x3D
 - ASUS TUF 3090
 - 32GB of RAM

So I cannot give you a true answer if your much lower ended computer will work with it. The general consensus is that you will not get a steady 60 FPS/1440p game unless you have similar specs as I do [(PCPartPicker list here)](https://fr.pcpartpicker.com/list/PMTq9r).

My old 1080ti with I7 7700k could run this list at 1080p; capping at 40fps (yes that's how I used to play); as the goal of the list is to have innovative gameplay and amazing visuals. It is also more memory bound than CPU bound so a 6GB of VRAM GPU with 32GB of RAM will do better than a 8GB of VRAM GPU with 16GB of RAM.

If you want to join the community Discord; click [here](https://discord.gg/FAfPb9T)!

No performance options are available for now. There are some directions at the bottom of this readme but they're directions; **you're on your own**.

Disclaimer: Any questions regarding the specs and performance of the list will be redirected to here if you're asking me. I cannot stress how much I will not change the performance of the list. It is primarily made for screen-archery with innovative gameplay. You are free to modify the list once you have it to fit your frames dream, but I will not support you in doing so.

#### Size on Drive

Aldrnari is a big list, but it is in a constant evolution. Check the Wabbajack UI by simply hovering your mouse on the card for the list to check its size. You need to ADD UP both download and install size to get the true number. It is atleast 350GB+ so you will NEED an SSD, for the game. You can always put the downloads folder on an HDD, it'll only make the installation slower.

You **cannot** use any kind of **external SSD/HDD** loaded through a **USB**. The list is **too big** for a USB Controller to output enough data. Use of SATA or NVMe ports is required.

### Pre-Installation

These steps are only needed if you install the Modlist for the first time. If you are updating the Modlist, jump straight to [Updating](#updating).

#### Installing Microsoft Visual C++ Redistributable Package - You do not have this on your computer natively!

I doubt you need to do this since you likely already have this installed. This package is required for MO2 and you can download it from [Microsoft](https://support.microsoft.com/en-us/help/2977003/the-latest-supported-visual-c-downloads). Download the x64 version under "Visual Studio 2015, 2017 and 2019". [Direct link](https://aka.ms/vs/16/release/vc_redist.x64.exe) if you can't find it.

#### Installing Microsoft .NET 5.0 - You do not have this on your computer natively!

Please ensure you have .NET v5.0 installed (even if you have .NET v6.X!!). Download the **desktop app installer and console app x64** from Microsoft here https://dotnet.microsoft.com/download/dotnet/5.0/runtime.

![Dot Net](https://raw.githubusercontent.com/Lost-Outpost/lost-legacy/main/images/microsoft-net-5-0-installation.png)

## FAILING TO INSTALL MICROSOFT VISUAL C++ AND MICROSOFT .NET 5.0 WILL RESULT IN CTDS WHEN LAUNCHING THE GAME. PLEASE INSTALL THEM.

#### Steam Library

If you have your Steam library in Program Files, read [this](https://github.com/LostDragonist/steam-library-setup-tool/wiki/Usage-Guide) to put it somewhere else.
I will not provide support to people with Skyrim in their Program Files folder.
Locations like Documents, Downloads, Desktop, or OneDrive are NOT fine. The best location would be ``C:\SteamLibrary`` if you have a single drive, or whichever Drive Letter you have on your main Games drive. Such a location is also called the "root of the drive."

#### Change Steam's Update Behavior

SSE is still being updated by Bethesda (they only add Creation Club content). Whenever the game updates, the entire modding community goes silent for the next one or two weeks because some mods need to be updated to the latest game runtime version.

To ensure that Steam does not automatically update the game for you, head over to the Properties window, navigate to the _Updates_ tab and change _Automatic updates_ to _Only update this game when I launch it_. You should also disable the Steam Cloud while you're at it.

#### Set the Game language to English

Just do it. This entire Modlist is in English and 99% of all mods you will find are also in English. I highly recommend playing the game in English and **I will not give support to people with a non-English game**. **Wabbajack WILL NOT WORK with non-english installs.**

Open the Steam Properties window, navigate to the _Language_ tab and select _English_ from the dropdown menu.

#### Clean Skyrim

I highly recommend uninstalling the game through Steam, deleting the game folder, and reinstalling it. You should also clean up the `Skyrim Special Edition` folder in `Documents/My Games/` by deleting the contents in it. 

[THIS](https://imgur.com/a/1dySo8q) is approximately what a clean Skyrim install should look like after shredding or cleaning it manually.

We always will use the latest Skyrim version available on Steam. We use this update for ease of installation, despite downgrading the .exe through Wabbajack and not using any Creation Club Content. This list does not require the Anniversary Edition Upgrade, if you have this version installed Wabbajack will recognize your Skyrim installation; it will simply not use any Creation Club Content installed.

## Start Skyrim

After you have done everything above and got a clean SSE installation ready, just start the game to main menu and close it back. The options set in Vanilla Skyrim won't be used and your resolution will automatically be set by Wabbajack.

Start the game and exit once you're in the main menu.

### Using Wabbajack

## Preparations

Download the release to a _working folder_. This folder **must not** be in a _common folder_ like your Desktop, Downloads or Program Files folder. It's best to create a Wabbajack folder near the root level of your drive like `C:/Wabbajack`.

Grab the latest release of Wabbajack from [here](https://github.com/wabbajack-tools/wabbajack/releases) and place the `Wabbajack.exe` file in the _working folder_.
Wabbajack will not work with Windows 7, I will not offer any kind of support for users of that operating system.

The following files are **NOT** going to download themselves through Wabbajack. As annoying as this is, it is currently neccessary to **MANUALLY DOWNLOAD** the following files **BEFORE** starting the Wabbajack installation process.
 
- All the problematic files are in the spreadsheet [here](https://docs.google.com/spreadsheets/d/1ouhJioGEfyNdpBbNU874-0zKjG_Q8Z3Xr57P4-2maMw/edit#gid=0)

If you do not download [those](https://docs.google.com/spreadsheets/d/1ouhJioGEfyNdpBbNU874-0zKjG_Q8Z3Xr57P4-2maMw/edit#gid=0), Wabbajack will not complete!

The files you download manually will be in your normal Windows downloads folder. You will move these files from your Windows downloads folder to the Wabbajack downloads folder created in **Step 5.** of the next section, **BEFORE** starting the installation process.

## Downloading and Installing

The download and installation process can take a very long time (10+hours) depending on your system specs. Wabbajack will calculate the amount of threads it will use at the start of the installation. To have the highest amount of threads and thus the fastest speed, it is **highly advised** to have the working folder on an SSD. Using an HDD or external drive **will result in extremely long installation and loadtimes, aswell as potentially Performance/Stability issues ingame and is NOT supported.** As stated before, the only acceptable use for an HDD in this list is to put the Wabbajack downloads folder created in step 5. below there. 

#### The BSA creation is an extremely important step to avoid the list being over 500GB in size and gain performance. It will take over 10hours for some people and that is normal. Avoid closing Wabbajack during it. Complaining about it in support isn't going to make it faster so please avoid doing so.

1. Open the Wabbajack.exe and select "Browse Modlists".
2. Scroll until you find Aldrnari, you can make it easier using the filter at the top for Games, in it select Skyrim Special Edition.
3. Create a folder for the List at the root of your drive (like the Wabbajack folder) called "Aldrnari".
4. Select the created folder in 3. as your installation folder.
5. Go back to your drive, and create a new folder, called "Wabbajack Downloads Folder". This specific folder can be on a different drive and/or HDD if you wish.
6. Put the files you downloaded manually from the spreadsheet in the prior step into this folder AS IS. Do **not** extract the archives.
7. Select the created folder in 5. as your downloads folder.
8. Click the Go/Begin button.
9. Wait for Wabbajack to finish.

**YOU ARE NOT DONE AFTER WABBAJACK SAYS INSTALL COMPLETE, PLEASE KEEP READING UNTIL THE END TO SET UP YOUR GAME. YOU WILL HAVE ISSUES OTHERWISE.**

This is the biggest list on Wabbajack at the time of writing this, so it is normal that it takes an incredibly long time the first time you install it, users have reported downloading and installing for more than 10h, without Wabbajack ever erroring, thus, it is highly recommended to leave it over-night.

#### The BSA creation is an extremely important step to avoid the list being over 500GB in size and gain performance. It will take over 10hours for some people and that is normal. Avoid closing Wabbajack during it. Complaining about it in support isn't going to make it faster so please avoid doing so.


### Problems with Wabbajack

There are a lot of different scenarios where Wabbajack will produce an error. I recommend re-running Wabbajack before posting anything. Wabbajack will continue where it left off so you lose no progress.

**Could not download x**:

Some files are required to be downloaded manually:

- https://docs.google.com/spreadsheets/d/1ouhJioGEfyNdpBbNU874-0zKjG_Q8Z3Xr57P4-2maMw/edit?usp=sharing - Spreadsheet with the remaining files

- Could not download anything with "Aldrnari" in the name: These output files can be big and are hosted on the Wabbajack network. Try ticking the "network workaround" option in Wabbajack settings, accessed by clicking on the gear symbol in the top right. [This](https://imgur.com/a/CUYKraB)
If this does not fix your issue, please try connecting to a VPN and running Wabbajack again.

If the problem persists, please feel free to ask in the community discord available [here](https://discord.gg/FAfPb9T)


**x is not a whitelisted download**:

This can happen when I update the modlist. Check if a new update is available and wait if there is none.

**Wabbajack could not find my game folder**:

Wabbajack will not work with a pirated version of the game. If you own the game on Steam, go back to the [Pre-Installation](#pre-installation) step.

### Post-Installation

## Stock Game

Unlike regular Skyrim installation or some other Wabbajack Lists, Aldrnari comes with the **Stock Game Feature**, basically, it's a copy of a Skyrim installation located within your installation folder, cleaned and with everything in it, even an ENB! It allows you to not worry about conflicting files with Vortex or other Wabbajack lists. Thus, after Wabbajack completes, you **DO NOT** need to move anything to your regular Skyrim Installation.

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

Here's [my setup, for example](https://prnt.sc/Lqn9qpACeusB).

## Getting an ENB

**Aldrnari has to be ran with an ENB. DISABLING IT WILL RESULT IN A BLURRY MESS, YOU HAVE BEEN WARNED.**

By default; Aldrnari comes with **[Berserkyr ENB](https://www.nexusmods.com/skyrimspecialedition/mods/62381)** which is probably the best look for the list.
You cannot remove the ENB as per NAT-ENB's modpage:

**"NAT-ENB.esp PLUGIN IS NOT MEANT TO BE USED WITHOUT THE NAT.ENB preset, NEITHER THE ENB PRESET CANNOT BE USED WITHOUT THE NAT-ENB.esp PLUGIN.""**

If you want to try other stuff, check out **[PRT XII](https://www.nexusmods.com/skyrimspecialedition/mods/4743)**, the ENB that is a cinematic suite of effects. It is also made by L00ping and requires NAT.III so no worries on that side.

You can make it do anything, fantasy? check. Clear? check. Grim? check. It does everything and looks absolutely wonderful!
In the "ENBs" folder of the Installation folder, you'll have all the presets available on the modpage; you will have just 3 steps to install any of them:

- Delete the following: [the enbseries folder, the enblocal.ini file and the enbseries.ini file](https://cdn.discordapp.com/attachments/623314477151944718910214194635350037/unknown.png) and enbcache folder if present; in the Stock Game folder located in your installation folder..
- copy and paste **THE CONTENTS OF THE FOLDER** named after the preset you want to use to the Stock Game folder located in your installation folder.
- Untick the mod ``Berserkyr ENB`` under ``Stuff I like at the bottom``

Please re-do this steps every time you want to swap a preset!
PRTX XII ENB Presets are extremely customizable, so go look up on it's modpage on how to do so if you're into tinkering the look of your game!

## How to start up Aldrnari

Head over to the installation folder and locate an executable named `ModOrganizer.exe` and launch it. If a message Registry Key does not match appear, press Yes. Once it's launched, there will be a dropdown box on the top right and a big run button next to it. Ensure it is set to SKSE by selecting it in the dropdown box and then hitting the run button.

If when doing the above instructions; MO2 locks itself then unlocks itself after a few seconds, this means you have not downloaded the .NET 5.0 as instructed above. So please ensure you have .NET v5.0 installed (even if you have .NET v6.X!!). Download the **desktop app installer and console app x64** from Microsoft here https://dotnet.microsoft.com/download/dotnet/5.0/runtime.

Upon pressing New Game, you will be at the end of Helgen's exit tunnel. This means the game is modded and you can go to MCMs, after creating your character.

## In-Game Options and Character Customization

Before you can customize your MCMs, you will be prompted with character customization. You can change your appearance at any time with the ```showracemenu``` command, but be warned that you **cannot** change race and/or sex after the initial choice.

You may want to use the command ```player.sae idlestaticposeastart``` to stop your character doing animations when using Racemenu. Just jump when you've got the control of your character to reset it.

After making your character a few options will appear in front of you:
- First: Your race's history. This grants you different buffs.
- Second: The choice between Ralof and Hadvar: Only important for Civil War Questline.
- Third: The attack speed fix. It doesn't really matter, as ADXP | MCO does not use Attack Speed at all.
- Fourth: You can choose to not enable your health regeneration. You can choose either.

Once the game has loaded, wait until there are no more messages on the top left corner. 

## Gameplay advices

An entire document has been made to give you as much information as I could without going too deep in analysis of mods. This document is called **[Modified Gameplay.md](https://github.com/SovnSkyrim/Aldrnari/blob/main/Modified%20Gameplay.md)** and acts as a second readme for the core gameplay and questions about what to expect. So go read [it](https://github.com/SovnSkyrim/Aldrnari/blob/main/Modified%20Gameplay.md)! **THIS DOCUMENT WILL ANSWER A LOT OF THE QUESTIONS YOU HAVE, SO READING IT IS ABSOLUTELY REQUIRED.**

#### Game Difficulty

- The difficulty in this Modlist is quite harder (more info on that in [Modified Gameplay.md](https://github.com/SovnSkyrim/Aldrnari/blob/main/Modified%20Gameplay.md)) so I highly suggest not using Legendary. I personally play on Expert. Adept is also fine.

You will be able to edit the percentage of damage taken and received through [Custom Difficulty UI](https://www.nexusmods.com/skyrimspecialedition/mods/14362)'s MCM, so don't hesitate pumping the difficulty high when you're op.

#### MCM Setup

The MCMs have been automated thanks to [MCM Recorder](https://www.nexusmods.com/skyrimspecialedition/mods/61719).

**But you should check that Timing is Everything doesn't display the default values, if it does, go to it's last panel and load the preset twice**

#### Keybindings

Before giving you the list of keys; here's a tip: If you wish to bind any to your mouse; bind your mouse to a keyboard key (like U) instead of modifying the keybind to use "Mouse 1/2/3/4/5". This is known to cause issues.

Aldrnari has a multitude of new keys, [heck this chart could even help you more](https://raw.githubusercontent.com/SovnSkyrim/Aldrnari/main/keybindchart.webp), here are the main changes:

- **Power Attacks: U**
  - To modify that key, open the ```One Click Power Attack``` mod in explorer and go to ```\SKSE\Plugins``` and open the ```OneClickPowerAttack.ini```. Modify the ```ForceRightKey``` keycode with the one you want in [this chart](https://ck.uesp.net/wiki/Input_Script)
- TK Dodge: the Dodge key is on C, if you plan to keep it on C be sure to change the keybind for the "Autorun" button in Skyrim controls.
  - to modify that key, open the mod in explorer and go to ```\SKSE\Plugins``` and open the ```TK Dodge RE.ini```. Modify the ```DodgeHotkey``` keycode with the one you want in [this chart](https://ck.uesp.net/wiki/Input_Script)
  - Make sure no input shares the same key, your gamepad/other inputs aren't conflicting (by unplugging them if dodge does not work) and that animations have loaded by not T-posing in 3rd person.
- Smoothcam: Shoulder camera swap is on C aswell
  - Modifiable in MCM
- Ultimate Immersion Toggle: X to hide all the HUD
  - Modifiable in MCM
- Simple Horse: H to call the horse
  - Modifiable in MCM
- Quick Light: L to light the lantern on when equipped
  - Modifiable in MCM
- True Directional Movement: G to use target lock
  - Modifiable in MCM - Highly recommended to be put on a mouse button.
- Hotkey Potions: Y for Healing potions, U for Stamina Potions
  - Modifiable in MCM - Highly recommended to be put on a mouse button.
- Campfire: N to create an item, B to build a campfire, H to harvest wood
  - Modifiable in MCM
- Bow Rapid Combo: Mouse Key 2
  - Modifiiable in MCM
- Simplest Horses: U to access horse inventory.
  - Modifiable in MCM

**If you cannot modify a keybind in a MCM; do the following:**

- Save and close the game.
- in ```SKSE Based Mods``` (a separator, on the left panel of MO2), untick "Skyrim Souls RE - Updated"
- Load back the game, and end your keybind setup.
- Save and close the game again.
- Tick it back on.

# How to start playing

Go through the cave exit, you've probably noticed it's the exit of Helgen. You can now enjoy the game.

## Updating

If this Modlist receives an update, please check the Changelog before doing anything. **THE CHANGELOG WILL ALWAYS SPECIFICALLY MENTION IF A NEW SAVE IS REQUIRED, SO PLEASE CHECK IT FIRST.** Always backup your saves before updating.

**Wabbajack will delete all files that are not part of the Modlist when updating!**

This means that any additional mods you have installed on top of the Modlist will be deleted. Prefixing added mods with [NoDelete] as shown [here](https://cdn.discordapp.com/attachments/854794524302770216/984783333638692874/unknown.png) will keep Wabbajack from deleting them, but please keep [RULE 11](https://cdn.discordapp.com/attachments/854794524302770216/984782911045767188/unknown.png) in mind. Your saves will be kept, but please check each update changelog to see if the update is save compatible.  Your downloads folder will not be touched!

Updating is like installing. You only have to make sure that you select the same path and tick the _overwrite existing Modlist_ button.


## FAQ

### Community Discord?

If you want to join the community discord; click [here](https://discord.gg/FAfPb9T)!

### Removing the Modlist/Moving the Modlist

You can just remove the MO2 folder and be done with it. Aldrnari uses the Stock Game system, which copies a game installation within it's installation folder, thus, it is entirely self contained.

To move the Modlist to a new drive, simply cut and paste the install folder to your chosen drive. Afterwards be sure to change the SKSE path in the dropdown menu in MO2.

### Gamepad Support?

There isn't one at the moment. Feel free to test anything and come back to me.

### Nevernude for streaming/suspicious wife?

Check under the "Generated FIles" Separator in the left panel of MO2 and tick [Underwear for NPCs](http://prntscr.com/1qpkyit), it'll dynamically add underwear to everyone as you loot them.

### Ultrawide Options

Remove the mod ```Static Skill Leveling Upgraded``` in Mod Organizer then you can install a compatibility mod for the UI; aka this: [Nordic UI Widescreen Fixes](https://www.nexusmods.com/skyrimspecialedition/mods/63339?tab=files).

### I have a question

Ask it in our Community discord, [link here](https://discord.gg/sxBH2c2MqF). Please make sure to grab the appropriate roles in order to see the modlist specific channels.

### A face part is crashing me! | Some hair/facial hair clips!

The 5th Facepart is a lie. Known and unsolvable. | Make sure to have selected a High Poly Head under Face Part, some hairstyle will remain bugged but it is known and I do not know how to fix them. The mod they're from doesn't only offer those bugged hairstyles so it remains for the rest of what it proposes.

Some NPCs have a neck seam, that's known, I'm waiting for an update of [EasyNPC](https://www.nexusmods.com/skyrimspecialedition/mods/52313?tab=description) to solve them, I talk to the author so don't worry, it'll come. Play with them for now.

### What perk do the new weapons use?

- Rapiers get sword perks
- Pikes get greatsword perks
- Halberds get two-handed axe perks
- Quarter Staffs get war hammer perks

### My character T-Poses!

If this is upon loading your savefile, that is normal. This list uses lots of new Animations, it can take up to a few minutes for them fully load in. The same goes for Dodge not working on loading your save. 

If it's constantly; cap your framerate, either with BethINI, SSE Display Tweaks, or ENB.

### I keep getting put into 3rd/third person when in combat

Intended; the list is tailored to 3rd person combat. More information in the [Modified Gameplay.md](https://github.com/SovnSkyrim/Aldrnari/blob/main/Modified%20Gameplay.md).

### Dragons.. They regenerate health, they circle around, can't kill them, and after Mirmulnir, 3 spawned at Whiterun...

Intended. Dragons unlock shouts which are one of the strongest tools available to you; thus dragons are quite hard to take on. You **will** be strong enough at some point.

### "I am bothered by the way NPCs look in the game!" and "How do NPCs look?? Are they rugged? Are they supermodels? Are they vanilla?"

I really do not care and won't take your opinion into account. I've scoured a lot of NPC overhauls (from Eeekies', Northbourne, to Bijin, Pandorable or the Re-imagined Series) and handpicked them for the list so it fits ***MY*** tastes.

If you wonder how they look, [here's a document which lists what overhauls who (for vanilla NPCs)](https://github.com/SovnSkyrim/QWEST/blob/main/NPC%20Merge%20Notes.md). 

If you do not find someone, they're either from [Pride of Skyrim AIO](https://www.nexusmods.com/skyrimspecialedition/mods/48904) if a male, or [Courageous Women of Skyrim](https://www.nexusmods.com/skyrimspecialedition/mods/50812) if female. If neither of those have an overhaul, it'll be from [Modpocalypse](https://www.nexusmods.com/skyrimspecialedition/mods/54422). 

Any criticism on that is NOT welcome, and it is, in fact, the only aspect of the game I do not take ANY criticism from. Hearing complaints about this stuff gives me an instant headache. I cannot please everybody, so I decided to please myself.

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

### Oh my fucking god the very far mountains are so low poly... Isn't it supposed to look 4K everywhere?

No it isn't. The inis used are based on medium and optimized for the best of extreme and performance. The graphics are stunning at close range and that's what I care about; not lods.

If you REALLY want those to be better; slap ```uLargeRefLODGridSize``` to like 21 in SkyrimPrefs.ini; the one located in your profiles folder.

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
- Special thanks to certain of my friends in the Wabbajack Team, namely Lively, JTK, Xanza, Jdsmith, Tate Taylor, Dylan Perry, Total, Luca, TitansBane, Unnoen, Fantastigasmical Alice, Patchier, Tsukino, cacophony, Wartortle, KFC, Chanka, TheSpaniard, Chris, Derryl, JanuarySnow, and Crithion - My life wouldn't be the same if I didn't join Wabbajack; this project has been influenced in one way or another by each and everyone of you.
- Althro for the creation of the base. None of this work would simply exist without you. 
- Crithion aka m.vlad for the art; trully amazing, I never spent my money so well.
- Every each of my Patreons for supporting me, and with the Special Folks of my discord, for helping with the development.

## Contact

While I'm always available on the [Wabbajack Discord](https://discord.gg/wabbajack), I would advise checking the Discord. The same goes for _Enhancements_ or _Feature/Mod Requests_. **DO NOT DM ME ON DISCORD. I WILL NOT PROVIDE SUPPORT FOR YOU IN DMS AND I WILL BLOCK YOU**.

## Changelog

See [Changelog](https://github.com/SovnSkyrim/Aldrnari/blob/main/Changelog.md).

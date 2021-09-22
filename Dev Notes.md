# Dev Notes:

### Merges
Here are the final [MO2 merge profiles](https://drive.google.com/file/d/1xkICfEjnDUPOUxiZBvBVLJLf8NZ7dzwL/view?usp=sharing) so you can re-merge stuff with zEdit.

- Enemy Merge: Do not touch it; it's a handpatched extremely modified, merge of known enemy overhauls.
  - how it was made: Taken all OP mods, forwarded was sounded the strongest, and consistency patched for SkyTEST/OBIS Keywords and SRCEO Perks
  - If a mod from it breaks, try your hardest to take it out from the patches. It's not worth it updating mods in it.
  - Resave in CK after Merging.
- Mihail Merge: Do not touch it; Patches depend on it because it was thought to be a mod on it's own.
  - The esps are Jd's cleaned esps, they're supposed to work as is, doesn't matter if Mihail updated stuff.
  - Check ALL Patches with "Mihail Merge" if remerging it. 
  - Resave in CK after Merging.
- Weapons and Armors: Can be easily modified but not updated as almost all ESPs have been edited.
  - Weapons: Either handplaced throughout the world or in OWL's LLs, make sure OWL wins all conflicts.
  - Armors: COBJs created and edited thoroughly, and the Outfit Master Patch has a lot of stuff as master.
  - Most COBJs either require a perk or a quest completion to be obtained.
  - Not worth updating unless it's only mesh/texture edits
  - in the same vein, Bodyslide is set at CBBE Athletic with as many Physics as possible.
  - Resave in CK after Merging. 
- Playerhomes Merge: Can be easily modified but not updated as almost all ESPs have been edited.
  - If an ESP depends on "For Sale.esp", it has been modified.
  - Don't touch the Dev Aveza, you'll regret it, it's a pain to deal with so if it causes issues > take it out.
  - make sure the Lux Patches on top of the interiors (as they've all been consistency patched) match so you don't have errors.
  - Resave in CK after Merging.

### Lod Generation 
Use the Speedtree original stuff (make it overwrite the modified one) if you need to regenerate lods. Settings are High with Ultra Trees, no Grass Lods.

### Synthesis 
- To have outfitfixer, you need to edit the ``PipelineSettings.json`` and add a nickname to a facefixer patcher like [this](http://prntscr.com/1t8w6uj). After a restart you'll be able to have 2 facefixer, with the first one selected being outfitfixer.
- [here are the used patchers](https://prnt.sc/1t8vxv5)

### Backup
[Here's a backup of zEdit and Synthesis in case it breaks](https://drive.google.com/file/d/1bsO_UqR0pRi3u0hIyDLVKa9ZT3Mdl8n8/view?usp=sharing)

### Weather
I really want to use NAT3 for the list, but it's private when I write this. If it ever releases, just take out [all of those esps](http://prntscr.com/1t8wm68), get NAT3, and use [this esp](https://drive.google.com/file/d/1vtEziAs01UzKJVuSfWYZ6MSKmOKf8-hd/view?usp=sharing) to solve conflicts and put both at the end of the Load Order.

(Please make sure my conflict solving esp isn't full of errors due to an update of NAT-ENB.esp)

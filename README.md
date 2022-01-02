# QAZpad
This repository contains the build guide, firmware, and assorted design files for the QAZpad keyboard.

QMK and Vial source code, alond with pre-compiled firmware .hex's, are in the ```QMK+Vial Firmware``` directory.

### With the default keymap, to reset the keyboard, hold down the right-most key on the second row, and tap the left-most key on the second row.



The Kit comes with a PCB, switch plate, base plate, and M2 screws and 10mm standoffs. You may also have a 3D-printed midlayer and/or an encoder & knob.
![KitContents](https://github.com/KiserDesigns/QAZpad/blob/main/Build%20Guide%20Photos/KitContents.jpg)

In addition to the kit, you will need fifty-one (51) MX-compatible switches, your choice of stabilizers, and a Philips #1 or #0 screwdriver.
![WhatElseYouNeed](https://github.com/KiserDesigns/QAZpad/blob/main/Build%20Guide%20Photos/WhatElseYouNeed.jpg)

If you have an encoder, first separate the knob from the encoder. The knob will not fit through the switchplate.
![DisassembleEncoder](https://github.com/KiserDesigns/QAZpad/blob/main/Build%20Guide%20Photos/DisassembleEncoder.jpg)

Remove the PCB from its anti-static bubble wrap and lay it on a safe surface (the bubble wrap works for this, or a silicone mat).
![PCB](https://github.com/KiserDesigns/QAZpad/blob/main/Build%20Guide%20Photos/PCB.jpg)

If you are opting for an encoder (or two) solder those first. You can immediately test the encoder function by plugging the PCB into your computer.
![SolderEncoder](https://github.com/KiserDesigns/QAZpad/blob/main/Build%20Guide%20Photos/SolderEncoder.jpg)

On the front of the PCB, the stabilizer and switch locations are marked corresponding to their layout.
The 2u keys (numpad '0') are labeled 2A, 2B, 2C, and 2D.

For the regular QAZpad layout, the stabilier locations are marked SL and BL, for Split bars Left and Big bar Left.

For the full-stagger layout, the locations are marked SC and BC, for Split bars Center and Big bar Center.

For the soupthpaw layout, the locations are marked SR and BR, for Split bars Right and Big bar Right.

The full-stagger split bars are 3u and 2.25u, and needs a 3u stabilizer wire.
![PCBFront](https://github.com/KiserDesigns/QAZpad/blob/main/Build%20Guide%20Photos/PCBFront.jpg)

Then screw in the stabilizers that you are using. You won't be able to access the stabs once you assemble the board so don't forget this!
![ScrewStabs](https://github.com/KiserDesigns/QAZpad/blob/main/Build%20Guide%20Photos/ScrewStabs.jpg)

Now it is time to prepare the switch plate to be mated to the PCB. The front/top of the switch plate is completely blank, while the back/bottom (inside) of the switch plate has a manufaturer's mark near the middle. Place the plate right-side-up with that mark facing down. Clip switches in to the corners and one in the center of your plate (or as close to the corners as you can get). 
![BackOfPlate](https://github.com/KiserDesigns/QAZpad/blob/main/Build%20Guide%20Photos/BackOfPlate.jpg)
![SomeSwitchesInPlate](https://github.com/KiserDesigns/QAZpad/blob/main/Build%20Guide%20Photos/SomeSwitchesInPlate.jpg)

Being careful to line up the switch legs and pins, assmeble the PCB and switch plate to make the switch assembly. If you are using 5-leg switches, this may take a little force, and result in a "snap" as the switch legs mate with the PCB.
![AttachPlate](https://github.com/KiserDesigns/QAZpad/blob/main/Build%20Guide%20Photos/AttachPlate.jpg)

Starting with the locations closest to the existing switches, fill in the plate with switches, snapping them into the plate. 

Retaining tabs on the top and bottom of the switch housings should mate well with the switch plate as you press them in. 

Periodically check to make sure none of the switch pins are bent, and all 3 (or 5) pins and legs of each switch are visible protruding through the bottom of the PCB.
![FillSwitches](https://github.com/KiserDesigns/QAZpad/blob/main/Build%20Guide%20Photos/FillSwitches.jpg)
![AllSwitches](https://github.com/KiserDesigns/QAZpad/blob/main/Build%20Guide%20Photos/AllSwitches.jpg)

Solder the switches to the PCB. At this point, plug the PCB in to your computer and load up the Vial GUI.

Use the Layout tab to confige the GUI to match the layout of your build. You can select your spacebar layout, which side the numpad is on, and if you are using a 2u '0' key.

![VialLayout](https://user-images.githubusercontent.com/96897936/147889404-398c31ed-acb2-4778-9a71-74edd8c1eb08.png)

Once the Layout tab is correct, use the Matrix Test tab to test all the switches. You will have to click "Unlock" in the bottom right (and follow the on-screen instructions) to enable the matrix test.

After the keyboard and all switches are confirmed working, is it time to assemble the rest on the board. If you do not have a 3D printed milayer, use the brass standoffs and screws to attach the bottom plate to the switch plate. If you have a midlayer, please note its orientation:
![MidlayerOrientation](https://github.com/KiserDesigns/QAZpad/blob/main/Build%20Guide%20Photos/MidlayerOrientation.jpg)

Angling the switch assembly in to the top of the midlayer, slide the USB port on the PCB under the top lip of the midlayer.
![AngleMidlayerAssembly](https://github.com/KiserDesigns/QAZpad/blob/main/Build%20Guide%20Photos/AngleMidlayerAssembly.jpg)
![MidlayerUSB](https://github.com/KiserDesigns/QAZpad/blob/main/Build%20Guide%20Photos/MidlayerUSB.jpg)

Using the included screws, attach the switch plate to the midlayer. 
## Be gentle, as the plastic is easy to strip.
Start with opposite corners, and working your way to the middle.
### Only tighten to where the gap is closed. Do not over tighten
![TopScrews](https://github.com/KiserDesigns/QAZpad/blob/main/Build%20Guide%20Photos/TopScrews.jpg)

Flip the board over and repeat the same thing with the bottom plate.
## Again, do not overtighten the screws. The midlayer plastic is easy to strip
Place rubber feet in the 4 corners, and one in the very center.
### Once you attach the bottom plate, the only way to reset the keyboard without disassembly is with the Reset keycode, as the button is covered by the bottom plate
![BottomScrewsFeet](https://github.com/KiserDesigns/QAZpad/blob/main/Build%20Guide%20Photos/BottomScrewsFeet.jpg)

Congratulations! You have built your QAZpad keyboard!
![FinishedBuild](https://github.com/KiserDesigns/QAZpad/blob/main/Build%20Guide%20Photos/FinishedBuild.jpg)

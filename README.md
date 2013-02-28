MFile
=========

This is an update to the winAVR MFile meant to make my life with AVR on linux (and with AS6) a bit easier.  I will eventually add some additional tools to facilitate:

- Creation of Makefiles using an existing AS6 project as a source.
- Creation of AS6 .cproj files to facilitate debugging
- Fuses
- *Automated* devicelist based generation using <avr/io.h>
- ???

Version
-

0.1...ish

Recipe
-----------

Vim and AVR-GCC.  For now, I'm (in vim) copying most of <avr/io.h> directly into the xmem.c, and then including every single device file, and collecting every single device tag (using some #undefs to keep the compile going).  

Build xmem.c, piping stderr into a file.  (Failure is success!)
```
avr-gcc -c xmem.c 2> output.txt
```
*Note that the 2 is important!*

Once that's done, some macros are executed in vim to remove the noise, leaving only #pragma messages, and #warnings (unsupported devices).  Allowing a scrape of every supported device, and their external memory starting address, if there is one.

one more macro to make the device list, and place into mfile.tcl

Installation
--------------

Simply copy the new mfile.tcl over your old one.


License
-
Whatever MFile's licence is, I suppose.

Anthony Clay - ZarthCode LLC


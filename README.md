# XBEE & Platformio Sandbox

This repository is suposed to host some basic examples of Arduino Xbee comunication using platformio framework.

### Dependencies
* Platformio
Quick Setup, with Python 2.7:
``` (bash)
  pip install platformio
```

### Platformio Basic Setup
Create a new project
* Create and move to project folder
``` (bash)
  mkdir arduino_example && cd arduino_example
```
* Initiate the workspace
``` (bash)
  pio init --board [BOARD TYPE]
```
(For board types consult [here](http://platformio.org/boards), or call the command: **pio boards**)
* Place source files on src/ folder
* Compile and Upload
``` (bash)
  pio run --target upload
```

#### Useful Commands
* Compile project
``` (bash)
  pio run
```

* Compile and Upload to Board
``` (bash)
  pio run --target upload
```

* Clean project (delete compiled objects)
```(bash)
platformio run --target clean
```
* List Board Types
``` (bash)
  pio boards
```

* List Ports Avaliable
```(bash)
  pio device list
```

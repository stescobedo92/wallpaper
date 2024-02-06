# wallpaper
This C++ project provides a straightforward utility for changing the desktop wallpaper on both Windows and Linux operating systems. The program takes a command-line argument, which should be the file path to the desired image.

# Features
* Cross-Platform: Utilizes conditional compilation to support both Windows and Linux environments.
* Windows Support: Utilizes the Windows API (SystemParametersInfo) to change the desktop wallpaper on Windows.
* Linux Support: Utilizes the gsettings command to set the desktop background on Linux systems.
* Command-Line Interface: Accepts the file path to the desired image as a command-line argument.
* Informative Output: Provides console feedback, confirming the successful change of the desktop background.

# Usage
For execution in Linux environments, navigate to the executable folder then open the folder in your terminal (bash, zsh, etc) and execute the following statement:

```bash
./wallppaper /path/to/your/image.jpg
```

For execution in Windows environments, move to the executable folder then open the folder in your terminal (powershell or cmd) and execute the following statement

```powershell
.\wallppaper.exe /path/to/your/image.jpg
```

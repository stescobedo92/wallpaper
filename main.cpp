#include <iostream>
#include <string>

#ifdef _WIN32
    #include <Windows.h>
#else
    #include <cstdlib>
#endif

void changeWallpaper(const std::string& imagePath) {
#ifdef _WIN32
    // Change desktop background in Windows
    SystemParametersInfo(SPI_SETDESKWALLPAPER, 0, (void*)imagePath.c_str(), SPIF_UPDATEINIFILE);
    std::cout << "Desktop background changed in Windows." << std::endl;
#else
    // Change desktop background in Linux
    std::string command = "gsettings set org.gnome.desktop.background picture-uri file://" + imagePath;
    std::system(command.c_str());
    std::cout << "Desktop background changed in Linux" << std::endl;
#endif
}

int main()
{
    std::cout<<"Hello world"<<std::endl;

    return 0;
}
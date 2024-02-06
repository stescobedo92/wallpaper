#include <iostream>
#include <string>

#ifdef _WIN32
    #include <Windows.h>
#else
    #include <cstdlib>
#endif

int main()
{
    std::cout<<"Hello world"<<std::endl;

    return 0;
}
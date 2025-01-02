#include <iostream>

#ifdef _WIN32
    #define MYLIB_API __declspec(dllexport)
#else
    #define MYLIB_API
#endif

extern "C" MYLIB_API void myFunction() {
    std::cout << "Hello from the DLL!" << std::endl;
}
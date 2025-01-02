#ifdef _WIN32
    #define MYLIB_API __declspec(dllimport)
#else
    #define MYLIB_API
#endif

extern "C" MYLIB_API void myFunction();

int main() {
    myFunction();
    return 0;
}
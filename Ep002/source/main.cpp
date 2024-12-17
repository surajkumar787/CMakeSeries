#include<iostream>
#include<concepts>

template <typename T>
requires std::integral<T>
T add(T a, T b){
    return a + b;
}

int main(){
    std::cout << "hellow c++ 20 using cmake tool" << std::endl;
    std::cout << "add a + b = " << add(10, 20) << std::endl;
    return 0;
}
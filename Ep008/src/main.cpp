#include "stats.h"
#include <iostream>
#include <vector>

int main(){
    std::vector<int> vec = {2, 3, 4, 5, 6, 7, 89, 90, 1};
    std::cout << "mean : " << mean(vec.data(), vec.size()) << std::endl;
    return 0;
}
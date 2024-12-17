#include "dog.h"

Dog::Dog(){
    std::cout << "constructer for dog created!";
}

void Dog::set_dog_name(const std::string dname){
        name = dname;
}

std::string Dog::get_dog_name(){
    return name;
}

Dog::~Dog(){
    std::cout << "disctrutor for dog call!";
}
#ifndef DOG_H
#define DOG_H
#endif

#include <iostream>
//#include <string>


class Dog {
    std::string name;

    public:
    Dog();
    void set_dog_name(const std::string dname);
    std::string get_dog_name();
    ~Dog();
};
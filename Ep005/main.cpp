#include "dog.h"
#include "log.h"
#include "operation.h"


int main(){
    Dog dog1;
    dog1.set_dog_name("lucie");
    std::cout << dog1.get_dog_name() << std::endl;
    std::cout << add(23, 7) << std::endl;
    log_data("Log data available!", LogType::MESSAGE);
    return 0;
}
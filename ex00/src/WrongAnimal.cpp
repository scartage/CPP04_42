#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->_type = "Not Gaia";
    std::cout << " !*!*!* [Constructor Wrong Animal] !*!*!* " << _type << " called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << " !*!*!* [Destructor Wrong Animal] !*!*!* " << _type << " called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& old){
    std::cout << " !*!*!* [Copy WrongAnimal Constructor] !*!*!*" << _type << " called" << std::endl;
    *this = old;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other){
    if (this != &other){
        this->_type = other._type;
    }
    std::cout << " !*!*!* [Operator WrongAnimal Assignament Constructor] !*!*!* " << _type << " called" << std::endl;
    return *this;
}

void WrongAnimal::WrongSound(void) const{
    std::cout << " !*!*!* [Wrong Animal Func] *!*!*!" << " ** Wrong animal sound (snif snif) ** " << std::endl;
}

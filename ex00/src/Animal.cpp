#include "Animal.hpp"

Animal::Animal()
{
    this->_type = "Gaia";
    std::cout << " [Constructor animal] " << _type << " called" << std::endl;
}

Animal::~Animal()   
{
    std::cout << " [Destructor animal] " << _type << " called" << std::endl;
}

Animal::Animal(const Animal& old){
    std::cout << " [Copy Constructor] " << _type << " called" << std::endl;
    *this = old;
}

Animal& Animal::operator=(const Animal& other){
    if (this != &other){
        this->_type = other._type;
    }
    return *this;
}

void Animal::makeSound(void) const{
    std::cout << " [Animal Func] " << " ** ramdom animal sound ** " << std::endl;
}

std::string Animal::getType(void) const {
    return (this->_type);
}

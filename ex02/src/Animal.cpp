#include "Animal.hpp"

Animal::Animal()
{
    this->_type = "Gaia";
    std::cout << " [Constructor animal] " << _type << " called" << std::endl;
}

Animal::~Animal()   
{
    std::cout << " [Destructor animal] " << "class: Animal , subclass: " << _type << " that has been called" << std::endl;
}

Animal::Animal(const Animal& old){
    std::cout << " [Copy Constructor] " << _type << " called" << std::endl;
    *this = old;
}

Animal& Animal::operator=(const Animal& other){
    if (this != &other){
        this->_type = other._type;
    }
    std::cout << " [Operator Assignament Constructor] " << _type << " called" << std::endl;
    return *this;
}


// este metodo ahora esta definido como puramente virtual,
// la clase es abstracta, por lo tanto la subclase lo debe definir
/*
void Animal::makeSound(void) const{
    std::cout << " [Animal Func] " << " ** ramdom animal sound ** " << std::endl;
}*/

std::string Animal::getType(void) const {
    return (this->_type);
}

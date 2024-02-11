#include "Dog.hpp"

Dog::Dog()
{
    this->_type = "Dog";
    std::cout << " -- [Constructor Dog] -- " << _type << " called" << std::endl;
}

Dog::~Dog()
{
    std::cout << " -- [Destructor Dog] -- " << _type << " called" << std::endl;
}

Dog::Dog(const Dog& old) : Animal(old){
    std::cout << " [Copy DOG Constructor] " << _type << " called" << std::endl;
    *this = old;
}

Dog& Dog::operator=(const Dog& other){
    if (this != &other){
        this->_type = other.getType();
    }
    std::cout << " [DOG Operator Assignament Constructor] " << _type << " called" << std::endl;
    return *this;
}

void Dog::makeSound(void) const{
     std::cout << " !! [Dog func sound] !!" << " Woof Woof WOFF " << std::endl;
}



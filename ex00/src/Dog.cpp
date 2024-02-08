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

void Dog::makeSound(void) const{
     std::cout << " !! [Dog sound] !!" << " Woof Woof WOFF " << std::endl;
}



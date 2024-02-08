#include "Cat.hpp"

Cat::Cat()
{
    this->_type = "Cat";
    std::cout << " --- [Constructor Cat] --- " << _type << " called" << std::endl;
}

Cat::~Cat()
{
    std::cout << " --- [Destructor Cat] --- " << _type << " called" << std::endl;
}

void Cat::makeSound(void) const{
     std::cout << " !! [Cat sound] !!" << " meow meow MEOW " << std::endl;
}

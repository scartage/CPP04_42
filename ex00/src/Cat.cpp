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

Cat::Cat(const Cat& old): Animal(old) {
    std::cout << " [Copy Cat Constructor] " << _type << " called" << std::endl;
    *this = old;
}

Cat& Cat::operator=(const Cat& other){
    if (this != &other){
        this->_type = other.getType();
    }
    std::cout << " [Cat Operator Assignament Constructor] " << _type << " called" << std::endl;
    return *this;
}


void Cat::makeSound(void) const{
     std::cout << " !! [Cat fucn sound] !!" << " meow meow MEOW " << std::endl;
}

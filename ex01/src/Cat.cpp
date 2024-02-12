#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->_type = "Cat";
    this->_brain = new Brain();
    std::cout << " --- [Constructor Cat] --- " <<  _type << " called" << std::endl;
}

Cat::~Cat()
{
    delete _brain;
    std::cout << " --- [Destructor Cat] --- " << _type << " called" << std::endl;
}

Cat::Cat(const Cat& old): Animal(old) {
    std::cout << " [Copy Cat Constructor] " << _type << " called" << std::endl;
    _brain = new Brain(*old._brain);
}

Cat& Cat::operator=(const Cat& other){
    if (this != &other){
        Animal::operator=(other);
        *_brain = *other._brain;
    }
    std::cout << " [Cat Operator Assignament Constructor] " << _type << " called" << std::endl;
    return *this;
}


void Cat::makeSound(void) const{
     std::cout << " !! [Cat fucn sound] !!" << " meow meow MEOW " << std::endl;
}

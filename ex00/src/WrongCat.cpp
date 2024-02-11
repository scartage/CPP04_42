#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->_type = "cat";
    std::cout << " !*!*!* [Constructor Wrong Cat] !*!*!* " << _type << " called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << " !*!*!* [Destructor Wrong Cat] !*!*!* " << _type << " called" << std::endl;
}

void WrongCat::WrongSound(void) const{
    std::cout << " !*!*!*  [Cat Wrong func sound] !*!*!* " << " mew mew bby cat sound " << std::endl;
}

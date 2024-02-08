#include "Cat.hpp"
#include "Dog.hpp"

int main(void){
    const Animal* an = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << dog->getType() << " " << std::endl;
    std::cout << cat->getType() << " " << std::endl;

    cat->makeSound();
    dog->makeSound();

    
    delete dog;
    delete cat;
    delete an;
    return 0;
}
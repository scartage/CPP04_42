#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void){
   const WrongAnimal* an = new WrongAnimal();
    const Animal* dog = new Dog();
    const WrongAnimal* cat = new WrongCat();

    std::cout << "This animal is type: " << dog->getType() << std::endl;
    std::cout << "This animal is type: " << cat->getType() << std::endl;

    cat->WrongSound();
    dog->makeSound();

    an->WrongSound();
    
    delete dog;
    delete cat;
    delete an;
    return 0;
}

/*int main()
{
	std::cout << BGRED"[ SUBJECT TEST ]"RESET << std::endl;
	Animal* meta = new Animal();
	Animal* j = new Dog();
	Animal* i = new Cat();

	std::cout << BGRED"[ Type tests ]"RESET << std::endl;
	std::cout << GREEN"Type: "RESET << meta->getType() << std::endl;
	std::cout << GREEN"Type: "RESET << j->getType() << " " << std::endl;
	std::cout << GREEN"Type: "RESET << i->getType() << " " << std::endl;
	std::cout << BGRED"[ Sounds test ]"RESET << std::endl;
	std::cout << GREEN"Sound: "RESET;
	i->makeSound();
	std::cout << GREEN"Sound: "RESET;
	j->makeSound();
	std::cout << GREEN"Sound: "RESET;
	meta->makeSound();

	delete meta;
	delete i;
	delete j;

	std::cout << BGRED"[ MORE TESTS ]"RESET << std::endl;
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongI = new WrongCat();
	Cat cat;
	Dog dog;
	Animal animal;
	Animal *cat2 = new Cat();
	Animal *an = new Animal();

	std::cout << BGRED"[ Type tests ]"RESET << std::endl;
	std::cout << GREEN"Type: "RESET << wrongMeta->getType() << " " << std::endl;
	std::cout << GREEN"Type: "RESET << wrongI->getType() << " " << std::endl;
	std::cout << GREEN"Type: "RESET << cat.getType() << " " << std::endl;
	std::cout << GREEN"Type: "RESET << dog.getType() << " " << std::endl;
	std::cout << GREEN"Type: "RESET << animal.getType() << " " << std::endl;
	std::cout << GREEN"Type: "RESET << cat2->getType() << std::endl;
	std::cout << GREEN"Type: "RESET << an->getType() << std::endl;

	std::cout << BGRED"[ Sounds tests ]"RESET << std::endl;
	std::cout << GREEN"Sound: "RESET;
	wrongI->WrongSound();
	std::cout << GREEN"Sound: "RESET;
	wrongMeta->WrongSound();
	std::cout << GREEN"Sound: "RESET;
	cat.makeSound();
	std::cout << GREEN"Sound: "RESET;
	dog.makeSound();
	std::cout << GREEN"Sound: "RESET;
	animal.makeSound();

	delete wrongMeta;
	delete wrongI;
	delete cat2;
	delete an;

	return 0;
}*/
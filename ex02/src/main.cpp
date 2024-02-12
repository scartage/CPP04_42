#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

/*Ya no se puede instancial un animal directamente
	ahora solo se puede trabajar con clases concretas que representen animales especificos
	evitando instanciar la clase base*/
int main(void)
{
	// Animal* an = new Animal();   esto ahora no es posible, ya que es abstracta
	Animal* dg= new Dog();
	Animal* ct= new Cat();


	dg->makeSound();
	ct->makeSound();

	delete dg;
	delete ct;
	return 0;
}
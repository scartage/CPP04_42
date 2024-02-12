#include "Cat.hpp"
#include "Dog.hpp"
#include <iostream>

int main(void){
	// Creamos un perro
	Dog originalDog;
	originalDog.addIdea("Buenos dias mundo");
	std::cout << "origina dog primera idea: " << originalDog.getIdea(0) << std::endl;


	// realizamos copia profunda
	Dog copyDog = originalDog;
	copyDog.addIdea("buenas tardes gente"); //aqui modificamos la copia
	std::cout << "copy dog primera idea: " << copyDog.getIdea(0) << std::endl;
	std::cout << "copy dog nueva idea: " << copyDog.getIdea(1) << std::endl;

	std::cout << std::endl;
	
	//verificamos que originalDog no cambio
	std::cout << "original dog primera idea despues de la copia: " << std::endl;
	std::cout << "primera idea del og: " << originalDog.getIdea(0) << std::endl;

	//intentamos imprimir una segunda idea del og (debe fallar)
	try
	{
		std::cout << "segunda idea del og: " << originalDog.getIdea(1) << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << "OG no tiene seungas ideas, copia profunda confirmada!!! " << '\n';
	}
	return 0;
}


// Main basico para demostrar el uso correcto entre cons y dest entre subclass y clase base
/*int main(void){
	const int size = 100;
	Animal* animals[size];

	for (int i = 0; i < size / 2; i++){
		animals[i] = new Dog();
	}

	for (int i = size / 2; i < size; i++){
		animals[i] = new Cat();
	}

	for (int i = 0; i < size; i++){
		std::cout << animals[i]->getType() << " says: ";
		animals[i]->makeSound();
	}

	for (int i = 0; i < size; i++){
		delete animals[i];
	}
    return 0;
}*/
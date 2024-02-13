# C++ - Module 04
Subtype polymorphism, abstract classes, interfaces

## Polimorfismo y Métodos Virtuales
La razón principal para usar punteros de la clase base para referirse a objetos de clases derivadas es aprovechar el polimorfismo. Si Animal define un método makeSound() como virtual y Dog y Cat sobrescriben ese método, entonces al llamar dog->makeSound() o cat->makeSound(), se invocarán las implementaciones específicas de Dog y Cat, respectivamente, en lugar de la versión de Animal. Esto permite que diferentes tipos de objetos respondan de manera diferente a la misma llamada de método, basándose en el tipo real del objeto referenciado por el puntero, y no en el tipo del puntero.

Este comportamiento es fundamental en muchos patrones de diseño y sistemas que utilizan polimorfismo para manejar diferentes tipos de objetos de manera uniforme a través de una interfaz común (en este caso, la clase base Animal)

### Constructor
Un constructor es una función miembro especial de una clase que se invoca automáticamente cuando se crea un objeto de esa clase. Se utiliza para inicializar objetos. Los constructores tienen el mismo nombre que la clase y no tienen tipo de retorno.
### Destructor 
Un destructor es una función miembro especial que se invoca automáticamente cuando el alcance de un objeto termina o cuando se llama a delete en un puntero a un objeto. Se utiliza para realizar cualquier limpieza necesaria antes de que el objeto sea destruido, como liberar recursos adquiridos durante la vida del objeto. Los destructores tienen el mismo nombre que la clase precedido por una tilde (~) y no tienen tipo de retorno ni parámetros.

### Constructor de Copia
El constructor de copia crea un nuevo objeto como una copia de un objeto existente. Se invoca automáticamente en ciertas situaciones, como cuando un objeto se pasa por valor a una función. Permite controlar cómo se copian los objetos, lo que es crucial para clases que gestionan recursos como memoria dinámica.

### Operador de Asignación
El operador de asignación sobrecarga el operador = para asignar los valores de un objeto a otro existente. Es útil para definir cómo se deben copiar los miembros de un objeto a otro después de su inicialización inicial, especialmente para clases que gestionan recursos.

#### ¿Que pasa si no inicializo una clase base dentro de una subclase?
Cuando no inicializas explícitamente la clase base en un constructor de copia (o en otros constructores), C++ intentará llamar al constructor por defecto de la clase base. Si tu clase base no tiene un constructor por defecto o si quieres que la copia incluya una inicialización específica de los miembros heredados, necesitas hacer esta llamada explícita como se mostró arriba.

Este requerimiento es parte de cómo C++ maneja la herencia y la construcción de objetos. Asegura que todos los aspectos del objeto, tanto los definidos en la clase derivada como los heredados de clases base, se inicialicen de manera adecuada y predecible.

#### WrongAnimal y WrongCat, que nos enseñan?
Cuando declaras un método como virtual en una clase base (como Animal), le estás diciendo al compilador que esperas que ese método pueda ser sobrescrito en las clases derivadas (como Dog y Cat) y que cuando llames a ese método a través de un puntero o referencia de la clase base apuntando a un objeto de la clase derivada, quieres que se ejecute la versión de la clase derivada del método (si existe alguna). Esto es lo que permite el comportamiento polimórfico.

Por otro lado, si no utilizas virtual para el método en la clase base y luego sobrescribes ese método en una clase derivada, el método sobrescrito no se invocará a menos que estés trabajando directamente con un objeto de la clase derivada. En cambio, se invocará la versión de la clase base del método. Esto se debe a que, en ausencia de la palabra clave virtual, el compilador decide qué versión del método llamar en tiempo de compilación (vinculación estática), basándose en el tipo del puntero o referencia, en lugar de en el tipo real del objeto apuntado o referenciado, que se determina en tiempo de ejecución (vinculación dinámica).

## ABOUT Exercise 01: Shallow copies and Deep copies

Las copias superficiales (shallow copies) y las copias profundas (deep copies) son conceptos cruciales en la programación, especialmente en lenguajes como C++ que permiten un control detallado sobre la gestión de memoria.

### Copias Superficiales (Shallow Copy)
Una copia superficial de un objeto copia todos los valores de los miembros del objeto en otro objeto. Si los campos son valores primitivos, una copia superficial simplemente copia los valores. Sin embargo, si algún campo es un puntero a un objeto, la copia superficial copia la dirección del puntero, no el objeto al que apunta. Como resultado, ambos objetos (el original y su copia) apuntarán al mismo objeto o recurso en memoria. Esto puede llevar a problemas como:

- Cambios no intencionados en datos compartidos entre copias.
- Liberación múltiple del mismo recurso cuando los destructores de ambos objetos intentan liberarlo.

### Copias Profundas (Deep Copy)
Una copia profunda implica copiar todos los campos, y si los campos contienen punteros a otros objetos, también se copian los objetos apuntados, asignando memoria adicional para ellos. Cada objeto copiado es completamente independiente del original (y viceversa), con sus propios recursos dedicados. Las copias profundas son esenciales cuando se trabaja con objetos que gestionan recursos como memoria dinámica, para evitar los problemas mencionados anteriormente que son comunes con las copias superficiales.

## ABOUT Exercise 02: Abstract class

Una clase abstracta en programación orientada a objetos, especialmente en C++, es una clase que no puede ser instanciada por sí misma. Se utiliza como una clase base para otras clases, con el propósito de establecer una interfaz común y compartir funcionalidad entre las clases derivadas. Las clases abstractas son un concepto fundamental en el diseño de software, permitiendo el polimorfismo y la reutilización del código.

### Características Clave
- **Métodos Puros Virtuales**: Una clase se vuelve abstracta cuando declara al menos un método como puramente virtual. Un método puramente virtual se declara asignándole un valor de 0 en su declaración, como en `virtual void miMetodo() = 0;`. Esto indica que el método no tiene implementación en la clase abstracta y debe ser sobrescrito por las clases derivadas.
- **Polimorfismo**: Las clases abstractas facilitan el polimorfismo, permitiendo que se utilicen punteros y referencias a la clase base para referirse a objetos de cualquier subclase derivada. Esto permite llamar a métodos sobrescritos en clases derivadas de manera uniforme, sin necesidad de conocer el tipo exacto del objeto.
- **Reutilización de Código**: Aunque las clases abstractas no pueden ser instanciadas, pueden contener implementaciones completas de algunos métodos (que no son puramente virtuales) o variables miembro. Las clases derivadas pueden heredar estas implementaciones, facilitando la reutilización del código.

### Uso de Clases Abstractas
Las clases abstractas se utilizan ampliamente en el diseño de software para definir interfaces y comportamientos comunes para un grupo de clases. Son una herramienta esencial para el diseño orientado a objetos, permitiendo abstracciones de alto nivel y diseño flexible de software.

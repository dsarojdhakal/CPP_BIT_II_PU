#include <iostream>

using namespace std;

// Base class
class Animal {
public:
    virtual void makeSound() {
        cout << "Generic animal sound" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    // Overrides the function
    void makeSound()  {
        cout << "Woof! Woof!" << endl;
    }
};

// Another derived class
class Cat : public Animal {
public:
    // Overrides the function
    void makeSound()  {
        cout << "Meow! Meow!" << endl;
    }
};

int main() {
    Animal* aptr1 = new Dog();
    Animal* aptr2 = new Cat();

    aptr1->makeSound();  
    aptr2->makeSound();  

    delete aptr1;
    delete aptr2;

    return 0;
}

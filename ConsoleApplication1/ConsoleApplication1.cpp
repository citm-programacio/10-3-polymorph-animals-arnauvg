// ConsoleApplication1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
using namespace std;


class Animal {
public:
    
    virtual void speak() = 0; 
    virtual ~Animal() {}  
};


class Dog : public Animal {
public:
   
    void speak() override {
        cout << "Woof!" << endl;
    }
};


class Cat : public Animal {
public:
   
    void speak() override {
        cout << "Meow!" << endl;
    }
};

int main() {
    
    Animal* dog = new Dog();
    Animal* cat = new Cat();

    
    cout << "The dog says: ";
    dog->speak();

    cout << "The cat says: ";
    cat->speak();

    
    delete dog;
    delete cat;

    return 0;
}
#include <iostream> 
using namespace std ; 


// Imagine a zoo simulation with animals. Create a set of classes representing different animals with inheritance and polymorphism. 
// Ensure that each animal class has a unique sound, and implement a function that allows animals to make their respective sounds. 
// In the main program, create an array of animal pointers and use polymorphism to make the animals "speak."

class Animal {
public:
    virtual void speak(){cout << "The animal makes a sound. " << endl; }
};

class Dog : public Animal {
public: 
    void speak()override {cout << "Bark bark!" << endl; }
};

class Lion : public Animal{
public:
    void speak()override {cout << "Raw!" << endl;}
};

class Monkey : public Animal {
public:
    void speak()override {cout <<"Oooo ah ah ah ah oo o o o!" << endl;}
};

class Owl : public Animal {
public:
    void speak()override{cout <<"OOOww!" << endl;}
}; 



int main(){

Animal* animalPtr;


Dog dog;
Lion lion;
Monkey monkey;
Owl owl;

animalPtr = &dog; 
animalPtr -> speak();


animalPtr = &lion;
animalPtr -> speak();

animalPtr = &monkey; 
animalPtr -> speak();

animalPtr = &owl;
animalPtr -> speak(); 




    return 0; 
}
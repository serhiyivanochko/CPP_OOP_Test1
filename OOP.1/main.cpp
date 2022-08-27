
// OOP - Object oriented programming (Abstract)
// POP - Problem Oriented programming (Procedure) - JS (React, Node, Typescript)
//C++

// Abstract
// Incapsulation
// Polimorphysm
// Inheritance

// LCD matrix
// Case
// LET light
// Buttons
// Power

// class - API
// private, public, protected, internal
// override, overload

// GIT Version Control System (VCS)
// SVN

/*

 OOP/
        main.cpp
        1.h
        1.cpp
        
*/
#include <iostream>

class Animal
{
    void Step()
    {
        
    }
};

class Cat : Animal
{
    void Eat()
    {
        
    }
};

class Dog : Animal
{
    void Eat()
    {
        
    }
};

class Veterinar
{
    void Visit(Cat cat)
    {
        std::cout<< "1";
    }
    
    void Visit(Dog dog)
    {
        std::cout<< "2";
    }
    
    void Visit(Animal animal)
    {
        
    }
};

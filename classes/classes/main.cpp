#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"

using namespace std;

int main(int argc, const char * argv[])
{
    Cat cat;
    Dog doggo;
    
    cat.speak();
    cat.jump();
    
    
    doggo.bark();
    doggo.heel();
    
    return 0;
}

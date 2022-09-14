//
//  Dog.hpp
//  classes
//
//  Created by Zachary Childress on 9/14/22.
//

#ifndef Dog_h
#define Dog_h

#include <stdio.h>
#include <string>

using namespace std;

class Dog
{
private:
    string name = "Fido";
    int age = 5;
public:
    void bark();
    void heel();
    
};

#endif /* Dog_h */

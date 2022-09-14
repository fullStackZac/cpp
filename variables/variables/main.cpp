//
//  main.cpp
//  variables
//
//  Created by Zachary Childress on 9/13/22.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    int numberCats = 5;
    int numberDogs = 8;
    int numberAnimals = numberCats+numberDogs;
    
    cout << "Number of cats: " << numberCats << endl;
    cout << "Number of dogs: " << numberDogs << endl;
    cout << "Total number of animals: " << numberAnimals << endl;
    cout << "New dog acquired " << endl;
    numberDogs = numberDogs + 1;
    cout << "New number of Dogs: " << numberDogs << endl;
    return 0;
}

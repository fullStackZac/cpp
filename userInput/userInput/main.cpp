//
//  main.cpp
//  userInput
//
//  Created by Zachary Childress on 9/13/22.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{
    cout << "Enter your name: " << flush;
    string input;
    cin >> input;
    cout << "You entered: " << input << endl;
    
    cout << "Enter a number: " << flush;
    int value;
    cin >> value;
    cout << "You entered: " << value << endl;
    
    return 0;
}

/* Menu and the entry point to the program.
   Press 1 to create two arrays consisting of 5 objects of Tableware and Foodstuff, 
              randomly set objects' prices and calculate the total purchase sum via the friend function
   Press 2 to quit the program */
#include <iostream>
#include "Product.h"
#include "Tableware.h"
#include "Foodstuff.h"

using namespace std;

// Check if the entered value is appropriate
void validateInput() {
    int ignoreValue = 1024;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(ignoreValue, '\n');
    }
}

// Friend function
float computedValue(Tableware tableware, Foodstuff foodstuff) {
    tableware.setPrice((float)rand());
    foodstuff.setPrice((float)rand());
    return tableware.getPrice() + foodstuff.getPrice();
}

int main() {
    // Boolean variable to check if the user wants to quit the program or is continuing the interaction with it
    bool loop = true;
    // This is a variable to call methods or terminate the program. Variable's value is modified by the user in the loop
    int input;
    cout << "What do you want to do? Enter a number (1-2):" << endl;
    while (loop) {
        cin >> input;
        validateInput();
        float sum = 0;
        switch (input) {
            // Create two arrays consisting of 5 objects of Tableware and Foodstuff. Calculate the total purchase sum via the friend function
            case 1:
                Tableware *t;
                Foodstuff *f;
                t = new Tableware[5];
                f = new Foodstuff[5];
                for (int i = 0; i < 5; i++) {
                    sum += computedValue(t[i], f[i]);
                }
                cout << "Total sum is " << sum << endl;
                cout << "\nWhat do you want to do next? Enter a number (1-2):" << endl;
            break;
            // Exit the program
            case 2:
                loop = false;
            break;
            default:
                cout << "Invalid input. Enter only numbers 1 or 2:" << endl;
            break;
        }
    }
}

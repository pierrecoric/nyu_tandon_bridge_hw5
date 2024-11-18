//pc3656
//10.13.2024
//Multiplication table

#include <iostream>
using namespace std;

int main() {
    const char TAB('\t');
    int n;

    //Prompt the user for an integer and store it.
    cout << "Please enter a positive integer:" << endl;
    cin >> n;

    //Iterate n x n times and print out the products.
    for (int y = 0; y < n; y++) {
        for (int x = 0; x < n; x++) {
            cout << (x + 1) * (y + 1) << TAB;
        }
        cout << endl;
    }

    //Exit the program.
    return 0;
}
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int const MAX_GUESSES(5);
    int n, guesses(0), input, rangeMin(1), rangeMax(100);

    //Randomly pick n.
    srand(time(0));
    n = (rand() % 100) + 1;

    cout << "I thought of a number between 1 and 100! Try to guess it." << endl;

    while(guesses < MAX_GUESSES) {
        cout << "Range : [" << rangeMin << ", " << rangeMax << "], Number of guesses left: " << (MAX_GUESSES - guesses) << endl
             << "Your guess: ";
        cin >> input;
        guesses ++;
        if (input == n) {
            cout << "Congrats! You guessed my number in " << guesses << " guesses." << endl;
            return 0;
        }
        else if (input < n) {
            if (guesses < 5) {
                cout << "Wrong! My number is bigger." << endl;
            }
            if (rangeMin < input) {
                rangeMin = input + 1;
            }
        }
        else {
            if (guesses < 5) {
                cout << "Wrong! My number is smaller." << endl;
            }
            if (rangeMax > input) {
                rangeMax = input - 1;
            }
        }
    }    

    //If the number has not been guessed correctly by the end of the loop.
    cout << "Out of guesses! My number is " << n << endl;

    //Exit the program
    return 0;
}
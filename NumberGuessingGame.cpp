#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(nullptr));
    
    int secretNumber = rand() % 100 + 1;
    int guess;
    
    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I've selected a number between 1 and 100. Try to guess it." << endl;
    
    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        
        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the correct number." << endl;
            break;
        }
        
        if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Too low! Try again." << endl;
        }
    }
    
    return 0;
}

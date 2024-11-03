#include <iostream>  
#include <cstdlib>   // For rand() and srand()
#include <ctime>     // For time()

using namespace std;

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));
    int const MAX_NUMBER=32;

    // Generate a random number between 1 and 100
    int guessNumber = (rand() % MAX_NUMBER) + 1;
    int guess = 0;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "Try Your Luck!\n";

    // Main game loop
    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < guessNumber) {
            cout << "Too low! You Lost.\n";
        } else if (guess > guessNumber) {
            cout << "Too high! You Lost.\n";
        } else {
            cout << "Congratulations You Won ! in " << attempts << " attempts.\n";
            break;
        }
    }

    return 0;
}

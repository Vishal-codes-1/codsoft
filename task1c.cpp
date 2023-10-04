#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(std::time(nullptr)));

    int secretNumber = rand() % 100 + 1;
    
    int userGuess;
    int attempts = 0;
    while (true)
    {
        cout << "Guess a number between 1 and 100: ";
        cin >> userGuess;
        attempts++;
        if (userGuess == secretNumber) 
        {
           cout << "Congratulations! You guessed the correct number in " << attempts << " attempts." <<endl;
            break;
        } 
        else if (userGuess < secretNumber) 
        {
            cout << "Too low! Try again." <<endl;
        }
        else 
        {
           cout << "Too high! Try again." <<endl;
        }
    }
    
    return 0;
}

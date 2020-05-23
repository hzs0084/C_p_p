#include <iostream>

using namespace std;

int main()
{
    cout << "Think of a number between 1 and 100 " << endl;

    int highest = 100;
    int lowest = 0;
    int attempts = 0;
    char userInput;
    int guess;

    do {
        attempts++;
        guess = lowest + ((highest - lowest) * 0.5);
        cout << "I guess " << guess << ". Am I right?" << endl;
        cout << "'q' to quit, 'y'  if correct, 'h'if too high, 'l' if too low" << endl;
        cin >> userInput;

        if ( userInput == 'y'){
            cout << "I guessed it in " << attempts << " attempts"<< endl;
            break;
        }
        else if (userInput == 'h'){
            highest = guess;
            //guess = ((highest - lowest) * 0.5);
        }
        else if ( userInput == 'l'){
            lowest = guess;
//            guess = ((highest - lowest) * 0.5);
        }
        else if (userInput == 'q'){
            cout << "You Quit. Bye." << endl;
            break;
        }
        else {
            cout << "I didn't understand that response" << endl;
            break;
        }

    } while (guess != userInput );

}


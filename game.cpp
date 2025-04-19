#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int num = rand() % 100 + 1;
    int guess;
    int tries = 0;

    cout << "Welcome to the number gussing game!" << endl;
    cout << "Guess any number between 1 and 100." << endl;
    do {
        cout << "Guess any number between 1 and 100." << endl;
        cin >> guess;
        tries ++;
        if (guess > num) {
          cout << "Too high, try again!" << endl;
        } else if (guess < num) {
            cout << "Too low, try again!" << endl;
        } else {
            cout << "Congratulations! You guessed the number in " << tries << " tries!" << endl;
        }
    } while (guess != num);
    
    return 0;
}
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int guessGame(int number, int &guess)
{
    int score = 7;
    while (score != 0)
    {
        if (guess == number && score == 7)
        {
            cout << "You have successfully gussed the number " << number << " in the first try! Bravo!\n Your score is:" << score << endl;
            return 1;
        }
        else if (guess > number)
        {
            score--;
            cout << guess << " is higher than the number!" << endl
                 << "Your current score:--" << score << "--\n";
            cout << "--------------------------------------------" << endl;
            cout << "Enter your number: ";
            cin >> guess;
        }
        else if (guess < number)
        {
            score--;
            cout << guess << " is lower than the number!" << endl
                 << "Your current score:--" << score << "--\n";
            cout << "--------------------------------------------" << endl;
            cout << "Enter your number: ";
            cin >> guess;
        }
        else
        {
            cout << "You have gussed the number! it's " << number << endl
                 << "Your credit is:" << score;
            return 1;
        }
    }
    cout << "Game Over!\n The number was " << number << endl;
    return 0;
}
int main()
{
    srand(time(0));
    int number = rand() % 101;
    int guess;
    cout << "Welcome to the guess game!\n In this game you are going to enter a number between 0 to 100 and the computer will tell you if the number is higher or lower.\n";
    cout << "Your starting score: 7\n The sooner you guess, the higher the score would be and you would earn the extra scores as a credit!\n ";
    cout << "Enter a number to check: ";
    cin >> guess;
    while (guess < 0 || guess > 100)
    {
        cout << "Please enter a number between 0 to 100.\n";
        cin >> guess;
    }
    guessGame(number, guess);
    return 0;
}
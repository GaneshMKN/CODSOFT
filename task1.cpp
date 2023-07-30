#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));
    int game_continue = 1, random_number = 0, total_guesses = 1, total_guesses_left = 5, guess = 0, score = 0, total_score = 0;
    do
    {
        random_number = ((rand() % 100) + 1);
        cout << "A random number is now generated below 100" << endl;
        do
        {
            cout << "Guess number " << total_guesses <<  " : " ;
            cin >> guess;
            if (guess == random_number)
                {
                    switch (total_guesses)
                        {
                            case 1:
                                score = 100;
                                break;
                            case 2:
                                score = 75;
                                break;
                            case 3:
                                score = 50;
                                break;
                            case 4:
                                score = 25;
                                break;
                            case 5:
                                score = 10;
                                break;
                            default:
                                score = 0;
                                break;
                        }
                    cout << "Congratulations, You have guessed it right!" << endl;
                    cout << "Your score is " << score << endl;
                    total_score += score;
                    break;
                }
            else if (guess < random_number)
                {                    
                    if (total_guesses == (total_guesses_left - 1))
                        {
                            cout << "\a\tlast chance. the number is bigger than this one." << endl;                            
                        }
                    else if (total_guesses < (total_guesses_left - 1))
                        {
                            cout << "the number is bigger than this one." << endl;        
                        }
                    total_guesses++;
                }
            else if (guess > random_number)
                {                    
                    if (total_guesses == (total_guesses_left - 1))
                        {
                            cout << "\a\tlast chance. the number is smaller than this one." << endl;                            
                        }
                    else if (total_guesses < (total_guesses_left - 1))
                        {
                            cout << "the number is smaller than this one." << endl;
                        }
                    total_guesses++;
                }
            cout << total_guesses << " guesses left." << endl;
        } while (total_guesses <= total_guesses_left);
        if (total_guesses == (total_guesses_left+1))
            {
                cout << "\tLooks like you have run out of chances" << endl;
                cout << "\tthe number was :" << random_number << endl;
            }
        else {}
        cout << "\nWould you like to play again!" << endl;
        cout << "If yes enter the previous random number :\t";
        cout << random_number;
        cout << "\nTo exit type anything else!." << "\t";
        cin >> game_continue;
        if (game_continue == random_number)
            {
                cout << endl;
                total_guesses = 1;
                cout << "Starting a New Game for you\n"
                    << endl;
            }
        else
            {
                cout << "\nThank You!"
                    << endl;
                cout << "Your total score was : " << total_score << endl << "\n";
            }
        
    } while (game_continue != 0);
}
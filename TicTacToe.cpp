//+++++++++++++++++++++++++++++++++++++++++++++++++
// Title: Project2.cpp
// Course: Computational Problem Solving CPET-121
// Developer: Eloy Ramirez
// Date: Feb 25, 2019
// Description: Tic-Tac-Toe Basic Implementation
//+++++++++++++++++++++++++++++++++++++++++++++++++


#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;

char a='1',b='2',c='3',d='4',e='5',f='6',g='7',h='8',i='9'; // Global variables
                                                            // for the board

//+++++++++++++++++++++++++++++++++
// Function for drawing board with
// player choice
//+++++++++++++++++++++++++++++++++

void board()
{
    cout << "\t Tic Tac Toe\n\n";

    cout << "User (X) - Computer (O)\n\n";

    cout << "     |     |     " << endl;
    cout << "  " << a << "  |  " << b << "  |  " << c << "  " << endl;
    cout << "     |     |     " << endl;
    cout << "----- ----- -----" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << d << "  |  " << e << "  |  " << f << "  " << endl;
    cout << "     |     |     " << endl;
    cout << "----- ----- -----" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << g << "  |  " << h << "  |  " << i << "  " << endl;
    cout << "     |     |     \n";

    return;
}

//+++++++++++++++++++++++++++++++++
// Function for checking if choice
// is within valid range
//+++++++++++++++++++++++++++++++++

int validity_check(int& choice)
{
    if (choice < 1 || choice > 9) // If the player chooses a number smaller
                                  // than 1 or larger than 9, the console
                                  // outputs "invalid..."
    {
        cout << "Invalid input: the position indicator has to be in the range "
                "of 1 to 9" << endl;
    }
    return (choice);
}

//+++++++++++++++++++++++++++++++++++
// Function for checking if position
// chosen is not occupied
//+++++++++++++++++++++++++++++++++++

    //++++++++++++
    // User input
    //++++++++++++

int user_turn(int& choice)
{
    bool done = false;

    do
    {
        switch(choice)
        {
            case 1:
            {
                if (choice == 1 && a == '1') /* If the player chooses 1 and its
                                              * not occupied then it gets
                                              * replaced by an 'X'*/
                {
                    a = 'X';
                    done = true;
                }
                else
                {
                    cout << "Invalid input: Position already occupied." << endl;
                }
                break;
            }
            case 2:
            {
                if (choice == 2 && b == '2') /* If the player chooses 2 and its
                                              * not occupied then it gets
                                              * replaced by an 'X'*/
                {
                    b = 'X';
                    done = true;
                }
                else
                {
                    cout << "Invalid input: Position already occupied." << endl;
                }
                break;
            }
            case 3:
            {
                if (choice == 3 && c == '3') /* If the player chooses 3 and its
                                              * not occupied then it gets
                                              * replaced by an 'X'*/
                {
                    c = 'X';
                    done = true;
                }
                else
                {
                    cout << "Invalid input: Position already occupied." << endl;
                }
                break;
            }
            case 4:
            {
                if (choice == 4 && d == '4') /* If the player chooses 4 and its
                                              * not occupied then it gets
                                              * replaced by an 'X'*/
                {
                    d = 'X';
                    done = true;
                }
                else
                {
                    cout << "Invalid input: Position already occupied." << endl;
                }
                break;
            }
            case 5:
            {
                if (choice == 5 && e == '5') /* If the player chooses 5 and its
                                              * not occupied then it gets
                                              * replaced by an 'X'*/
                {
                    e = 'X';
                    done = true;
                }
                else
                {
                    cout << "Invalid input: Position already occupied." << endl;
                }
                break;
            }
            case 6:
            {
                if (choice == 6 && f == '6') /* If the player chooses 6 and its
                                              * not occupied then it gets
                                              * replaced by an 'X'*/
                {
                    f = 'X';
                    done = true;
                }
                else
                {
                    cout << "Invalid input: Position already occupied." << endl;
                }
                break;
            }
            case 7:
            {
                if (choice == 7 && g == '7') /* If the player chooses 7 and its
                                              * not occupied then it gets
                                              * replaced by an 'X'*/
                {
                    g = 'X';
                    done = true;
                }
                else
                {
                    cout << "Invalid input: Position already occupied." << endl;
                }
                break;
            }
            case 8:
            {
                if (choice == 8 && h == '8') /* If the player chooses 8 and its
                                              * not occupied then it gets
                                              * replaced by an 'X'*/
                {
                    h = 'X';
                    done = true;
                }
                else
                {
                    cout << "Invalid input: Position already occupied." << endl;
                }
                break;
            }
            case 9:
            {
                if (choice == 9 && i == '9') /* If the player chooses 9 and its
                                              * not occupied then it gets
                                              * replaced by an 'X'*/
                {
                    i = 'X';
                    done = true;
                }
                else
                {
                    cout << "Invalid input: Position already occupied." << endl;
                }
                break;
            }
        }
        if (done == false)
        {
            cout << "Enter your position: "; cin >> choice; /* Player enters
                                                             * the place it
                                                             * wants to mark */
        }
    }
    while(done == false);

    return(choice);
}

    //++++++++++++++++
    // Computer input
    //++++++++++++++++

int computer_turn(int& cpu_choice)
{
    bool done = false;

    do
    {
        cpu_choice = (rand()%9)+1; /* Random number generator from 1 - 9 */

        switch(cpu_choice)
        {
            case 1:
            {
                if (cpu_choice == 1 && a == '1') /* If the RNG chooses 1 and
                                                  * its not occupied then it
                                                  * gets replaced by an 'O' */
                {
                    a = 'O';
                    done = true;
                }
                break;
            }
            case 2:
            {
                if (cpu_choice == 2 && b == '2') /* If the RNG chooses 2 and
                                                  * its not occupied then it
                                                  * gets replaced by an 'O' */
                {
                    b = 'O';
                    done = true;
                }
                break;
            }
            case 3:
            {
                if (cpu_choice == 3 && c == '3') /* If the RNG chooses 3 and
                                                  * its not occupied then it
                                                  * gets replaced by an 'O' */
                {
                    c = 'O';
                    done = true;
                }
                break;
            }
            case 4:
            {
                if (cpu_choice == 4 && d == '4') /* If the RNG chooses 4 and
                                                  * its not occupied then it
                                                  * gets replaced by an 'O' */
                {
                    d = 'O';
                    done = true;
                }
                break;
            }
            case 5:
            {
                if (cpu_choice == 5 && e == '5') /* If the RNG chooses 5 and
                                                  * its not occupied then it
                                                  * gets replaced by an 'O' */
                {
                    e = 'O';
                    done = true;
                }
                break;
            }
            case 6:
            {
                if (cpu_choice == 6 && f == '6') /* If the RNG chooses 6 and
                                                  * its not occupied then it
                                                  * gets replaced by an 'O' */
                {
                    f = 'O';
                    done = true;
                }
                break;
            }
            case 7:
            {
                if (cpu_choice == 7 && g == '7') /* If the RNG chooses 7 and
                                                  * its not occupied then it
                                                  * gets replaced by an 'O' */
                {
                    g = 'O';
                    done = true;
                }
                break;
            }
            case 8:
            {
                if (cpu_choice == 8 && h == '8') /* If the RNG chooses 8 and
                                                  * its not occupied then it
                                                  * gets replaced by an 'O' */
                {
                    h = 'O';
                    done = true;
                }
                break;
            }
            case 9:
            {
                if (cpu_choice == 9 && i == '9') /* If the RNG chooses 9 and
                                                  * its not occupied then it
                                                  * gets replaced by an 'O' */
                {
                    i = 'O';
                    done = true;
                }
                break;
            }
        }
    }
    while(done == false);

    return(cpu_choice);
}

//+++++++++++++++++++++++++++++++++
// Function for checking results
// of choices
//+++++++++++++++++++++++++++++++++

bool check_win(bool& end)
{

    if (a == 'X' && b == 'X' && c == 'X') /* If spaces 1, 2, & 3 are occupied
                                           * by 'X' then the player wins */
    {
        end = true;
        cout << "Player 1 wins the game!" << endl;
    }
    else if (d == 'X' && e == 'X' && f == 'X') /* If spaces 4, 5, & 6 are occupied
                                                * by 'X' then the player wins */
    {
        end = true;
        cout << "Player 1 wins the game!" << endl;
    }
    else if (g == 'X' && h == 'X' && i == 'X') /* If spaces 7, 8, & 9 are occupied
                                                * by 'X' then the player wins */
    {
        end = true;
        cout << "Player 1 wins the game!" << endl;
    }
    else if (a == 'X' && d == 'X' && g == 'X') /* If spaces 1, 4, & 7 are occupied
                                                * by 'X' then the player wins */
    {
        end = true;
        cout << "Player 1 wins the game!" << endl;
    }
    else if (b == 'X' && e =='X' && h == 'X') /* If spaces 2, 5, & 8 are occupied
                                               * by 'X' then the player wins */
    {
        end = true;
        cout << "Player 1 wins the game!" << endl;
    }
    else if (c == 'X' && f == 'X' && i == 'X') /* If spaces 3, 6, & 9 are occupied
                                                * by 'X' then the player wins */
    {
        end = true;
        cout << "Player 1 wins the game!" << endl;
    }
    else if (a == 'X' && e == 'X' && i == 'X') /* If spaces 1, 5, & 9 are occupied
                                                * by 'X' then the player wins */
    {
        end = true;
        cout << "Player 1 wins the game!" << endl;
    }
    else if (c == 'X' && e == 'X' && g == 'X') /* If spaces 3, 5, & 7 are occupied
                                                * by 'X' then the player wins */
    {
        end = true;
        cout << "Player 1 wins the game!" << endl;
    }
    if (a == 'O' && b == 'O' && c == 'O') /* If spaces 1, 2, & 3 are occupied
                                           * by 'O' then the computer wins */
    {
        end = true;
        cout << "The computer wins the game!" << endl;
    }
    else if (d == 'O' && e == 'O' && f == 'O') /* If spaces 4, 5, & 6 are occupied
                                                * by 'O' then the computer wins */
    {
        end = true;
        cout << "The computer wins the game!" << endl;
    }
    else if (g == 'O' && h == 'O' && i == 'O') /* If spaces 7, 8, & 9 are occupied
                                                * by 'O' then the computer wins */
    {
        end = true;
        cout << "The computer wins the game!" << endl;
    }
    else if (a == 'O' && d == 'O' && g == 'O') /* If spaces 1, 4, & 7 are occupied
                                                * by 'O' then the computer wins */
    {
        end = true;
        cout << "The computer wins the game!" << endl;
    }
    else if (b == 'O' && e =='O' && h == 'O') /* If spaces 2, 5, & 8 are occupied
                                               * by 'O' then the computer wins */
    {
        end = true;
        cout << "The computer wins the game!" << endl;
    }
    else if (c == 'O' && f == 'O' && i == 'O') /* If spaces 3, 6, & 9 are occupied
                                                * by 'O' then the computer wins */
    {
        end = true;
        cout << "The computer wins the game!" << endl;
    }
    else if (a == 'O' && e == 'O' && i == 'O') /* If spaces 1, 5, & 9 are occupied
                                                * by 'O' then the computer wins */
    {
        end = true;
        cout << "The computer wins the game!" << endl;
    }
    else if (c == 'O' && e == 'O' && g == 'O') /* If spaces 3, 5, & 7 are occupied
                                                * by 'O' then the computer wins */
    {
        end = true;
        cout << "The computer wins the game!" << endl;
    }
    return(end);
}

//+++++++++++++++++++++++++++++++++
// Main function for playing game
// & making choices
//+++++++++++++++++++++++++++++++++

int main()
{
    int cpu_choice, choice;
    bool end = false;
    srand(time(NULL)); // RNG seed generator

    cout << "Welcome to the game of Tic Tac Toe." << endl;
    cout << "Below you will indicate your position (1 - 9) as shown in the table.\n\n";

    do
    {
        board(); // Callback to board
        cout << "Enter your position: ";
        cin >> choice; // Player picks position
        validity_check(choice); // Callback to validity checker
        user_turn(choice); // Callback to user turn function
        computer_turn(cpu_choice); // Callback to computer turn function
        check_win(end); // Callback to function that checks who's winner
    } while (end == false);

    return (0);
}

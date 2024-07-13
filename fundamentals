// I use a tailored version of Hungarian Notation to name my variables where I put a little hint of what type it is at the beginning, then I add an underscore, and after that, I write what the variable is for.  The Camelcase notation is used to delimit words.

// Note: Please read the relevant commit description for a headsup.

#include <iostream>  

using namespace std;

int main()
{
    // Input Variables
    char c_menuChoice;
    char c_gameChoice;

    // State Variables
    bool b_validMenuChoice = false;
    bool b_validGameChoice = false;
    bool b_playGame = false;

    // Display Menu and Instructions.
    cout << "Instructions: Enter the option number to navigate through the game. Enjoy!" << endl;

    cout << "1. Play Game" << endl << "2. Exit Game" << endl;

    // Menu Handling

    do
    {
        cout << "> ";
        cin >> c_menuChoice;

        switch (c_menuChoice)
        {
        case '1':
            b_validMenuChoice = true;
            b_playGame = true;
            break;

        case '2':
            b_validMenuChoice = true;
            break;

        default:
            b_validMenuChoice = false;
            cout << "Please enter a valid choice" << endl;
            break;
        }
    } while (!b_validMenuChoice);

    // Game Loop

    if (b_playGame)
    {
        cout << "You wake up in a room and a weapon is infront of you."
            << "\n1. Pick it up."
            << "\n2. Go out" << endl;

        do
        {
            cout << "> ";
            cin >> c_gameChoice;

            switch (c_gameChoice)
            {
            case '1':
                b_validGameChoice = true;
                cout << "You have the gun." << "\n1. Kill the Zombies." << "\n2. Suicide." << endl;
                do
                {
                    cout << "> ";
                    cin >> c_gameChoice;

                    switch (c_gameChoice)
                    {
                    case '1':
                        b_validGameChoice = true;
                        cout << "You Win!" << endl;
                        break;

                    case '2':
                        b_validGameChoice = true;
                        cout << "You Lose! Game Over!" << endl;
                        break;
                    default:
                        b_validGameChoice = false;
                        cout << "Please enter a valid option." << endl;
                        break;
                    }
                } while (!b_validGameChoice);
                break;

            case '2':
                b_validGameChoice = true;
                cout << "There are zombies." << "\n1. Run." << "\n2. Fight them." << endl;
                do
                {
                    cout << "> ";
                    cin >> c_gameChoice;

                    switch (c_gameChoice)
                    {
                    case '1':
                        b_validGameChoice = true;
                        cout << "You Lose! Game Over!" << endl;
                        break;

                    case '2':
                        b_validGameChoice = true;
                        cout << "You Lose! Game Over!" << endl;
                        break;
                    default:
                        b_validGameChoice = false;
                        cout << "Please enter a valid option." << endl;
                        break;
                    }
                } while (!b_validGameChoice);
                break;
            default:
                b_validGameChoice = false;
                cout << "Please enter a valid option." << endl;
                break;
            }
        } while (!b_validGameChoice);
    }

    return 0;
}

#include <iostream>
using namespace std;

char s[10] = {'0','1','2','3','4','5','6','7','8','9'};

int result();
void drawboard();

int main()
{
	int player = 1,i,choice;

    char mark;
    do
    {
       drawboard();
        player=(player%2)?1:2;

        cout << "Player " << player << "'s turn...enter a number:  ";
        cin >> choice;

        mark=(player == 1) ? 'X' : 'O';

        if (choice == 1 && s[1] == '1')

            s[1] = mark;
        else if (choice == 2 && s[2] == '2')

            s[2] = mark;
        else if (choice == 3 && s[3] == '3')

            s[3] = mark;
        else if (choice == 4 && s[4] == '4')

            s[4] = mark;
        else if (choice == 5 && s[5] == '5')

            s[5] = mark;
        else if (choice == 6 && s[6] == '6')

            s[6] = mark;
        else if (choice == 7 && s[7] == '7')

            s[7] = mark;
        else if (choice == 8 && s[8] == '8')

            s[8] = mark;
        else if (choice == 9 && s[9] == '9')

            s[9] = mark;
        else
        {
            cout<<"INVALID MOVE ( press any key to enter again)  ";

            player--;
            cin.ignore();
            cin.get();
        }
        i=result();

        player++;
    }while(i==-1);
    drawboard();
    if(i==1)

        cout<<"==>\aPlayer "<<--player<<" wins \n CONGARTULATIONS ";
    else
        cout<<"==>\aGame draw";

    cin.ignore();
    cin.get();
    return 0;
}

//RETURN RESULT
int result()
{
    if (s[1] == s[2] && s[2] == s[3])

        return 1;
    else if (s[4] == s[5] && s[5] == s[6])

        return 1;
    else if (s[7] == s[8] && s[8] == s[9])

        return 1;
    else if (s[1] == s[4] && s[4] == s[7])

        return 1;
    else if (s[2] == s[5] && s[5] == s[8])

        return 1;
    else if (s[3] == s[6] && s[6] == s[9])

        return 1;
    else if (s[1] == s[5] && s[5] == s[9])

        return 1;
    else if (s[3] == s[5] && s[5] == s[7])

        return 1;
    else if (s[1] != '1' && s[2] != '2' && s[3] != '3'
                    && s[4] != '4' && s[5] != '5' && s[6] != '6'
                  && s[7] != '7' && s[8] != '8' && s[9] != '9')

        return 0;
    else
        return -1;
}

//DRAW BOARD
void drawboard()
{
    system("cls");

    cout << "\n\n WELCOME TO TIC-TAC-TOE  \n\n";

    cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
    cout << endl;

    cout << "     |     |     " << endl;
    cout << "  " << s[1] << "  |  " << s[2] << "  |  " << s[3] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << s[4] << "  |  " << s[5] << "  |  " << s[6] << endl;

    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;

    cout << "  " << s[7] << "  |  " << s[8] << "  |  " << s[9] << endl;

    cout << "     |     |     " << endl << endl;
}

#include <iostream>
#include <time.h>
int generate();
using namespace std;

int main()
{   
    start:
    int turn;
    string name;
    int player;
    int cp = 0, cc = 0,ch=0;
    
        cout << "\n\n||    ROCK, PAPERS, AND SCISSORS  ||\n";
        cout << "Enter player name: ";
        cin >> name;
        cout<<"Enter Number of turns: ";
        cin>>turn;
        while (turn--)
        {
        cout << "Rules\n1.Rock\t\t2.Papers\t3.Scissors\n";
        cout << "Enter your move: ";
        cin >> player;
        player *= 10;
        int comp = generate();
        // cout<<"Choice of computer was: "<<comp<<endl;
        // string comp=move(no);
        if ((player == 10 && comp > 20) || (comp < player))
        {
            cout << name << " wins!!\n";
            cp++;
        }
        else if ((comp <= 10 && player == 30) || (comp > player))
        {
            cout << "Computer wins!!\n";
            cc++;
        }
        else if (comp == player)
        {
            cout << "  Draw! \n";
            cp++;
            cc++;
        }
    }
    cout << "\n------------------||  Game Over  ||-----------------------\n";
    cout << "RESULTS: " << name << ":" << cp << "\tComputer:" << cc<<endl;
    if (cp > cc)
    {
        cout << name << " is the winner!!\n";
    }
    else if (cc > cp)
    {
        cout << "You Lose!! ";
    }
    else
    {
        cout << " DRAW! ";
    }
    cout<<"Play Again?      \t1.yes\t2.exit:";
    cin>>ch;
    if(ch==1)
        goto start;
    else    
        cout<<"\nThank You for playing...";
}
int generate()
{
    srand(time(NULL));
    return rand() % 30;
}

#include <bits/stdc++.h>
using namespace std;
void drawBoard(char *spaces);
void playerMoves(char *spaces, char player);
void computerPlayer(char *spaces, char computer);
bool checkWinner(char *spaces, char player);
bool checkTie(char *spaces);
int main()
{
    char spaces[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    char player = 'X';
    char computer = 'O';
    bool running = true;
    drawBoard(spaces);
    while (running)
    {
        playerMoves(spaces, player);
        drawBoard(spaces);
        if (checkWinner(spaces, player))
        {
            running = false;
            break;
        }
        else if(checkTie(spaces)){
            running = false;
            break;
        }
        computerPlayer(spaces, computer);
        drawBoard(spaces);
        if (checkWinner(spaces, player))
        {
            running = false;
            break;
        }
        else if(checkTie(spaces)){
            running = false;
            break;
        }
    }
    return 0;
}
void drawBoard(char *spaces)
{
    cout << "-----------------" << '\n';
    cout << "|    |     |     |" << '\n';
    cout << "|  " << spaces[0] << " |   " << spaces[1] << " |   " << spaces[2] << " |" << '\n';
    cout << "_____|_____|_____"
            << "\n";
    cout << "|    |     |     |" << '\n';
    cout << "|  " << spaces[3] << " |   " << spaces[4] << " |   " << spaces[5] << " |" << '\n';
    cout << "_____|_____|_____"
            << "\n";
    cout << "|    |     |     |" << '\n';
    cout << "|  " << spaces[6] << " |   " << spaces[7] << " |   " << spaces[8] << " |" << '\n';
    cout << "_____|_____|_____"
            << "\n";
}
void playerMoves(char *spaces, char player)
{
    int number;
    do
    {
        cout << "Enter the spot in the Game through (1-9)" << '\n';
        cin >> number;
        number--;
        if (spaces[number] == ' ')
        {
            spaces[number] = player;
            break;
        }
    } while (!number > 0 || !number < 8);
}
void computerPlayer(char *spaces, char computer)
{
    int number;
    srand(time(0));
    while (true)
    {
        number = rand() % 9;
        if (spaces[number] == ' ')
        {
            spaces[number] = computer;
            break;
        }
    }
}
bool checkWinner(char *spaces, char player)
{

    if (spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2])
    {
        spaces[0] == player ? cout << "YOU WIN CONGO  :)\n" : cout << "YOU LOSE TRY AGAIN !! :(\n";
    }
    else if (spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5])
    {
        spaces[3] == player ? cout << "YOU WIN CONGO  :)\n" : cout << "YOU LOSE TRY AGAIN !! :(\n";
    }

    else if (spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8])
    {
        spaces[6] == player ? cout << "YOU WIN CONGO  :)\n" : cout << "YOU LOSE TRY AGAIN !! :(\n";
    }
    else if (spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8])
    {
        spaces[0] == player ? cout << "YOU WIN CONGO  :)\n" : cout << "YOU LOSE TRY AGAIN !! :(\n";
    }
    else if (spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6])
    {
        spaces[0] == player ? cout << "YOU WIN CONGO  :)\n" : cout << "YOU LOSE TRY AGAIN !! :(\n";
    }

    else if (spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2])
    {
        spaces[0] == player ? cout << "YOU WIN CONGO  :)\n" : cout << "YOU LOSE TRY AGAIN !! :(\n";
    }

    else if (spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8])
    {
        spaces[2] == player ? cout << "YOU WIN CONGO  :)\n" : cout << "YOU LOSE TRY AGAIN !! :(\n";
    }
    else if (spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7])
    {
        spaces[1] == player ? cout << "YOU WIN CONGO  :)\n" : cout << "YOU LOSE TRY AGAIN !! :(\n";
    }
    else if (spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6])
    {
        spaces[0] == player ? cout << "YOU WIN CONGO  :)\n" : cout << "YOU LOSE TRY AGAIN !! :(\n";
    }
    else
    {
        return false;
    }
    return true;
}
bool checkTie(char *spaces)
{  
    
    for (int i = 0;i < 9; i++){
        if(spaces[i]==' '){
            return false;
        }
    }
    cout<<"ITS A TIE :: PLAY AGAIN \n";
    return true;
}
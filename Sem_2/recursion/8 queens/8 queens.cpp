#include <iostream>

using namespace std;

int board[8][8] = { 0 };
int res_count = 0;

void show_Board() 
{
    for (int i = 0; i < 8; ++i) 
    {
        for (int j = 0; j < 8; ++j) 
        {
            cout << (board[i][j] ? "Q " : ". ");
        }
        cout << endl;
    }
}

bool check_Place(int a, int b) 
{
    for (int i = 0; i < a; ++i) 
    {
        if (board[i][b])
        {
            return false;
        }
    }

    for (int i = 1; ((i <= a) && (b - i >= 0)); ++i) 
    {
        if (board[a - i][b - i]) 
        {
            return false;
        }
    }

    for (int i = 1; ((i <= a) && (b + i < 8)); ++i) 
    {
        if (board[a - i][b + i]) 
        {
            return false;
        }
    }

    return true;
}

void try_Queen(int a) 
{
    if (a == 8) 
    {
        cout << "Result #" << ++res_count << "\n";
        show_Board();
        return;
    }

    for (int i = 0; i < 8; ++i) 
    {
        if (check_Place(a, i)) 
        {
            board[a][i] = 1; 
            try_Queen(a + 1);
            board[a][i] = 0; 
        }
    }
}

int main() {
    try_Queen(0);
    return 0;
}
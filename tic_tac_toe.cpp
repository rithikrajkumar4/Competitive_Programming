#include<iostream>
using namespace std;
struct tictactoe
{
    char player,computer,grid[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            grid[i][j] = ' ';
    }
    void board()
    {
        for(int i =0;i<3;i++)
        {
            if(i!=0)
            {
                cout<<"--------------\n";

            }
            for(int j=0;j<3;j++)
            {
                if(j)
                    cout<<"|";
                if(grid[i][j] != ' ')
                    cout<<grid[i][j];
                else
                    cout<<3*i+j+1;
                cout<<" ";
            }

        }
    }
}game;
int main()
{
    game.board();
}

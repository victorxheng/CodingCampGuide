#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //credit Jan
    ifstream fin("billboard.in");
    ofstream fout("billboard.out");
    int bb1x1, bb1y1, bb1x2, bb1y2, bb2x1, bb2y1, bb2x2, bb2y2, truckx1, trucky1, truckx2, trucky2;
    fin >> bb1x1 >> bb1y1 >> bb1x2 >> bb1y2 >> bb2x1 >> bb2y1 >> bb2x2 >> bb2y2 >> truckx1 >> trucky1 >> truckx2 >> trucky2;

    int bb1area = (bb1x2 - bb1x1) * (bb1y2 - bb1y1) + 1000;
    int bb2area = (bb2x2 - bb2x1) * (bb2y2 - bb2y1) + 1000;
    int board[2001][2001] = {};
    for (int row = bb1y1 + 1000; row < bb1y2 + 1000; row++)
    {
        for (int col = bb1x1 + 1000; col < bb1x2 + 1000; col++)
        {
            board[row][col] = 1;
        }
    }
    for (int row = bb2y1 + 1000; row < bb2y2 + 1000; row++)
    {
        for (int col = bb2x1 + 1000; col < bb2x2 + 1000; col++)
        {
            board[row][col] = 1;
        }
    }
    for (int row = trucky1 + 1000; row < trucky2 + 1000; row++)
    {
        for (int col = truckx1 + 1000; col < truckx2 + 1000; col++)
        {
            board[row][col] = 2;
        }
    }
    int counter = 0;
    for (int row = 0; row < 2001; row++)
    {
        for (int col = 0; col < 2001; col++)
        {
            if (board[row][col] == 1)
            {
                counter++;
            }
        }
    }
    fout << counter;
    return 0;
}
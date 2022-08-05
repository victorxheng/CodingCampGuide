#include <iostream>
using namespace std;

int main()
{
    int count, square1, square2, square3, square4;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        cin >> square1 >> square2 >> square3 >> square4;
        if (square1 + square2 + square3 + square4 == 0)
        {
            cout << 0 << endl;
        }
        else if (square1 + square2 + square3 + square4 == 1)
        {
            cout << 1 << endl;
        }
        else if (square1 + square2 + square3 + square4 == 2)
        {
            cout << 1 << endl;
        }
        else if (square1 + square2 + square3 + square4 == 3)
        {
            cout << 1 << endl;
        }
        else if (square1 + square2 + square3 + square4 == 4)
        {
            cout << 2 << endl;
        }
        return 0;
    }
}
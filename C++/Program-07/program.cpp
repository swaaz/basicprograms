#include <iostream>
using namespace std;

int main()
{
    int rows, n = 1;

    cout << "Enter number of rows: \n";
    cin >> rows;

    for(int i = 0; i < rows; i++)
    {
        for(int line = 1; line <= rows-i; line++)
            cout <<"  ";

        for(int j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                n = 1;
            else
                n = n*(i-j+1)/j;

            cout << n << "   ";
        }
        cout << endl;
    }

    return 0;
}
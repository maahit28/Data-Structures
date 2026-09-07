#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int a[3][n];

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < n; j++)
        {
            a[i][j] = 0;
        }
    }

    // Lower diagonal
    for(int i = 0; i < n - 1; i++)
        cin >> a[0][i];

    // Main diagonal
    for(int i = 0; i < n; i++)
        cin >> a[1][i];

    // Upper diagonal
    for(int i = 0; i < n - 1; i++)
        cin >> a[2][i];

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j)
                cout << a[1][j] << " ";
            else if(i == j + 1)
                cout << a[0][j] << " ";
            else if(j == i + 1)
                cout << a[2][i] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }

    return 0;
}

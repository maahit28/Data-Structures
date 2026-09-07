#include <iostream>
using namespace std;

int main()
{
    int r1, c1, n1;
    int r2, c2, n2;

    cin >> r1 >> c1 >> n1;

    int a[n1][3];

    for(int i = 0; i < n1; i++)
        cin >> a[i][0] >> a[i][1] >> a[i][2];

    cin >> r2 >> c2 >> n2;

    int b[n2][3];

    for(int i = 0; i < n2; i++)
        cin >> b[i][0] >> b[i][1] >> b[i][2];

    if(c1 != r2)
    {
        cout << "Multiplication not possible";
        return 0;
    }

    int result[r1][c2] = {};

    for(int i = 0; i < n1; i++)
    {
        for(int j = 0; j < n2; j++)
        {
            if(a[i][1] == b[j][0])
            {
                result[a[i][0]][b[j][1]] +=
                    a[i][2] * b[j][2];
            }
        }
    }

    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            if(result[i][j] != 0)
                cout << i << " " << j << " "
                     << result[i][j] << endl;
        }
    }

    return 0;
}

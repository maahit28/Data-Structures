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

    if(r1 != r2 || c1 != c2)
    {
        cout << "Addition not possible";
        return 0;
    }

    int i = 0, j = 0;

    while(i < n1 && j < n2)
    {
        if(a[i][0] == b[j][0] && a[i][1] == b[j][1])
        {
            cout << a[i][0] << " "
                 << a[i][1] << " "
                 << a[i][2] + b[j][2] << endl;
            i++;
            j++;
        }
        else if(a[i][0] < b[j][0] ||
               (a[i][0] == b[j][0] && a[i][1] < b[j][1]))
        {
            cout << a[i][0] << " "
                 << a[i][1] << " "
                 << a[i][2] << endl;
            i++;
        }
        else
        {
            cout << b[j][0] << " "
                 << b[j][1] << " "
                 << b[j][2] << endl;
            j++;
        }
    }

    while(i < n1)
    {
        cout << a[i][0] << " "
             << a[i][1] << " "
             << a[i][2] << endl;
        i++;
    }

    while(j < n2)
    {
        cout << b[j][0] << " "
             << b[j][1] << " "
             << b[j][2] << endl;
        j++;
    }

    return 0;
}

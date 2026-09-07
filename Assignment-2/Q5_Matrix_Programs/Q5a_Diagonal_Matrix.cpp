#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int diagonal[n];

    for(int i = 0; i < n; i++)
    {
        cin >> diagonal[i];
    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i == j)
                cout << diagonal[i] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }

    return 0;
}

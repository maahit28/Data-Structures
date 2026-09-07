#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int count = 0;

    for(int i = 0; i < n; i++)
    {
        bool duplicate = false;

        for(int j = 0; j < i; j++)
        {
            if(arr[i] == arr[j])
            {
                duplicate = true;
                break;
            }
        }

        if(!duplicate)
            count++;
    }

    cout << "Number of distinct elements: " << count;

    return 0;
}

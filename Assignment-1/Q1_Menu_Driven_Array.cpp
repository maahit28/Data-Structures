#include <iostream>
using namespace std;

int main()
{
    int a[100], n = 0, choice, pos, value, key, found;

    do
    {
        cout << "\n1. CREATE";
        cout << "\n2. DISPLAY";
        cout << "\n3. INSERT";
        cout << "\n4. DELETE";
        cout << "\n5. LINEAR SEARCH";
        cout << "\n6. EXIT";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter number of elements: ";
                cin >> n;

                cout << "Enter elements: ";
                for(int i = 0; i < n; i++)
                    cin >> a[i];
                break;

            case 2:
                cout << "Array: ";
                for(int i = 0; i < n; i++)
                    cout << a[i] << " ";
                cout << endl;
                break;

            case 3:
                cout << "Enter position: ";
                cin >> pos;

                cout << "Enter value: ";
                cin >> value;

                for(int i = n; i >= pos; i--)
                    a[i] = a[i - 1];

                a[pos - 1] = value;
                n++;
                break;

            case 4:
                cout << "Enter position: ";
                cin >> pos;

                for(int i = pos - 1; i < n - 1; i++)
                    a[i] = a[i + 1];

                n--;
                break;

            case 5:
                cout << "Enter element to search: ";
                cin >> key;

                found = 0;

                for(int i = 0; i < n; i++)
                {
                    if(a[i] == key)
                    {
                        cout << "Element found at position " << i + 1 << endl;
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    cout << "Element not found\n";

                break;

            case 6:
                cout << "Exit";
                break;

            default:
                cout << "Invalid choice";
        }

    } while(choice != 6);

    return 0;
}

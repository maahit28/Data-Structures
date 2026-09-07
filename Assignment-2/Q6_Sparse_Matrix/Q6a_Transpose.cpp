#include <iostream>
using namespace std;

int main()
{
    int rows, cols, nonZero;

    cin >> rows >> cols;
    cin >> nonZero;

    int triplet[nonZero + 1][3];

    triplet[0][0] = rows;
    triplet[0][1] = cols;
    triplet[0][2] = nonZero;

    for(int i = 1; i <= nonZero; i++)
    {
        cin >> triplet[i][0]
            >> triplet[i][1]
            >> triplet[i][2];
    }

    cout << "Transpose:\n";

    cout << cols << " " << rows << " " << nonZero << endl;

    for(int col = 0; col < cols; col++)
    {
        for(int i = 1; i <= nonZero; i++)
        {
            if(triplet[i][1] == col)
            {
                cout << triplet[i][1] << " "
                     << triplet[i][0] << " "
                     << triplet[i][2] << endl;
            }
        }
    }

    return 0;
}

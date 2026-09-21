Q2. Remove Duplicate Elements from an Array

Logic:

1. Start.
2. Input the number of elements, n.
3. Input the elements of the array.
4. Start from the first element and compare it with all the
   elements that come after it.
5. If a duplicate element is found:
   a. Shift all elements after the duplicate one position to the left.
   b. Decrease the size of the array by 1.
   c. Check the same position again because another duplicate
      may be present there.
6. Continue this process for all elements of the array.
7. Display the array containing only unique elements.
8. Stop.

#include<iostream>
using namespace std;

int main(){
    int arr[100],n;
    cout<<"Enter the size of array:";
    cin>>n;

    cout<<"Enter the elements of the array:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i] == arr[j]){
                for(int k = j; k<n; k++){
                    arr[k] = arr[k+1];
                }
                n--;
                j--;
            }
        }
    }

    cout<<"Array with unique elements:";
    for(int i = 0; i<n; i++)
    cout<<arr[i]<<" ";
    return 0;
}

/*

Question 2

An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers
Note: Order of elements is not important here


I/P:
-2  -3 7 9 -4 2 5 

O/P:
-2 -3 –4 7 9 2 5


*/
#include <iostream>
using namespace std;
 
void rearrange(int arr[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            if (i != j)
                swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    rearrange(a, n);
   for(int i=0; i<n; i++){
        cout<<a[i];
    }
    return 0;
}

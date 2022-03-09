#include <iostream>
using namespace std;
 
// iterative implementation
int binarySearch(int a[], int item, int low, int high, int& count)
{
    while (low <= high) {
        count++;
        int mid = low + (high - low) / 2;
        if (item == a[mid]) {
            count++;
            return mid + 1;
        }
        else if (item > a[mid]) {
            count++;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    count++;
    return low;
}
 
// Function to sort an array a[] of size 'n'
void insertionSort(int a[], int n, int& count)
{
    int i, loc, j, k, selected;
    
    for (i = 1; i < n; ++i) {
        count++;
        j = i - 1;
        selected = a[i];

        // find location where selected should be inseretd
        loc = binarySearch(a, selected, 0, j, count);
 
        // Move all elements after location to create space
        while (j >= loc) {
            count++;
            a[j + 1] = a[j];
            j--;
        }
        count++;
        a[j + 1] = selected;
    }
    count++;
}
 
// Driver Code
int main()
{
    int a[]= { 7, 4, 3, 8, 1, 5, 4, 2 };
    int n = sizeof(a) / sizeof(a[0]), i;
    int count = 0;
    insertionSort(a, n, count);
  
    cout <<"Sorted array: \n";
    for (i = 0; i < n; i++)
        cout <<" "<< a[i];
    cout << endl;
    cout << count;
    return 0;
}
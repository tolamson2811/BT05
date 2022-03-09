#include <iostream>
#define SIZE 10
using namespace std;
int binarySearch(int arr[], int low, int high, int key) {
    if(low < high) {
        int mid = (low + high) / 2;
        if(arr[mid] == key) return mid;
        else if(arr[mid] > key) return binarySearch(arr, low, mid - 1, key);
        else return binarySearch(arr, mid + 1, high, key);
    }else {
        return -1;
    }
    
}
int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int key;
    cin >> key;
    int low = 0;
    int high = SIZE - 1;
    if(binarySearch(arr, low, high, key) != -1) {
        cout << "Location of key: " << binarySearch(arr, low, high, key) << endl;
    }else {
        cout << "Key is not in the array" << endl;
    }
    return 0;
}
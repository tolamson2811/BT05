#include <iostream>
#define SIZE 5
using namespace std;
void test(int arr[SIZE]) {
    for(int i = 0; i < SIZE; i++) {
        arr[i] = 0;
    }
}
int main() {
    int arr[SIZE] = {1, 2, 3, 4, 5};
    for(int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    // In ra 1 2 3 4 5 => mảng truyền theo cơ chế pass-by-value
}
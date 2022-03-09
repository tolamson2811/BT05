#include <iostream>
#define SIZE 5
using namespace std;
void test(int arr[SIZE]) {
    for(int i = 0; i < SIZE; i++) {
        arr[i] = 0;
    }
}
void testString(string s) {
    s = "Thaydoi";
}
int main() {
    int arr[SIZE] = {1, 2, 3, 4, 5};
    test(arr);
    for(int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;   
    // In ra 0 0 0 0 0 => mảng truyền theo cơ chế pass-by-reference
    string s = "Baitap";
    testString(s);
    cout << s;
    // In ra "Baitap" => string truyền theo cơ chế pass-by-value
    return 0;
}
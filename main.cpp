#include <iostream>
using namespace std;
int factorial(int n) {
    cout << "n= " << n << " at " << &n << endl;
    if(n == 1) {
        return 1;
    }else return factorial(n - 1) * n;
}
int main() {
    int n;
    cin >> n;
    factorial(n);
    return 0;
}

/* Với n = 5:
 In ra: 
 n= 5 at 0x61fea0
n= 4 at 0x61fe80
n= 3 at 0x61fe60
n= 2 at 0x61fe40
n= 1 at 0x61fe20 */
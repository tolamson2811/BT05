#include <iostream>
using namespace std;
void passByValue(int a) {
    cout << &a << endl;
}
void passByReference(int &a) {
    cout << &a << endl;
}
int main() {
    int a;
    cin >> a;
    passByValue(a);
    passByReference(a);
    return 0;
}

/*
Với n = 3:
0x61fea0
0x61febc
Do đó đối số và tham trị là hai biến độc lập có địa chỉ khác nhau. 
*/
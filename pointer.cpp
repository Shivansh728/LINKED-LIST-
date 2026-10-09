
#include <iostream>
using namespace std;

int main() {
    int a;
    int *ptr;

    cout << "Enter an integer: ";
    cin >> a;

    ptr = &a;

    cout << "Value of variable a: " << a << endl;
    cout << "Address of variable using & : " << &a << endl;
    cout << "Value using pointer: " << *ptr << endl;
    cout << "Address using pointer: " << ptr << endl;

    return 0;
}


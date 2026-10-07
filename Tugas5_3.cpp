#include <iostream>
using namespace std;

int add(int a, int b) {
    a = a + 10;
    return a + b;
}

void swapReference(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a =2;
    int b =3;

    cout << "Before Call by Value: a = " << a << endl;

    int result = add(a, b);

    cout << "Result From Call by Value: " << result << endl;
    cout << "After Call by Value: a = " << a << endl;

    cout << "\nBefore Call by Reference: a = " << a << ", b = " << b << endl;

    swapReference(a, b);

    cout << "After Call by Reference: a = " << a << ", b = " << b << endl;

    return 0;
}

#include <iostream>
using namespace std;

long long fact(int n) {
    if (n <= 1) {
        return 1;
    }

    return 1LL * n * fact(n - 1);
}

long long nCr(int n, int r) {
    if (r <0 || r> n) {
        return -1;
    }

    return fact(n) / (fact(r) * fact(n - r));
}

int main() {
    int n, r;

    cout << "Enter n: ";
    cin >> n;
    cout << " Enter r: ";
    cin >> r;

    if (r < 0 || r > n) {
        cout << "Invalid input. r must satisfy 0 <= r <= n." << endl;
    } else {
        cout << "C(" << n <<  ", " << r << ") = " << nCr(n, r) << endl;
    }
}
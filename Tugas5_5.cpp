#include <iostream>
using namespace std;

long long fact(int n) {
    if (n <= 1) {
        return 1;
    }

    return 1LL * n * fact(n - 1);
}
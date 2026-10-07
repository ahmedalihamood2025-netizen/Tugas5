#include <iostream>
using namespace std;

long long fibonacci(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    long long a = 0;
    long long b = 1;

    for (int i = 2; i<= n; i++) {
        long long next = a + b;
        a = b;
    }
}
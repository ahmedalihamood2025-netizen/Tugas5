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
        b = next;
    }
    return b;
}
bool isPrime(long long number) {
    if (number < 2) {
        return false;
    }
    for (long long i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    if (n < 0) {
        cout << "Invalid input. n must be non-negative." << endl;
        return 0;
    }

    long long result = fibonacci(n);
    cout << "Fibonacci(" << n << ") = " << result << endl;

    if (isPrime(result)) {
        cout << result << " is a prime number." << endl;
    } else {
        cout << result << " is not a prime number." << endl;
    }

    return 0;
}

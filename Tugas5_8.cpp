#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter the numder of data: ";
    cin >> n;
    if (n <=0) {
        cout << "Thr number of data must be greater than 0." << endl;
        return 0;
    }
    double data[100];
    double sum = 0.0;
    cout << "Enter " << n << " values:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> data[i];
        sum += data [i];
    }
    double mean = sum / n;
    double sumSquaredDifference = 0.0;
    for (int i = 0; i < n; i++) {
        sumSquaredDifference += pow(data[i] - mean, 2);
    }

}
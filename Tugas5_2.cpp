#include <iostream>
using namespace std;

int main() {
    int prices[100];

    for (int i = 1; i<= 100; i++) {
        if (i % 20 == 0) {
            prices[i - 1] = 60;
        } else {
            prices[i - 1] = 80;
        }
    }

    cout << "Photocopy Price Table" << endl;
    cout << "----------------------" << endl;

    for (int i = 1; i <= 100; i++) {
        cout << i << " sheets = " << prices[i - 1] << " Per sheet" << endl;
    }
    return 0;
}

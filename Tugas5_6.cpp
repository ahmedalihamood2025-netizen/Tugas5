#include <iostream>
#include <cmath>
using namespace std;

const double PI = acos(-1.0);
double lateralArea(double r, double h) {
    return 2 * PI * r * h;
}
double surfaceArea(double r, double h) {
    return 2* PI * r * (r + h);
}
double volume(double r, double h) {
    return PI * r * r * h;
}

int main() {
    double r, h;
    
    cout << "Enter radius: ";
    cin >> r;
    cout << "Enter height: ";
    cin >> h;

    cout << "Lateral surface area = " << lateralArea(r, h) << endl;
    cout << "Total surface area = " << surfaceArea(r, h) << endl;
    cout << "Volume = " << volume(r, h) << endl;

    return 0;
}

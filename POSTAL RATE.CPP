#include <iostream>
using namespace std;
#include <cmath>


int main() {

    double Length, Width, Thickness;
    int  dimensions = 0;


    cout << " Enter the length, width, thickness: " << endl;
    cin >> Length >> Width >> Thickness;

    dimensions = Length * Width * Thickness;
    if (Length * Width * Thickness) {
        cout << " the postal rate is R 2.50";
    }
    else if (Length * Width * Thickness) {
        cout << " the postal rate is R 5.00";

    }
    else if (Length * Width * Thickness) {
        cout << " the poastal rate is R 6.25";
    }

   return 0;
}

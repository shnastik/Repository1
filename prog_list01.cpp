#include <iostream>
#include <cmath>
using namespace std;

int main () {
    float k, A, w, x, T, w0;
    cout<<"Please enter k";
    cin>> k;
    cout<<"Please enter A";
    cin>> A;
    cout<<"Please enter w";
    cin>> w;

    w0 = asin(1/k);
    T = (3.14 / 2 - w0) / w;
    x = A * sin(w * T + w0);

    cout<<"Result is "<<T;

    return 0;


} 
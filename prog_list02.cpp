#include <iostream>
#include <cmath>
using namespace std;

int main () {
    float H, V, a, g, t, x, y, T, s;

    cout<<"Please enter H";
    cin>>H;
    cout<<"Please enter V";
    cin>>V;
    cout<<"Please enter a";
    cin>>a;
    cout<<"Please enter t";
    cin>>t;
    g = 9.8;

    s = 1 + (2 * g * H) / (V*V * sin(a) * sin(a));
    if (s < 0) {
        cout<< "Error";
    } else 
    T = V * sin(a) / g * (1 + s);
    H = 1/2 * (g * T *T) - V * T * sin(a);
    x = V * t * cos(a);
    y = H + V * t * sin(a) - 1/2 * g * t * t;

    if (y <= 0){
        cout<<"The stone fell to the bottom";
    } else 

    cout<<"Results: x is "<<x<<" y is"<< y;

    return 0;

}
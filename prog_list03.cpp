#include <iostream>
#include <cmath>
using namespace std;

int main () {
    float x, f, g;
    cout<<"Please enter x"; 
    cin>>x;

    if (x <= -4) {
        cout<<"value should be bigger than -4";
        return -1;
    } 
    if ((x > - 4) && (x < -1)){
        g = abs(x + 6) / ( abs(x +3) -3); 
    } else if ((x > -1) && (x < 5)){
        g = sqrt(5 - x) - 2;
    } else if(x >= 5){
        g = log10(x + 10) - 2; 
    } 
    

    if (g < -2){
        f = abs(g / (1 - g));
    } else if ((g >= -2) && (g <= 1)) {
        f = pow((g +2), 2); 
    } else {
        cout<<"value is out of range";
    }
    cout<<"Result:"<<f<< endl; 


    return 0;
}
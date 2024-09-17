#include <iostream>
#include <cmath>
using namespace std;

int main() {

    // define variables 
    float tax, c1, c2, c3, m, s, f;


    // getting the data 

    // type of coverage
    cout<<"Please enter how many square meters with the roof do you have"<<endl;
    cin>>c1;
    cout<<"Please enter how many square meters without the roof do you have"<<endl;
    cin>>c2;
    cout<<"Please enter how many square meters of the garden do you have"<<endl;
    cin>>c3;

    // type of material 
    cout<<"Please enter 1 if your house made of high-quality materials, enter 2 if your house made of adobe, enter 3 if your house made of different materials"<<endl;
    cin>>m;

    // availability of basic services
    cout<<"Please enter 1 if you have basic services. Enter 2 if you do not"<<endl;
    cin>>s;

    // number of floors of the building 
    cout<<"Please enter how many floors are there in your house"<<endl;
    cin>>f;

    //calculations
    tax = 5000 * c1 + 3000 * c2 + 1000 * c3;


    if (m == 1){
        tax *= 1.15;
    } else if (m == 2){
        tax *= 1.1;
    } tax *= 1.05;


    if (s == 1){
        tax += 2500;
    }


    if (f == 2){
        tax *= 1.1;
    } else if (f == 3){
        tax *= 1.15;
    } else if (f == 4){
        tax *= 1.15;
    } else if (f >= 4) {
        tax *= 1.2;
    }


    // results 

    cout<<" your tax will be "<< tax << endl;

    return 0; 

}

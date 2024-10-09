#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, n1, sumd, dig, opt, p;
    char cont;
    do
    {
        cout << "\nSelect an option from [1-8] according to the menu:" <<endl;
        cout << "[1]. Enter a number in the range between 1000 and 999999"<<endl;
        cout << "[2]. Print the digits of the number"<<endl;
        cout << "[3]. Count how many digits the number has"<<endl;
        cout << "[4]. Return the lowest and highest digits of the number"<<endl;
        cout << "[5]. Return the sum of the digits of the number"<<endl;
        cout << "[6]. Return the product of the odd digits"<<endl;
        cout << "[7]. Calculate the inverted version of the number"<<endl;
        cout << "---------------------------------------------------"<<endl;
        cout << "Enter option: ";
        cin>>opt;
        switch (opt)
        {
            case 1: // OPTION 01: Enter the number
            {
                do
                {  
                    cout<< "Please enter the number ";
                    cin>>n1;


                }
                while (n1 < 1000 | n1 > 999999);
                
                break;
                n = n1;
            };

            case 2: // OPTION 02: Check if the number has repeated digits
            {
                cout<< "Please enter the number ";
                cin>>n;
                while (n > 0)
                {
                    cout<< (n % 10) << " ";
                    n /= 10;
                };
                break;
            };

            case 3: // OPTION 03: Count how many digits the number has
            {
                cout<< "Please enter the number ";
                cin>>n;
                dig = 0;
                while (n > 0)
                {
                    dig++;
                    n /= 10;
                };
                cout<< dig << endl;
                break;
            };

            case 4: // OPTION 04: Return the lowest and highest digits of the number
            {
                cout<< "Please enter the number ";
                cin>>n;
                int maxd = -1, mind = 10;
                while (n > 0)
                {
                    if ((n % 10) >= maxd) {maxd = n % 10;};
                    if ((n % 10) <= mind) {mind = n % 10;};
                    n /= 10;
                };
                cout<<maxd<< endl;
                cout<<mind<< endl;
                break;
            };

            case 5: // OPTION 05: Return the sum of the digits of the number
            {
                cout<< "Please enter the number ";
                cin>>n;
                sumd = 0;
                while (n > 0)
                {
                    sumd += (n % 10);
                    n /= 10;
                };
                cout<<sumd<< endl;
                break;
            };

            case 6: // OPTION 06: Return the product of the odd digits
            {
                cout<< "Please enter the number ";
                cin>>n;
                p = 1;
                while (n > 0)
                {
                    if ((n % 10) % 2 != 0) {p *= (n % 10);};
                    n /= 10;
                };
                cout<<p<< endl;               
                break;
            };
            
            case 7: // OPTION 07: Calculate the inverted version of the number
            {
                cout<< "Please enter the number ";
                cin>>n;
                while (n > 0)
                {
                    cout<< (n % 10);
                    n /= 10;
                };
                break;
            };
        };

        // Request to user continue or not
        cout << "\nDo you want continue [Y|N]? "<< endl;

        cin>> cont;
    }
    while(cont == 'y' || cont == 'Y');

    cout << "\n The program is over!"<< endl;

    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, opt;
    double x;
    char cont;

    do
    {
        double result, x1 = x, last_term;
        cout<< "OPTION 01: Enter the number" << endl;
        cout<< "OPTION 02: Calculate the McLaren series for the exponential function" << endl;
        cout<< "OPTION 03: Calculate the McLaren series for the natural logarithm" << endl;
        cout<< "OPTION 04: Calculate the McLaren series for the sin" << endl;
        cout<< "OPTION 05: Calculate the McLaren series for the cos" << endl;
        cout<< "OPTION 06: Calculate the McLaren series for the rational function" << endl;
        cout<< "----------------------------------------------------------------------" << endl;

        cout<< "\nPlease choose the option";
        cin>>opt;

        switch (opt)
        {
            case 1: 
            {
                cout<< "Please enter x ";
                cin>>x;
                do
                {
                    cout<< "Please enter n from 2 to 20 ";
                    cin>>n;
                }
                while (n < 2 | n > 20);
                break;
            };

            case 2: 
            {
                last_term = 1; 
                result = last_term;
                for (int i = 1; i <= n; i++)
                {
                    last_term *= x / i; 
                    cout<< last_term << " "; 
                    result += last_term; 
                };
                cout<< "e^(x) = " << result; 
                break;
            };

            case 3: 
            {
                last_term = x; 
                result = last_term;
                for (int i = 2; i <= n; i++)
                {
                    last_term *= (-1) * x / i; 
                    cout<< last_term << " "; 
                    result += last_term; 
                };
                cout<< "\nln(1+x) = " << result; 
                break;
            };

            case 4: 
            {
                last_term = x; 
                result = last_term;
                for (int i = 1; i <= n; i++)
                {
                    last_term *= (-1) * (x*x) / ((2*i) * (2*i + 1)); 
                    cout<< last_term << " "; 
                    result += last_term; 
                };
                cout<< "\nsin(x) = " << result; 
                break;
            };

            case 5: 
            {
                last_term = 1; 
                result = last_term;
                for (int i = 1; i <= n; i++)
                {
                    last_term *= (-1) * (x*x) / ((2*i - 1) * (2*i)); 
                    cout<< last_term << " "; 
                    result += last_term; 
                };
                cout<< "\ncos(x) = " << result;
                break;
            };

            case 6:
            {   
                while (abs(x1) >= 1)
                {
                    cout<< "Please enter x, |x| < 1: ";
                    cin>>x1;
                };
                last_term = 1;
                result = last_term;
                for (int i = 2; i <= n; i++)
                {
                    last_term *= x;
                    cout<< i * last_term << " ";
                    result += i * last_term;
                };
                cout<< "\n1 / (1 - x)^2 = " << result;
                break;
            };
        }

        cout<< "\nDo you want to continue? [Y/N]";
        cin>>cont;
    } while (cont == 'Y');
    
    cout<< "The programm is over!" << endl;

    return 0;
};

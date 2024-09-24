#include <iostream>
#include <cmath>

using namespace std;

int main(){
    float s, v, i, n;
    char goods, client, payment;


    cout << "Please choose the category of goods (A, B, C)";
    cin >> goods;
    cout << "Please choose your client type (E (excelent), G (good), M (midle), B (bad)) ";
    cin >> client;
    cout << "Please enter your initial amount";
    cin >> v;



    switch(client){
        case 'E':
            switch(goods){
                case 'A':
                    s = 40;
                    break;
                case 'B': 
                    s = 30;
                    break;
                case 'C': 
                    s = 20;
                    break;
            }
            break;
        case 'G':
            switch(goods){
                case 'A': 
                    s = 30;
                    break;
                case 'B': 
                    s = 20;
                    break;
                case 'C': 
                    s = 10;
                    break;
            }
            break;
        case 'M':
            switch(goods){
                case 'A': 
                    s = 20;
                    break;
                case 'B': 
                    s = 10;
                    break;
                case 'C': 
                    s = 0;
                    break;
            }
            break;
        case 'B':
            switch(goods){
                case 'A': 
                    s = 0;
                    break;
                case 'B': 
                    s = -5;
                    break;
                case 'C': 
                    s = -10;
                    break;
            }
            break;

    }

    if(client == 'E' | client == 'G'){
        cout << "Please choose the type of payment (C (cash), B (a bank card), K (a credit card)): ";
        cin >> payment;

    }
    else if(client == 'M'){
        cout << "Please choose the type of payment(C (cash), B (a bank card)): ";
        cin >> payment;

    }
    else if(client == 'B'){
        payment = 'C';
    }

    if(payment == 'C'){
        cout << "The price in cash will be " << v * (1 - s / 100 ) << endl;
    }else if(payment == 'B'){
        cout << "Please enter the number of contributions ";
        cin >> n;
        cout << "Please enter your interest rate from 3 to 15";
        cin >> i;
        cout << "The price by card will be " << v * (1 + i * n / 100) << endl;
    }else if(payment == 'K'){
        cout << "Please enter the amount of your payments from 1 to 6 ";
        cin >> n;
        cout << "Please choose the type of the credit card (platinum (enter 5) or business (enter 2)) ";
        cin >> i;
        cout << "The price by credit card will be " << v * pow((1 + i / 100), n) << endl;
    }
    return 0;
}                           
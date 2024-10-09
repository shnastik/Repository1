#include <iostream>
#include <cmath>
using namespace std;

int main () {
    long  A, B, sum, sumA, sumB, kA, kB, p, pA, sB, SS, gcd;
    cout<<"Please enter 2 numbers from 10 to 1000"<<endl;
    cin>>A>>B;
    sum = sumA = sumB = kA = kB = sB = 0;
    p = pA = 1;


    //processing 
    for (int i = 1;i <= A; i++){
            if (A % i == 0)
            {sumA += i;
            kA++;
            if(i % 2 != 0){
                pA *= i;
            }}
            
        }  
    for (int j = 1;j <= B; j++){
            if (B % j == 0)
            {sumB += j;
            kB++;
            if(j % 2 == 0){
                sB += j;
            }}
            
        }   

    //the sum of divisors
    sum = sumA + sumB;

    cout<<"the sum of divisors is "<<sum<<endl;

    //the product of the number of divisors;
    p = kA * kB;

    cout<<"the product of the number of divisors is "<<p<<endl;

    //the sum of the product of odd divisors A and the sum of even divisors B;
    SS = pA + sB; 

    cout<<"the sum of the product of odd divisors A and the sum of even divisors B is "<<SS<<endl;

    //the greatest common divisor
    gcd = 0;
    for (int i = 2;i < A; i++){
        for (int j = 2; j < B; j++){
            if (A % i == 0 && B % j == 0 && i == j){
                gcd = i;
            }
        }
    }
    if (gcd == 0){
        cout<<"the numbers are mutually simple"<<endl;
    } else cout<<"the greatest common divisor is "<<gcd<<endl;




}

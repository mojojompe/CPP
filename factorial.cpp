#include <iostream>
using namespace std;
int main(){
    cout << "Enter any number:";
    int value;
    cin >> value;
    int factorial(int);
    int fact = factorial(value);
    cout <<"Factorial of a number is:"<< fact <<endl;
    return 0;
}
int factorial(int n){
    if (n<0){return(-1);}
    if (n==0){return(1);}
    else{return(n*factorial(n-1));}
    }
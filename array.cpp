#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of the array: " <<endl;
    cin >> n;
    int* array = new int[n];
    for(int i=0; i<=n; i++){
        cout << "Element at "<< i <<" is ";
        cin >> array[i];
    }
    for (int i=0; i<=n; i++){
        cout <<"Element "<< i <<"is "<< array[i] <<endl;
    }
    return 0;
}
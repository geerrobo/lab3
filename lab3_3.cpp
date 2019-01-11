#include<iostream>
using namespace std;

int main(){
    double x = 2, y = 1;
    double sum = 0;
    
    while(x <= 69){
        sum += y/x;
        x += 1;
    }

    cout << sum;

    return 0;
}
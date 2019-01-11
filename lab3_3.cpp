#include<iostream>
using namespace std;

int main(){
    double x = 6, y = 1;
    double sum = 0;
    
    while(x <= 19){
        sum += y/x;
        x += 1;
    }

    cout << sum;

    return 0;
}
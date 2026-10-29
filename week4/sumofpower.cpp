#include <iostream>
#include <cmath>

int main(){
    double n, sum,x;
    std::cout<<"Please enter your number"<<"\n";
    std::cin>> x >> n;
    for(int i=1; i <n+1; i++){
        sum = sum + std::pow(x,i);

    }

    std::cout<< sum<<"\n";
}
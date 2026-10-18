#include <iostream>
int main(){
    int n,counter=0;
    std::cin>>n;
    while (n > 3){
        n= n-3;
        counter=counter+1;
    }
    std::cout<< "The quotient is " << counter<<"     The reminder is "<<n;
}
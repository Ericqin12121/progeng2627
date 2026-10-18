#include <iostream>
int main(){
    double a, acc=1;
    int n, counter=0;
    std::cin>> a >>n;

    while(counter < n){
        
        acc= acc * a;
        counter = counter +1;
    }
    std::cout<< "x^"<<n <<"="<<acc <<std::endl;
}
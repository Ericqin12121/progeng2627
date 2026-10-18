#include <iostream>

int main(){
    int n,rem;
    std::cout<<"Please write your number"<<std::endl;
    std::cin>>n;
    rem = n % 3;
    if (rem == 0){
        std::cout<<"this number is a multiple of 3"<<std::endl;
    }
    else {
        std::cout<< "this number isn't a multiple of 3"<<std::endl;
    }
}
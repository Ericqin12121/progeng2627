#include <iostream>

int main(){
    double n1, n2;
    std::cout<<"Please write your number";
    std::cin>> n1>>n2;
    double curmax,curmin;

    if (n1> n2){
        curmax = n1;
        curmin = n2;
    } else {
        curmax =n2;
        curmin=n1;
    }

    while (n1 !=0 ){
        std::cout<<"maximum so far :  "<<curmax<<"   minimum so far  "<<curmin<<"\n";
        std::cout<< "Please write your number"<<"\n";
        std::cin>> n1;
        
        if (n1> curmax){
            std::cout<< "The number is max so far";
            curmax =n1;

        }
        
        
        if (n1< curmin){
            std::cout<< "The number is min so far";
            curmin =n1;
        }
    }
}
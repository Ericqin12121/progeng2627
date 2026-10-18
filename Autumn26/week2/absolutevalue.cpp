#include <iostream>

int main(){
    double n, absv;
    std::cout<<"Please enter your number"<<std::endl;
    std::cin>>n;

    // n for the input, absv will be
    // the absolute value we compute

    // TODO: ask for a number in input
    // TODO: read the input number in n

    if(n < 0){ // yes/no question: is n less than 0?
        // if yes, its absolute value is the number changing the sign
        absv = -n;
    }
    else{ absv=n;
        // if not, its absolute value is the same as n
        // TODO: assign the value of n to absv
    }

    std::cout << "|" << n << "| = " << absv << std::endl;

}
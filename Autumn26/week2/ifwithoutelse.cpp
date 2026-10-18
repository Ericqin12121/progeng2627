// this is not meant to be a good example to imitate!

#include <iostream>

int main(){
    double n;
    // only one variable for both input and output

    std::cout << "please enter a number" << std::endl;
    std::cin >> n;

    if(n < 0){
        n = -n;
        // if n is negative we change its sign
    }
    // otherwise we don't have to do anything

    // we print the absolute value
    std::cout << "absolute value: " << n << std::endl;
}
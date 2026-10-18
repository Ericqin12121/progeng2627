#include <iostream>

int main(){
    int n;

    std::cout << "please enter a number" << std::endl;
    std::cin >> n;

    // this version does two things within the condition of the if:
    // it first computes the remainder of the division of n by 2
    // then checks whether it is equal to 0 or not

    if((n % 2) == 0){

        std::cout << "the number is even" << std::endl;

    }
    else{

        std::cout << "the number is odd" << std::endl;

    }
}
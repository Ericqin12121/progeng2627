#include <iostream>

int main(){
    int number,i=0;
    std::cout <<"Please enter your number";
    std::cin>> number;
    while (number !=1234)
    {
        std::cout <<"Please enter your number";
        i=i +1;
        if ( i==10){

            break;
        }

    }

    std::cout<<"You have tried too many times or entered the right password.";
}
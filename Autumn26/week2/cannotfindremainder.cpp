//Exercise: using the right type
//Change the type of the variables in the program above from int to double to confirm that in that case the program would not run.
//This is because the remainder of the integer division in C++ can only be computed if the numbers are of type int.

#include <iostream>

int main(){
    double rem,n ;
    std::cout<< "Please write your number"<<std::endl;
    std::cin>>n;
    rem = n%2;
    std::cout<<"in the following line, 0 means even and 1 means odd"<<std::endl;
    std::cout<<rem<<std::endl;
}
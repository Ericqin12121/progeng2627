//Rectangles
//Write a program that reads from the user the length of two (different) sides of a rectangle and prints its perimeter and area.

#include <iostream>

int main(){
    double n1,n2,p1,a1;
    std::cout<<"Please write the length of the rectangle."<<std::endl;
    std::cin>>n1;
    std::cout<<"Please write the width of the rectangle."<<std::endl;
    std::cin>>n2;

    p1= n1+n1+n2+n2;
    a1= n1*n2;

    std::cout<< "perimeter="<<p1<<std::endl;
    std::cout<<"area="<<a1<<std::endl;
    std::cin.get();
}
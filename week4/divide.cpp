#include <iostream>

void divide( int& n1, int& n2, int& n3, int & n4){
    n3= n1/n2;
    n4 = n1 % n2;
    
}

int main(){
    std::cout<< "Please enter your number"<<"\n";
    int n1,n2;
    std::cin>> n1>> n2;
    int n3 , n4;
    divide(n1,n2,n3,n4);
    std::cout << n3<< " ......"<< n4<<"\n";
}
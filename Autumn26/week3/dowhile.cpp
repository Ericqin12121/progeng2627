#include <iostream>

int main(){
    int password;
    
    do{
        std::cout<<"Please enter your password"<<"\n";
        std::cin>> password;
    }while(password != 1234);
     std::cout<<" Correct"<<"\n";
}
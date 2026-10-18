#include <iostream>
#include <string>
// this includes the header for text variables

int main(){
    std::string name;
    std::string surname;
    std::cout<<"What is your name?"<<std::endl;
    std::cin>> name;
    std::cout<<"What is your surname?"<<std::endl;
    std::cin>>surname;
    std::cout<<"Hello,"<<name<<std::endl;
    std::cout<<"Hello,"<<surname<<std::endl;
    std::cin.get();
}
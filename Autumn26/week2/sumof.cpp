#include <iostream>

int main(){
    double a, acc=0;
    std::cin>>a;
    while (a !=0){
        acc=acc +a;
        std:: cin>>a;
    }
    std::cout<< "The sum is"<< acc<<std::endl;
}
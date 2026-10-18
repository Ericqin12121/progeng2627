#include <iostream>

int main(){
    double weight,height,BMI;
    std::cout<<"Please write your weight"<<std::endl;
    std::cin>>weight;
    std::cout<<"Please write your height."<<std::endl;
    std::cin>>height;
    BMI= weight/ (height*height);
    std::cout<< "The BMI= "<<BMI <<std::endl;
}
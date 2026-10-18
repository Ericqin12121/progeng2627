#include <iostream>

#include <string>

int main(){
    double n1;
    std::cout << "Please enter your number"<<"\n";
    std::cin>> n1;
    std::string judgement;
    int maxrange, minrange;
    std::cout<<"Please enter your maxrange and your minrange"<<"\n";
    std::cin>>maxrange>>minrange;
    int average;
    average= maxrange/2 + minrange/2;
    std::cout<< average<<"\n";
    while(average != n1){
        std::cout<<"This number is larger or smaller than the real number.";
        
        std::cin>>judgement;
        if ( judgement == "larger"){
            maxrange=average+1;
            average =average/2 + minrange/2;
            
        }
        if (judgement== "smaller"){
            minrange = average-1;
            average = average/2 + maxrange/2;
           
        }
        std::cout << average <<"\n";
    }
    std::cout << average;
}
        
        
        
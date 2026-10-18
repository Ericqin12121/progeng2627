#include <iostream>

int main(){
    std::cout<<"Please wrtie your number";
    int n;
    std::cin>>n;
    int c1=0,c2=0;
    while (c1 <n){
        c1++;
        c2=0;
        while (c2 <n){
            c2++;
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
}
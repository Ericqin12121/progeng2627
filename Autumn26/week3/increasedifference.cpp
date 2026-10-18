#include <iostream>

int main(){
    int n;
    int i=0 , chaju=0,e=0, shuchu=0;
    std::cout<<"Please enter your number";
    std::cin>>n;
    
    while (i <n){
        i++;
        chaju = chaju+1;
        int e =0;
        while(e<n){
            e++;
            shuchu = shuchu + chaju;
            std::cout<< shuchu<<" ";
        }
        
        
        std::cout<<"\n";
    }

}
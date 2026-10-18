#include <iostream>

int main(){
    int n, curmax;
    std::cout<<"Please enter your number"<<"\n";
    std::cin>>n;
    curmax=n;
    while (n>1){
        if(curmax<n){
            curmax=n;
            
        }
        if (n%2 ==0){
        n= n/2;
        }
        else {
        n= n*3 +1;
        }
    std::cout<< n<<"\n";
    
    }
    std::cout<<"That is the maximum number "<<curmax<<"\n";
}
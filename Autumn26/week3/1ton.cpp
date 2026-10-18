#include <iostream>
int add(int a , int b){
    return a+ b;
}

int main(){
    int n;
    std::cout<<"Please write your n"<<"\n";
    std::cin>> n;
    int result =0;
    
    for(int i =0; i<=n; i++){
        

        result = add( result ,i) ;

    }

    std::cout<< result <<"\n";
}
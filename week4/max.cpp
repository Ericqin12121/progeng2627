#include <iostream>
int max( int A , int B){
    int n1;
    if (A>B){
        n1=1;

    }
    else if (A==B){
        n1=2;
    }
    else {
        n1=3;
    }
return n1;
}

int main(){
    int n2,n3;
    std::cout << "Please enter your number"<<"\n";
    std::cin>> n2>> n3;
    if (  max(n2,n3)==1){
        std::cout << "the first one is larger than the second one";

    }
    else if ( max(n2,n3) == 2){
        std::cout << " the first one is the same as the second one";
        

    }
    else{
        std::cout<< "the first one is smaller than the second one";
    }
}
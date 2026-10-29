#include <iostream>

int threemax(int A, int B, int C){
    while ( (A >0 &&  B>0 && C>0) || (A >0 &&  B>0 && C<0) || (A >0 &&  B<0 && C>0) || (A <0 &&  B>0 && C>0) ){
        A= A-1, B =B-1, C=C-1;
    }
    int n1;
    if (A>0){
        n1 = 1;
    }
    else if (B>0){
        n1 =2;
    }
    else {
        n1=3;
    }
    return n1;
}

int main(){
    int n2,n3,n4;
    std::cin>>n2>>n3>>n4;
    if ( threemax(n2,n3,n4)== 1){
        std::cout<<"the first number is the maximum number";
    }
    else if( threemax(n2,n3,n4)== 1){
        std::cout<<"the second number is the maximum number";
    }
    else{
        std::cout<<"the third number is the maximum number";
    }
}
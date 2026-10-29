#include <iostream>

int leapyear(int n1){
    int result;

    if( (n1 % 4) == 0){ 
        // if multiple of 4

        if( (n1 % 100) == 0){ 
            // if (also) multiple of 100
            if((n1%400)==0){
                result=1;
            }
            else {
                result=0;
            }
            // ...

        }
        else{ 
            // if not multiple of 100
            // (but still multiple of 4)
            result=1;
            // ...

        }
    }
    else{
        // if not multiple of 4
        result=0;
        
    }
    return result;
}


int main(){
    int n3;
    std::cout<<"Please enter your number";
    std::cin>> n3;
    std::cout<< leapyear(n3)<<" 1 means that this is a leap year, 0 means that this is not a leap year"<<"\n";
}
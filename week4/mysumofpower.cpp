#include <iostream>

double mysumofpower(double A,  double B){
    double result= 0;
   
    if(B>0){
        for ( double i=1; i<B+1; i++ ){
       double C=1;
        for (double D=0; D<i; D++){
           C = C* A ;
        }
        result = result + C;
        }
    
    
    }
    else{
        for ( double i=-1; i>B-1; i= i-1 ){
            double C=1, E;
                for (double D=0; D>i; D= D-1){
                C = C* A ;
                E= 1/C;
                }
        result = result + E;
       
        
        }
    }
    return result;
}


int main(){
    double a,b;
    std::cout<< "Please enter your number"<<"\n";
    std::cin>> a>> b;
    std::cout<< mysumofpower(a,b)<<"\n";
}
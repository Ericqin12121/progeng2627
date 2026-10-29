#include <iostream>

int factorial(int A){
    int result=1;
    for (int i=1; i< A+1; i++){
        result= result * i;
    }

return result;
}
int main(){

    int n1;
    std::cout<<"Please enter your number"<<"\n";
    std::cin>> n1;
    std::cout<< factorial(n1);
}
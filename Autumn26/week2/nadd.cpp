#include <iostream>
int main(){
    double a, acc=0;
    int n, counter=0;
    std::cin>> a>>n;
    while (counter<n) {
        counter=counter+1;
        acc=a + acc;

    }
    std::cout<<"nx="<<acc;
}
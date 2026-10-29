#include <iostream>

// function myswap to be used 
// in sort_two_numbers below
// must be included here (beforehand)

void sort_two_numbers(double& s1, double& s2){
    if (s1> s2){
        
        int myswap_tmp;

        myswap_tmp = s1;
        s1 = s2;
        s2 = myswap_tmp;

    }
    else {
        s1=s1;
        s2=s2;
    }
}

int main(){
    double n1, n2;
    std::cout << "please enter two numbers:" << std::endl;
    std::cin >> n1 >> n2;
    sort_two_numbers(n1, n2);
    std::cout << n1 << " " << n2 << std::endl;
}
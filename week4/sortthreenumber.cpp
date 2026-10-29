#include <iostream>


void sort(double& n1,double& n2, double& n3){
    if (n1> n2){
        double myswap_tmp;

        myswap_tmp = n1;
        n1 = n2;
        n2 = myswap_tmp;
    }
    if( n2 >n3){
        double myswap_tmp;
        myswap_tmp = n2;
        n2 = n3;
        n3 = myswap_tmp;
    }
    if (n1 >n3) {
        double myswap_tmp;
        myswap_tmp = n1;
        n1 = n3;
        n3 = myswap_tmp;
    }
}
int main(){
    double n1, n2,n3;
    std::cout << "please enter three numbers:" << std::endl;
    std::cin >> n1 >> n2>>n3;
    sort(n1, n2,n3);
    std::cout << n1 << " " << n2<<" "<<n3 << std::endl;
}
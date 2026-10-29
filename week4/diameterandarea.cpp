#include <iostream>
#include <cmath>


int diameter(double& n1, double& n2){
    double diameter = (n1 +n2 )* 2;
    return diameter;
}
int area (double& n1, double &n2){
    double area = n1 * n2;
    return area;
}

int main(){
    std::cout << "enter the length and width of rectangular"<<"\n";
    double n1, n2;
    std::cin>> n1>>n2;

    std::cout<< diameter(n1,n2)<< " "<< area(n1,n2);

}
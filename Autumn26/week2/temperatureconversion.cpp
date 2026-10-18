#include <iostream>
#include <string>

int main(){
    double temp1, temp2;
    std::string unitin,unitout;
    const double CtoF =212;
    std::cin>> temp1 >> unitin;
    if ((unitin == "C")||(unitin == "c")){
        temp2 = temp1 *CtoF;
        std::cout<<"The weather is "<< temp2 << "Fahrenheit"<<std::endl;
    }
    else if ((unitin== "F") || (unitin== "f")){
        temp2= temp1/ CtoF;
        std::cout<< "The weather is "<< temp2 << "Celsius"<<std::endl;
    }
    else {
        std::cout<<"Error";
    }
}
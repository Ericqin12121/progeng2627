#include <iostream>

int main(){
    double n , acc=0;
    int counter=0;
    std::cin>>n;
    while (n != 0){
        acc= acc + n;
        std::cin>> n;
        counter = counter+1;
    }
    std::cout<< "The average number is "<< acc/counter<<std::endl;
}
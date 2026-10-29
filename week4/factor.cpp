#include <iostream>


bool find(int& cf){
    for (int cf1=2; cf1<cf; cf1++){
        if ((cf % cf1)==0){
            return false;
        }
        
    }
    return true;
}

int smallest_factor(int n){

    for(int cf = 2; cf < n; cf++){

        if( (n % cf) == 0){
            find (cf);
            if ( find){
                return cf;

            }

            
            //...it means we have found a factor!
        }

    }
    return 0;
}


int main(){
    std::cout << "Please enter your number"<<"\n";
    int n;
    std::cin>> n;
    std::cout<< smallest_factor(n)<<"\n";
}
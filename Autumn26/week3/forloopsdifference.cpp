#include <iostream>

int main(){
    int n, n2 =0;
    std::cin >> n;
    for(int c2 = 0; c2 < n; c2++){
        n2 = n2 +1;
        int x= 0;

        // the following loop draws one row
        for(int c = 0; c < n; c++){
            x= x + n2;
            std::cout << x<<" "; 
            // there is no << std::endl
            // because we want them on the same row
        }

        std::cout << std::endl;
        // we go on a newline after each row

    }

}
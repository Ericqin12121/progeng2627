#include<iostream>
#include <string>


void swap( std::string& name1 , std::string& name2){
    std::string media;
    media = name1;
    name1 = name2;
    name2= media;
}

int main(){
    std::string name1;
    std::string name2;
    std::cout<< "Please enter your two names"<<"\n";
    std::cin >> name1 >> name2;
    std::cout << "This is name1"<< name1<< "\n";
    std::cout << "This is name2"<< name2<< "\n";

    swap( name1, name2);
    std::cout <<" After swapping"<< "\n";
    std::cout << name1 << "\n";
    std::cout << name2 << "\n";
}
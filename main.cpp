#include <iostream>

int main() {
    float a,b; int opzione;
    std::cin>>a>>b>>opzione;
    switch (opzione){
        case 0:
           std::cout<< (a*b)/2<<std::endl;
            break;
        case 1:
           std::cout<< a*a<<std::endl;
            break;
        case 2:
            std::cout<<a*b<<std::endl;
            break;
        default:
            std::cout<<"opzione non valida"<<std::endl;


    }


    return 0;

}


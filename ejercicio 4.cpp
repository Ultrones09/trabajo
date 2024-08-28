//If the variable value is greater than 15, then subtract 5 from value and print the new value.
#include <iostream>
int main(){
    int valor;
    std::cout<<"introducir valor: ";
    std::cin>>valor;
    if(valor>15)
    {
        valor-=5;
        std::cout<<"nuevo valor :"<<valor<<std::endl;
    }
    else {
        std::cout<<"el valor es : "<<valor<<std::endl;
    }
    return 0;
}
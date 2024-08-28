#include <iostream>

int main(){  //iniciamos codigo
    int a,b,c; //declaramos las variables como enteros

    std::cout<<"ingresar primer entero: ";              //pedimos al usiario que ingrese el entero
    std::cin>>a;                                        //guardamos en primer entero en la variable a

    std::cout<<"ingresar segundo entero: ";             //pedimos al usiario que ingrese el entero
    std::cin>>b;                                        //guardamos en segundo entero en la variable b

    std::cout<<"ingresar tercer entero: ";              //pedimos al usiario que ingrese el entero
    std::cin>>b;                                        //guardamos en tercer entero en la variable c
    std::cin>>c;

    int resultado;                                      //la variable resultado la declaramos como entero
    resultado=a*b*c;                                    //guardamos las variables a,b,c en resultado

    std::cout<<"el producto de axbxc es: "<<resultado<<std::endl;       //imprimimos el reultado
    return 0;
}
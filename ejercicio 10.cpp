//Write a program that asks the user to enter two numbers, obtains the two numbers from the user and prints the sum, product, difference, and quotient of the two numbers. 
#include <iostream>

int main() {
    int num1, num2;

    std::cout << "Introduce el primer número: ";
    std::cin >> num1;

    std::cout << "Introduce el segundo número: ";
    std::cin >> num2;

    int suma = num1 + num2;
    int producto = num1 * num2;
    int resta = num1 - num2;
    int cociente;

    if (num2 != 0) 
    {
        cociente = num1 / num2;
        std::cout << "Cociente: " << cociente << std::endl;
    } 
    else 
    {
        std::cout << "Cociente: Indefinido (división por cero)" << std::endl;
    }
    std::cout << "Suma: " << suma << std::endl;
    std::cout << "Producto: " << producto << std::endl;
    std::cout << "resta: " << resta << std::endl;

    return 0;
}
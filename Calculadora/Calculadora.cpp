// Macías Gutiérrez Angel Adair
// adair_macias@outlook.com
// 08 - 10 - 2020
// Práctica 8 octubre.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>


int main()
{
    char oper;
    int num1, num2, Resultado=0;


    std::cout << "Introduce un numero" << std::endl;
    std::cin >> num1;

    std::cout << "Introduce el simbolo de la operacion que deseas realizar (+, -, * o %)" << std::endl;
    std::cin >> oper;


    std::cout << "Introduce un segundo numero" << std::endl;
    std::cin >> num2;

    if (oper == '+')
    {
        Resultado = num1 + num2;
        std::cout << "El resultado es  " << num1 << oper << num2 << " = " << Resultado;
    }

    else   if (oper == '-')
    {
        Resultado = num1 - num2;
        std::cout << "El resultado es " << num1 << oper << num2 << " = " << Resultado;
    }

    else   if (oper == '*')
    {
        Resultado = num1 * num2;
        std::cout << "El resultado es " << num1 << oper << num2 << " = " << Resultado;
    }

    else if (oper == '%')
    {
        if (num2 != 0)
        {
            Resultado = num1 % num2;
            std::cout << "El resultado es " << num1 << oper << num2 << " = " << Resultado;
        }
        else 
        {
            std::cout << " La operacion que me pides realizar " << num1 << oper << num2 << " es como ella: no la puedes tener :( ";
        }
        
    }

    else if (oper != '+')
    {
        std::cout << "El operador que introdujo no es valido";
    }

    else if (oper != '-')
    {
        std::cout << "El operador que introdujo no es valido";
    }

    else if (oper != '*')
    {
        std::cout << "El operador que introdujo no es valido";
    }

    else if (oper != '%')
    {
        std::cout << "El operador que introdujo no es valido";
    }

   
    return 0;
}


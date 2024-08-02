//
//  inputs.cpp
//  learning
//
//  Created by Paul Veliz on 01/08/24.
//

#include <iostream>


int main(){
    
    std::string nombre = "";
    int edad = 0;
    
    std::cout << "Introduce tu nombre: ";
    getline(std::cin, nombre, '\n');
    
    std::cout << "Introduce tu edad: ";
    std::cin >> edad;
    
    std::cout << "Tu nombre es: " << nombre << std::endl;
    std::cout << "Tu edad es: " << edad << std::endl;
    
    
    return 0;
}

//
//  punteros.cpp
//  learning
//
//  Created by Paul Veliz on 29/07/24.
//

#include <iostream>

int main(){
    
    int edad = 0;
    std::cout << "Introduce tu edad: ";
    std::cin >> edad;
    
    std::cin.ignore();
    
    std::string nombre;
    
    std::cout << "Introduce tu nombre: ";
    std::getline(std::cin, nombre, '\n');
    
    std::cout << "Tu edad es: " << edad << " años." << std::endl;
    std::cout << "Tu Nombre es: "<< nombre << std::endl;
    
    return 0;
}

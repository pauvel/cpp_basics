//
//  funciones.cpp
//  learning
//
//  Created by Paul Veliz on 01/08/24.
//

#include <iostream>

void saludo(std::string x, int y);

int main(){
    std::string nombre = "";
    int edad = 0;
    std::cout << "Ingresa tu nombre: ";
    getline(std::cin, nombre);
    
    std::cout << "Ingresa tu edad: ";
    std::cin >> edad;
    
    saludo(nombre, edad);
    
    return 0;
}


void saludo(std::string nombrePersona, int edad){
    std::cout << "Hola " << nombrePersona << " tu edad es: " << edad << std::endl;
}

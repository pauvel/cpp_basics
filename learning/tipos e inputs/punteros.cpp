//
//  punteros.cpp
//  learning
//
//  Created by Paul Veliz on 29/07/24.
//

#include <iostream>

int main5(){
    
    int numero = 0;
    int *pNumero = &numero;
    
    char letra = 'p';
    char *pLetra = &letra;
    
    std::cout << "Direccion en ram de la variable: " << *pNumero << std::endl;
    std::cout << "Direccion en ram de la variable: " << pNumero << std::endl;
    std::cout << "Direccion en ram de la variable: " << *pLetra << std::endl;
    std::cout << "Direccion en ram de la variable: " << pLetra << std::endl;

    
    return 0;
}

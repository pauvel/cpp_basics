//
//  textos.cpp
//  learning
//
//  Created by Paul Veliz on 28/07/24.
//

#include <iostream>
//using namespace std;

int main(){
    
    std::string nombre = "Paul Veliz";
    
    std::cout << nombre[nombre.length()-1] << std::endl;
    nombre[4] = '-';
    std::cout << nombre << std::endl;
    
    std::cout << "El nuevo valor de nombre es: " << nombre << std::endl;
    
    // Buscar caracter en String
    long cantidadCaracteres = nombre.length();
    long elemento = nombre.find("z", 0);
    
    std::cout << "Length: " << cantidadCaracteres << " Find: " << elemento << std::endl;
    
    // Extraer
    std::string apellido = nombre.substr(5,9);
    std::cout << "Apellido: " << apellido << std::endl;
         
    return 0;
}

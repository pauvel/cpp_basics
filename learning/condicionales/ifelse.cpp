//
//  ifelse.cpp
//  learning
//
//  Created by Paul Veliz on 01/08/24.
//

#include <iostream>


int main099(){
    
    int numero1 = 19;
    int numero2 = 129;
    
    if(numero1 > numero2){
        std::cout << "El numero " << numero1 << " es mayor que " << numero2 << std::endl;
    }else if(numero1 == numero2){
        std::cout << "Los numeros son iguales." << std::endl;
    }
    else{
        std::cout << "El numero " << numero1 << " es menor que " << numero2 << std::endl;
    }
    
    return 0;
}

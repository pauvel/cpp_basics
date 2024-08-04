//
//  return.cpp
//  learning
//
//  Created by Paul Veliz on 01/08/24.
//

#include <iostream>

double media(double num1, double num2){
    double resultado = 0;
    resultado = (num1+num2)/2;
    return resultado;
}


int main99(){
    double rst = media(9.3, 5.9);
    std::cout << media(5.2, 7.2) << std::endl;
    
    std::cout << rst << std::endl;
    return 0;
}

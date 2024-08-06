//
//  inheritance.cpp
//  learning
//
//  Created by Paul Veliz on 05/08/24.
//

#include <iostream>

class Animal{
private:
    std::string nombre;
public:
    void comer(){
        std::cout << "El animal come" << std::endl;
    }
    void dormir(){
        std::cout << "El aminal duerme" << std::endl;
    }
    
    void setNombre(std::string nombre){
        this->nombre = nombre;
    }
    
    std::string getNombre(){
        return this->nombre;
    }
};

class Perro: public Animal{
public:
    void ladrar(){
        std::cout << "El perro ladra" << std::endl;
    }
    
    void comer(){
        std::cout << "El perro come" << std::endl;
    }
};

int main(){
    
    Perro perro1;
    perro1.ladrar();
    perro1.comer();
    
    perro1.setNombre("Pascualin");
    std::cout << perro1.getNombre() << std::endl;
    return 0;
}

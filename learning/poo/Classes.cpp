//
//  Classes.cpp
//  learning
//
//  Created by Paul Veliz on 04/08/24.
//

#include <iostream>

class Alumno {
public:
    int edad;
    double nota;
    std::string nombre;
    
    Alumno(){
        std::cout << "Alumno registrado normal." << std::endl;
    }
    
    Alumno(std::string nombre, int edad){
        std::cout << "Nuevo Alumno Registrado Via Constructor llamado " << nombre << std::endl;
        this->nombre = nombre;
        this->edad = edad;
        
    }
    
    bool aprobado(){
        if(nota > 5.0){
            return true;
        }
        
        return false;
    }
};

int mainsw1(){
    
    Alumno alumno1;
    
    alumno1.edad = 15;
    alumno1.nombre = "pedro";
    alumno1.nota = 6;
    
    Alumno alumno2;
    
    alumno2.edad = 18;
    alumno2.nombre = "paul";
    alumno2.nota = 7.5;
    
    Alumno alumno3("JUANITO", 29);
    alumno3.nota = 10;
    
    std::cout << alumno1.aprobado() << std::endl;
    
    
    
    
    return 0;
}

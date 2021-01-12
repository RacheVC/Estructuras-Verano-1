//
// Created by Luis Armando on 12/1/2021.
//

#ifndef PROYECTO1_LUISMONGE_RACHELLVARGAS_PERSONA_H
#define PROYECTO1_LUISMONGE_RACHELLVARGAS_PERSONA_H
#include <iostream>

using namespace std;

class Persona {
public:
    Persona();

    string &getNombre();

    string &getId();

    string &getTieneHijos();

    string &getEstaEmbarazada();

    string &getEsAdultoMayor();

    string &getCategoria();

    void setNombre(string &nombre);

    void setId(string &id);

    void setTieneHijos(string &tieneHijos);

    void setEstaEmbarazada(string &estaEmbarazada);

    void setEsAdultoMayor(string &esAdultoMayor);

    void setCategoria(string &categoria);

private:
    string nombre;
    string id;
    string tieneHijos;
    string estaEmbarazada;
    string esAdultoMayor;
    string categoria;
};


#endif //PROYECTO1_LUISMONGE_RACHELLVARGAS_PERSONA_H

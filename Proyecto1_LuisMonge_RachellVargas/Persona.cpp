//
// Created by Luis Armando on 12/1/2021.
//

#include "Persona.h"

Persona::Persona() {
    nombre = "indefinido";
    id = "indefinido";
    tieneHijos = "indefinido";
    estaEmbarazada = "indifinido";
    esAdultoMayor = "indefinido";
    categoria = "indefinida"
}

void Persona::setNombre(string &nombre) {
    Persona::nombre = nombre;
}

void Persona::setId(string &id) {
    Persona::id = id;
}

void Persona::setTieneHijos(string &tieneHijos) {
    Persona::tieneHijos = tieneHijos;
}

void Persona::setEstaEmbarazada(string &estaEmbarazada) {
    Persona::estaEmbarazada = estaEmbarazada;
}

void Persona::setEsAdultoMayor(string &esAdultoMayor) {
    Persona::esAdultoMayor = esAdultoMayor;
}

void Persona::setCategoria(string &categoria) {
    Persona::categoria = categoria;
}

string &Persona::getNombre() {
    return nombre;
}

string &Persona::getId() {
    return id;
}

string &Persona::getTieneHijos() {
    return tieneHijos;
}

string &Persona::getEstaEmbarazada() {
    return estaEmbarazada;
}

string &Persona::getEsAdultoMayor() {
    return esAdultoMayor;
}

string &Persona::getCategoria() {
    return categoria;
}

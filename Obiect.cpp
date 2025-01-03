//
// Created by Denisa on 5/28/2024.
//

#include "Obiect.h"

#include <string.h>

Obiect::Obiect()
{
    char* autor = new char[1];
    char* nume = new char[1];
    char* categorie = new char[1];
    this->id = 0;
}

Obiect::Obiect(int id, char* autor, char* nume, char* categorie, int voturi)
{
    this -> id = id;
    this -> autor = new char[strlen(autor) + 1];
    strcpy(this -> autor, autor);
    this -> nume = new char[strlen(nume) + 1];
    strcpy(this -> nume, nume);
    this -> categorie = new char[strlen(categorie) + 1];
    strcpy(this -> categorie, categorie);
    this -> voturi = voturi;
}

Obiect::Obiect(const Obiect& ob)
{
    this -> id = ob.id;
    this -> autor = new char[strlen(ob.autor) + 1];
    strcpy(this -> autor, ob.autor);
    this -> nume = new char[strlen(ob.nume) + 1];
    strcpy(this -> nume, ob.nume);
    this -> categorie = new char[strlen(ob.categorie) + 1];
    strcpy(this -> categorie, ob.categorie);
    this -> voturi = ob.voturi;
}

Obiect::~Obiect()
{
    char* autor = new char[1];
    char* nume = new char[1];
    char* categorie = new char[1];
}

int Obiect::getId()
{
    return this -> id;
}

char* Obiect::getAutor()
{
    return this -> autor;
}

char* Obiect::getNume()
{
    return this -> nume;
}

char* Obiect::getCategorie()
{
    return this -> categorie;
}

int Obiect::getVoturi()
{
    return this -> voturi;
}

void Obiect::setId(int id)
{
    this -> id = id;
}

void Obiect::setAutor(char* autor)
{
    this -> autor = new char[strlen(autor) + 1];
}

void Obiect::setNume(char* nume)
{
    this -> nume = new char[strlen(nume) + 1];
}

void Obiect::setCategorie(char* categorie)
{
    this -> categorie = new char[strlen(categorie) + 1];
}

void Obiect::setVoturi(int voturi)
{
    this -> voturi = voturi;
}

Obiect& Obiect::operator=(const Obiect& ob)
{
    if (this != &ob)
    {
        this -> id = ob.id;
        this -> autor = new char[strlen(ob.autor) + 1];
        strcpy(this -> autor, ob.autor);
        this -> nume = new char[strlen(ob.nume) + 1];
        strcpy(this -> nume, ob.nume);
        this -> categorie = new char[strlen(ob.categorie) + 1];
        strcpy(this -> categorie, ob.categorie);
        this -> voturi = ob.voturi;
    }
    return *this;
}

bool Obiect::operator==(const Obiect& ob)
{
    return this -> id == ob.id && strcmp(this -> autor, ob.autor) == 0 &&
        strcmp(this -> nume, ob.nume) == 0 && strcmp(this -> categorie, ob.categorie) == 0 &&
            this -> voturi == ob.voturi;
}

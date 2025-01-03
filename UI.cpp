//
// Created by Denisa on 5/28/2024.
//

#include "UI.h"

#include <iostream>

UI::UI()
{
    this->s = Service();
}

UI::UI(Service s)
{
    this->s = s;

}

UI::~UI(){
    this->s.~Service();
}

void UI::run()
{
    while (true){
        std::cout<<"1. Adauga obiect\n";
        std::cout<<"2. Statistica voturilor dupa categorie\n";
        std::cout<<"3. Afiseaza toate obiectele unui autor\n";
        std::cout<<"0. Exit\n";
        std::cout<<"Dati comanda: ";
        int cmd;
        std::cin>>cmd;
        if (cmd == 0){
            break;
        }
        if (cmd == 1){
            int id;
            char* autor = new char[100];
            char* nume = new char[100];
            char* categorie = new char[100];
            int voturi;
            std::cout<<"Dati id: ";
            std::cin>>id;
            while ( id < s.getSize()+1 ){
                std::cout<<"Id-ul exista deja. Dati alt id: ";
                std::cin>>id;
            }
            std::cout<<"Dati autor: ";
            std::cin>>autor;
            std::cout<<"Dati nume: ";
            std::cin>>nume;
            std::cout<<"Dati categorie: ";
            std::cin>>categorie;
            std::cout<<"Dati voturi: ";
            std::cin>>voturi;
            Obiect o = Obiect(id, autor, nume, categorie, voturi);
            this->s.addObiect(o);
            delete[] autor;
            delete[] nume;
            delete[] categorie;
        }
        if (cmd == 2)
        {
            this->s.statistica();
        }
        if (cmd == 3 )
        {
            char* autor = new char[100];
            char* categorie = new char[100];
            std::cout<<"Dati autorul: ";
            std::cin>>autor;
            std::cout<<"Dati categoria: ";
            std::cin>>categorie;
            this->s.creatiiAutor(autor, categorie);
            delete[] autor;
            delete[] categorie;
        }
    }

}



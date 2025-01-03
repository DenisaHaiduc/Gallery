//
// Created by Denisa on 5/28/2024.
//

#include "Repo.h"

Repo::Repo()
{
    this->obiecte = std::vector<Obiect>();
}

Repo::~Repo()
{
    this->obiecte.clear();
}

void Repo::addObiect(Obiect o)
{
    obiecte.push_back(o);
}

std::vector<Obiect> Repo::getObiecte()
{
    return obiecte;
}

int Repo::getSize()
{
    return obiecte.size();

}

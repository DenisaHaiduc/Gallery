//
// Created by Denisa on 5/28/2024.
//

#include "Service.h"

#include <algorithm>
#include <iostream>
#include <map>

Service::Service()
{
    this->r = Repo();
}

Service::Service(Repo r)
{
    this -> r = r;
}

Service::~Service()
{
    this->r.~Repo();
}

void Service::addObiect(Obiect o)
{
    this->r.addObiect(o);
}

int Service::getSize()
{
    return this->r.getSize();
}

//vreau sa afiseze in mod descrescator categoriile in fucntie de voturi
void Service::statistica()
{
    std::vector<Obiect> obiecte = this->r.getObiecte();
    std::map<std::string, int> m;
    for (auto o: obiecte)
    {
        if (m.find(o.getCategorie()) == m.end())
        {
            m[o.getCategorie()] = o.getVoturi();
        }
        else
        {
            m[o.getCategorie()] += o.getVoturi();
        }
    }
    std::vector<std::pair<std::string, int>> v;
    for (auto it = m.begin(); it != m.end(); it++)
    {
        v.push_back(*it);
    }
    std::sort(v.begin(), v.end(), [](std::pair<std::string, int> a, std::pair<std::string, int> b){
        return a.second > b.second;
    });
    for (auto p: v)
    {
        std::cout<<p.first<<" "<<p.second<<"\n";
    }
}

//numărul de obiecte de artă dintr-o categorie dată care au fost acceptate în cadrul expoziției pentru care numele artistului creator este nume,
int Service::creatiiAutor(char* autor, char* categorie)
{
    std::vector<Obiect> obiecte = this->r.getObiecte();
    int cnt = 0;
    for (auto o: obiecte)
    {
        if (o.getAutor() == autor && o.getCategorie() == categorie)
        {
            cnt++;
        }
    }
    std::cout<<cnt<<"\n";

}




//
// Created by Denisa on 5/28/2024.
//

#ifndef REPO_H
#define REPO_H
#include "Obiect.h"
#include <vector>

class Repo {
private:
    std::vector<Obiect> obiecte;
public:
    Repo();
    ~Repo();
    void addObiect(Obiect o);
    int getSize();
    std::vector<Obiect> getObiecte();
};



#endif //REPO_H

//
// Created by Denisa on 5/28/2024.
//

#ifndef SERVICE_H
#define SERVICE_H
#include <string>

#include "Repo.h"


class Service {
private:
    Repo r;
public:
    Service();
    Service(Repo r);
    ~Service();
    void addObiect(Obiect o);
    int getSize();
    void statistica();
    int creatiiAutor(char* autor, char* categorie);
};



#endif //SERVICE_H

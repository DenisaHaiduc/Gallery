//
// Created by Denisa on 5/28/2024.
//

#ifndef OBIECT_H
#define OBIECT_H



class Obiect {
private:
    int id;
    char* autor;
    char* nume;
    char* categorie;
    int voturi;
public:
    Obiect();
    Obiect(int id, char* autor, char* nume, char* categorie, int voturi);
    Obiect(const Obiect& ob);
    ~Obiect();
    int getId();
    char* getAutor();
    char* getNume();
    char* getCategorie();
    int getVoturi();
    void setId(int id);
    void setAutor(char* autor);
    void setNume(char* nume);
    void setCategorie(char* categorie);
    void setVoturi(int voturi);
    Obiect& operator=(const Obiect& ob);
    bool operator==(const Obiect& ob);


};



#endif //OBIECT_H

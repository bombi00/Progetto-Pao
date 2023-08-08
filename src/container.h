#ifndef CONTAINER_H
#define CONTAINER_H

#include "oggetto.h"
#include <QString>
#include <iostream>
#include <list>

class Container
{
private:
    struct Nodo {
        Oggetto* data;
        Nodo* next;
        Nodo(Oggetto* item) : data(item), next(nullptr) {}
    };
    Nodo* testa;
    Nodo* coda;
public:
    Container();

    void add(Oggetto *item);
    bool find(QString id) const;
    void del(QString id);
    void print() const;
    Oggetto* getOgg(QString id) const;
    void addQta(QString id, unsigned short int qta);
    std::list<Oggetto*> fillList() const;
};

#endif // CONTAINER_H

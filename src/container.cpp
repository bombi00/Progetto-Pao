#include "container.h"
#include <iostream>


Container::Container() : testa(nullptr), coda(nullptr) {}

void Container::add(Oggetto *item)
{
    Nodo* newNode = new Nodo(item);
    if (testa == nullptr) {
        testa = newNode;
    } else {
        coda->next = newNode;
    }
    coda = newNode;
}

bool Container::find(QString id) const
{
    Nodo* current = testa;
    while (current != nullptr) {
        if (current->data->getId() == id) {
            return true;
        }
        current = current->next;
    }
    return false;
}

void Container::del(QString id)
{
    Nodo* currentNode = testa;
    Nodo* prevNode = nullptr;

    while (currentNode != nullptr) {
        if (currentNode->data->getId() == id) {
            if (prevNode == nullptr) {
                testa = currentNode->next;
            } else {
                prevNode->next = currentNode->next;
            }
            if (currentNode == coda) {
                coda = prevNode;
            }
            delete currentNode;
            break;
        }
        prevNode = currentNode;
        currentNode = currentNode->next;
    }
}

void Container::print() const
{
    Nodo* currentNode = testa;
    while (currentNode != nullptr) {
        std::cout << currentNode->data->getId().toStdString() << std::endl;;
        currentNode = currentNode->next;
    }
}

Oggetto *Container::getOgg(QString id) const
{
    Oggetto* o = nullptr;
    Nodo* currentNode = testa;
    while(currentNode != nullptr) {
        if(currentNode->data->getId() == id) {
            return currentNode->data;
        }
        currentNode = currentNode->next;
    }
    return o;
}

void Container::addQta(QString id, unsigned short qta)
{
    Nodo* currentNode = testa;
    while(currentNode != nullptr) {
        if(currentNode->data->getId() == id) {
            currentNode->data->addQta(qta);
            return;
        }
        currentNode = currentNode->next;
    }
}

std::list<Oggetto *> Container::fillList() const
{
    std::list<Oggetto*> lista;
    Nodo* currentNode = testa;
    while(currentNode != nullptr) {
        lista.push_back(currentNode->data);
        currentNode = currentNode->next;
    }
    return lista;
}







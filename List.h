//
// Created by AnnyB on 25.11.2023.
//

#ifndef LAB3_LIST_H
#define LAB3_LIST_H

#include "Iterator.h"

template <typename T>
class List {

    using iterator = Iterator<T>;
    virtual void push_back(const T& data) = 0;
    virtual void insert(std::size_t position, const T &data) = 0;
    virtual void insert(iterator position, const T &data) = 0;
    virtual void erase(std::size_t position) = 0;
    virtual void erase(iterator position) = 0;
    virtual std::size_t size() = 0;

};


#endif //LAB3_LIST_H

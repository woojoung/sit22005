//
// Created by Changbeom Choi on 2017. 5. 9..
//

#ifndef SIT22005_TINYMANAGER_H
#define SIT22005_TINYMANAGER_H

#include "tinynode.h"

template<class T>
class tinymanager
{
public:
    tinymanager();
    virtual ~tinymanager();

public:
    void insert(T data);
    void insert(T data, tinynode<T>* _prev);

    bool remove(T data);
    bool remove(tinynode<T>* _node);

    tinynode<T>* find(T data);

private:
    tinynode<T>* m_pHead;
};

template <class T>
tinymanager<T>::tinymanager()
        :m_pHead(NULL)
{

}

template <class T>
tinymanager<T>::~tinymanager()
{

}

template <class T>
void tinymanager<T>::insert(T data)
{

}

template <class T>
void tinymanager<T>::insert(T data, tinynode<T> *_prev)
{

}

template <class T>
bool tinymanager<T>::remove(T data)
{
    return true;
}

template  <class T>
bool tinymanager<T>::remove(tinynode<T> *_node)
{
    return true;
}

template <class T>
tinynode<T>* tinymanager<T>::find(T data)
{
    return NULL;
}

#endif //SIT22005_TINYMANAGER_H

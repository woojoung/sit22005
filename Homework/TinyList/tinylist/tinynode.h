//
// Created by Changbeom Choi on 2017. 5. 9..
//

#ifndef SIT22005_TINYNODE_H
#define SIT22005_TINYNODE_H

#include "tinylist_def.h"

template<class T>
class tinynode
{
public:
    tinynode();

    T& get_value();
    void set_value(T val);

    tinynode* get_next_pointer() { return m_pNext;}
    void set_next_pointer(tinynode* _pNext){ m_pNext = _pNext;}
private:
    T data;
    tinynode* m_pNext;
};

template<class T>
tinynode<T>::tinynode()
        :m_pNext(NULL), data()
{

}


#endif //SIT22005_TINYNODE_H

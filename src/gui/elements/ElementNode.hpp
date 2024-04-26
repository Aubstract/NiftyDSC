// Created by Aubrey on 4/25/2024

#ifndef NIFTYDSC_ELEMENTNODE_H
#define NIFTYDSC_ELEMENTNODE_H

template<class C, class N>
class ElementNode
{
public:
    C               element;
    ElementNode<N>* next;
};

#endif  // NIFTYDSC_ELEMENTNODE_H
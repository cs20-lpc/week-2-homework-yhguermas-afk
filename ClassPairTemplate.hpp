#ifndef CLASSPAIRTEMPLATE_HPP
#define CLASSPAIRTEMPLATE_HPP

#include <iostream>

template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    // Prototype for constructor
    Pair(T1 f, T2 s);

    // Prototype for print()
    void print() const;
};

// Include implementation file
#include "ClassPairTemplate.tpp"

#endif
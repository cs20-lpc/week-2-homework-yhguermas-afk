#ifndef CLASSPAIRTEMPLATE_TPP
#define CLASSPAIRTEMPLATE_TPP

#include "ClassPairTemplate.hpp" // This tells the IDE what 'Pair' is

// Constructor implementation
template <typename T1, typename T2>
Pair<T1, T2>::Pair(T1 f, T2 s) : first(f), second(s) {}

// Print method implementation
template <typename T1, typename T2>
void Pair<T1, T2>::print() const {
    std::cout << "(" << first << ", " << second << ")" << std::endl;
}

#endif
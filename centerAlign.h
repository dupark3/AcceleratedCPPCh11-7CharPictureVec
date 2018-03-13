#ifndef GUARD_centerAlign_h
#define GUARD_centerAlign_h

#include <string>
#include <vector>

#include "centerAlign.cpp"

template <class T>
std::string::size_type width(const T&);

template <class T>
T centerAlign(const T&);

#endif // GUARD_centerAlign_h


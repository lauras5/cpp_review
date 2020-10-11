/*
    Salcido, Laura

    September, 10 2020

    CS A250
    A2 - Pokemon Class
*/
#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#include <string>

class Pokemon
{
private:
    const int number;
    const std::string pokemon;
    const std::string type;
    const std::string secondType;

public:
    Pokemon();
    Pokemon(const std::string pName, int pNum, const std::string pType) : pokemon(pName), number(pNum), type(pType) {}
    Pokemon(const std::string pName, int pNum, const std::string pType, const std::string sType) : pokemon(pName), number(pNum), type(pType), secondType(sType) {}
    ~Pokemon();

    std::string getType1() const;
    std::string getType2() const;
    /*  
        The function compares the types of the calling object and the parameter object. If at
        least one type is the same, the function returns true; if the objects do not have any type
        in common, the function returns false
    */
    bool commonType(const Pokemon &obj) const;
    void print() const;
};

// tests successful
#endif
//
// Created by Joaquin A Lopez on 23/5/2022.
//
#include <iostream>
#include <iomanip>
#include <cassert>

using namespace std::literals; // de esta forma puedo usar strings de forma mas facil

int main() {

    //prueba inicial(como funciona assert)
    assert (2 == 1 + 1);
    // bool
    assert (true);
    assert (false==false);
    assert (false!=true);
    assert (not false);
    assert (false == not true);
    assert (true and true);
    assert (false or true);
    assert ((false and false) == false);
    // double
    assert (2.0 == 1.0+1.0);
    assert (1.0 == 0.1*10.0);
    assert (1.0 != 0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1); /* por problemas de presicion explicados
    en clase no da como resultado 1.0 */
    assert(3E2 == 3e2);
    assert(3E2 == 3*10*10);
    //unsigned
    assert (4u <= 8u+21u);
    assert (34u != 47u);
    //char
    assert ('a' == 'a');
    assert ('a' < 'b');
    assert ('b' != 'c');
    //int
    assert (-2 == -1*2);
    assert (-21 == 7*-3);
    assert (-5 != 5);
    assert (20 >= -10);
    assert (30000 == 30'000);
    //string
    assert ("hola"s == "hola"s); //Uso la s para que se tome al tipo de dato en C++
    assert ("chau"s < "como estas?"s);
    assert ("Hola "s + "Como "s + "Estas?" == "Hola Como Estas?");


}
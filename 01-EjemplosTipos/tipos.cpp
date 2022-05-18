#include <iostream>
#include <iomanip>
#include <cassert>

int main() {

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
    assert (1.0 != 0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1);
    //unsigned
    assert (4 <= 8+21);
    assert (34 != 47);
    //char
    assert ('a' == 'a');
    assert ('a' < 'b');
    assert ('b' != 'c');
    //int
    assert (-2 == -1*2);
    assert (-21 == 7*-3);
    assert (-5 != 5);
    assert (20 >= -10);
    //string
    assert ("hola" == "hola");
    assert ("chau" < "como estas?");

}
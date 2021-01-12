#include <iostream>
#include "BST.h"
#include <fstream>

using namespace std;

int main() {
    /*  BST t;
    t.insert(20);
    t.insert(25);
    t.insert(15);
    t.insert(10);
    t.insert(30);
    t.display();
    t.remove(20);
    t.display();
    t.remove(25);
    t.display();
    t.remove(30);
    t.display();*/
    fstream fe("DatosBancoUno.txt");
    char ascii;
    while(fe >> std::noskipws >> ascii){
        std::cout << ascii;
    }

    return 0;
}

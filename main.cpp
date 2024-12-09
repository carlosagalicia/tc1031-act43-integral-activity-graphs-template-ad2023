// =========================================================
// File: main.cpp
// Author: Carlos Galicia - A01709890
// Date: 06/11/2023
// =========================================================
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
int main(){// Complejidad O(n*log(n))
    string input = "";
    map<char, int> contador;
    vector<string> vect;
    string letras;
    int arbol = 0, bellotas = 0;

    while (input != "****"){ // Crear vector de strings, complejidad O(n)
        cin >> input;
        input.erase(remove(input.begin(), input.end(),'('),input.end());
        input.erase(remove(input.begin(), input.end(),','),input.end());
        input.erase(remove(input.begin(), input.end(),')'),input.end());
        vect.push_back(input);
    }
    vect.pop_back();

    cin >> input; // Crear string de letras
    input.erase(remove(input.begin(), input.end(),','),input.end());
    letras = input;

    if(vect.size() == 0){ // Si el tamaño del vector es 0..
        cout << "There are " << arbol << " tree(s) and " << letras.size() << " acorn(s)." << endl;
        return 0;
    }

    arbol = 1;
    contador[vect[0][0]] = arbol;
    contador[vect[0][1]] = arbol;
    for(int i = 1; i<vect.size(); i++){ // Relaciona cada vertice con su arbol, complejidad(nlog(n))
        if (contador.find(vect[i][0]) != contador.end() || contador.find(vect[i][1]) != contador.end()){ // Si el indice del padre existe, incrementa su contador, complejidad(log(n))
            contador[vect[i][0]] = arbol;
            contador[vect[i][1]] = arbol;     
            } 
        else{
            arbol++;
            contador[vect[i][0]] = arbol;
            contador[vect[i][1]] = arbol;
        }
    }

    bellotas = 0;
    for(int i = 1; i < letras.size(); i++){// Cuenta los vertices no relacionados como bellotas, complejidad(nlog(n))
        if (contador.find(letras[i]) == contador.end()) { // Si el indice del padre existe, incrementa su contador, complejidad(log(n))
            bellotas++;
            contador[letras[i]] = arbol + bellotas;
        } 
    }

    cout << "There are " << arbol << " tree(s) and " << bellotas << " acorn(s)." << endl;
    return 0;
}

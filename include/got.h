/*Header contendo a declaração das funções e variáveis globais do arquivo got.cpp
  Autor: Cristofer Oswald e Bruno Cesar
  Data: 23/05/2017*/

#ifndef GOT_H
#define GOT_H

#include "Vertice.h"
#include "algoritmos.h"

#include <string.h>
#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>

//Hash map com todos os vértices
std::unordered_map<std::string, Vertice*> grafo;

bool verificaArgs(int argc);
void leGrafo(std::string& nome_file);

#endif //GOT_H

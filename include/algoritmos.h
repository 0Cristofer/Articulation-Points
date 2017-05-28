/*Header que contém os cabeçalhos necessários para algoritmos.cpp
  Autor: Cristofer Oswald e Bruno Cesar
  Data: 23/05/2017 */

#ifndef ALGORITMOS_H
#define ALGORITMOS_H

#include "Vertice.h"

#include <string>
#include <unordered_map>

int distancia(Vertice* u, Vertice* v,
              std::unordered_map<std::string, Vertice*>& grafo);
void pontosDeArticulacao(Vertice *u, int tempo,
                        std::unordered_map<std::string, Vertice*>& grafo);
void pontes(std::unordered_map<std::string, Vertice*>& grafo);
void reiniciaVerices(std::unordered_map<std::string, Vertice*>& grafo);
int verificaDistancia(Vertice* u, Vertice* v,
                      std::unordered_map<std::string, Vertice*>& grafo);

#endif //ALGORITMOS_H

/*Definição de um vértice
  Autor: Cristofer Oswald
  Data: 23/05/2017 */

#ifndef VERTICE_H
#define VERTICE_H

#include <vector>

enum cor{
  BRANCO, CINZA, PRETO
};

class Vertice{
public:
private:
  std::vector<Vertice*> vizinhos;
};

#endif //VERTICE_H

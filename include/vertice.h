/*Definição de um vértice
  Autor: Cristofer Oswald
  Data: 23/05/2017 */

#ifndef VERTICE_H
#define VERTICE_H



enum Cor{
  BRANCO, CINZA, PRETO
};

class Vertice{
public:
private:
  std::vector<Vertice*> vizinhos;
  Cor cor = Cor::BRANCO;
  Vertice* predecessor;
};



#endif //VERTICE_H

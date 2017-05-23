/*Definição de um vértice
  Autor: Cristofer Oswald
  Data: 23/05/2017 */

#ifndef VERTICE_H
#define VERTICE_H

#include <vector>

enum Cor{
  BRANCO, CINZA, PRETO
};

class Vertice{
public:
  int getDescobrimento();
  int getTermino();
  int getDistancia();

  std::vector<Vertice*> getVizinhos();
  Cor getCor();
  Vertice* getPrececessor();

  void setDescobrimento(int descobrimento);
  void setTermino(int termino);
  void setDistancia(int distancia);
  
  void addVizinho(Vertice* vertice);
  void setCor(Cor cor);
  void setPrececessor(Vertice* vertice);
private:
  int descobrimento_ = 0;
  int termino_ = 0;
  int distancia_ = 0;

  std::vector<Vertice*> vizinhos_;
  Cor cor_ = Cor::BRANCO;
  Vertice* predecessor_;

};

#endif //VERTICE_H

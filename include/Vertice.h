/*Definição de um vértice
  Autor: Cristofer Oswald
  Data: 23/05/2017 */

#ifndef VERTICE_H
#define VERTICE_H

#include <vector>
#include <string>
#include <iostream>

enum Cor{
  BRANCO, CINZA, PRETO
};

class Vertice{
public:
  Vertice(std::string& nome);

  void setDescobrimento(int descobrimento);
  void setTermino(int termino);
  void setDistancia(int distancia);
  void setLow(int low);

  void addVizinho(Vertice* vertice);
  void setCor(Cor cor);
  void setPredecessor(Vertice* vertice);

  int getDescobrimento();
  int getTermino();
  int getDistancia();
  int getLow();

  std::string& getNome();
  std::vector<Vertice*>& getVizinhos();
  Cor getCor();
  Vertice* getPredecessor();

  void printVizinhos();
  void limparDados();
private:
  int descobrimento_ = 0;
  int termino_ = 0;
  int distancia_ = 0;
  int low_ = 0;

  std::string nome_;
  std::vector<Vertice*> vizinhos_;
  Cor cor_ = Cor::BRANCO;
  Vertice* predecessor_ = NULL;
};

#endif //VERTICE_H

/*Implementação da classe Vertice
  Autor: Cristofer Oswald
  Data: 23/05/2017 */

#include "include/Vertice.h"

Vertice::Vertice(std::string& nome){
  nome_ = nome;
}

void Vertice::setDescobrimento(int descobrimento){
  descobrimento_ = descobrimento;
}

void Vertice::setTermino(int termino){
  termino_ = termino;
}

void Vertice::setDistancia(int distancia){
  distancia_ = distancia;
}

void Vertice::addVizinho(Vertice* vertice){
  vizinhos_.push_back(vertice);
}

void Vertice::setCor(Cor cor){
  cor_ = cor;
}

void Vertice::setPredecessor(Vertice* predecessor){
  predecessor_ = predecessor;
}

int Vertice::getDescobrimento(){
  return descobrimento_;
}

int Vertice::getTermino(){
  return termino_;
}

int Vertice::getDistancia(){
  return distancia_;
}

std::string& Vertice::getNome(){
  return nome_;
}

std::vector<Vertice*>& Vertice::getVizinhos(){
  return vizinhos_;
}

Cor Vertice::getCor(){
  return cor_;
}

Vertice* Vertice::getPredecessor(){
  return predecessor_;
}

void Vertice::printVizinhos(){
  std::cout << "Vizinhos de " << nome_ << ":" << std::endl;
  for(auto& vizinho : vizinhos_){
    std::cout << "\t" << vizinho->getNome() << std::endl;
  }
}

void Vertice::limparDados(){
  setDescobrimento(0);
  setTermino(0);
  setTermino(0);
  setCor(Cor::BRANCO);
  setPredecessor(NULL);
}

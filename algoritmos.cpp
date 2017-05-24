/*Arquivo que contém a implementação de algoritmos em grafos
  Autor: Cristofer Oswald
  Data: 23/05/2017 */

#include "include/algoritmos.h"
#include "include/Vertice.h"

#include <queue>
#include <iostream>


int distancia(Vertice* u, Vertice* v, std::unordered_map<std::string, Vertice*>& grafo){
              std::queue<Vertice*> fila;
  Vertice *atual;

  u->setCor(Cor::CINZA);
  //As outras inicializações já acontecem em reinicia;

  fila.push(u);
  while(!fila.empty()){
    atual = fila.front();
    fila.pop();
    for(Vertice* vizinho : atual->getVizinhos()){
      if(vizinho->getCor() == Cor::BRANCO){
        vizinho->setCor(Cor::CINZA);
        vizinho->setDistancia(atual->getDistancia() + 1);
        vizinho->setPredecessor(atual);
        fila.push(vizinho);
      }
      atual->setCor(Cor::PRETO);
    }
  }

  return v->getDistancia();
}

void pontosDeArticulacao(Vertice *u, int tempo,
                        std::unordered_map<std::string, Vertice*>& grafo){
  tempo = tempo + 1;
  u->setCor(Cor::CINZA);
  u->setLow(tempo);
  u->setDescobrimento(tempo);

  for(Vertice* v : u->getVizinhos()){
    if(v->getCor() == Cor::BRANCO){
      v->
    }
  }

}

void pontes(std::unordered_map<std::string, Vertice*>& grafo){
  int tempo = 0;

}

void reiniciaVerices(std::unordered_map<std::string, Vertice*>& grafo){
  for(auto& vertice : grafo){
    vertice.second->limparDados();
  }
}

/*Arquivo pincipal da leitura do grafo de Game of Thrones
  Autor: Cristofer Oswald
  Data: 23/05/2017 */

#include "include/got.h"

int main(int argc, char** argv){
  if(!verificaArgs(argc)){
    return 0;
  }

  int tempo = 0;
  std::string nome_arquivo(argv[1]);
  std::string vertice1, vertice2;
  Vertice* u;
  Vertice* v;

  std::cout << "Lendo grafo: " << nome_arquivo << std::endl ;
  leGrafo(nome_arquivo);

  //Excutando algoritmo de caminho mínimo
  reiniciaVerices(grafo);
  std::cout << std::endl <<
    "Teste de execução do algoritmo de distância entre dois vertices:"
    << std::endl;
  std::cout << "Digite o nome do vertice 1: ";
  std::cin >> vertice1;
  std::cout << "Digite o nome do vertice 2: ";
  std::cin >> vertice2;

  if((grafo.find(vertice1) == grafo.end()) ||
    (grafo.find(vertice2) == grafo.end())){
    std::cout << "Nome de vertices errado, abortando" << std::endl;
    return 0;
  }

  std::cout << "Distância entre os vértices " << vertice1 << " e vértice "
    << vertice2 << " é : " << distancia(grafo[vertice1], grafo[vertice2], grafo)
    << std::endl;

  //Executando algoritmo de procura de pontos de articulação
  reiniciaVerices(grafo);
  std::cout << std::endl <<
    "Teste de execução do algoritmo de procura de pontos de articulação:"
    << std::endl;
  pontosDeArticulacao(grafo.begin()->second, tempo, grafo);

  //Executando algoritmo de procura de pontes
  tempo = 0;
  reiniciaVerices(grafo);
  std::cout << std::endl <<
    "Teste de execução do algoritmo de procura de pontes:"
    << std::endl;
  pontes(grafo);

  std::cout << std::endl << "Fim" << std::endl;
  return 0;
}

bool verificaArgs(int argc){
  if(argc != 2){
    std::cout << "Argumentos inválidos, modo de execução:";
    std::cout << " got nome_do_grafo" << std::endl;
    return false;
  }
  return true;
}

//Lê um grafo dado o nome do arquivo
void leGrafo(std::string& nome_file){
  std::ifstream input_file;
  std::string linha, origem, destino;

  input_file.open(nome_file);

  if(input_file.is_open()){
    getline(input_file, linha, '\r'); //Ignora a primeira linha

    while(getline(input_file, linha, '\r')){
      origem = strtok(&linha[0], ",");
      destino = strtok(NULL, ",");

      //Verifica se o vertice de origem está no hash de vertices
      if(grafo.find(origem) == grafo.end()){
        grafo[origem] = new Vertice(origem);
      }

      //Verifica se o vertice de destino está no hash de vertices
      if(grafo.find(destino) == grafo.end()){
        grafo[destino] = new Vertice(destino);
      }

      //Adiciona o destino como vizinho da origem
      grafo[origem]->addVizinho(grafo[destino]);
      //Adiciona a origem como vizinho da destino
      grafo[destino]->addVizinho(grafo[origem]);
    }
  }
  else{
    std::cout<< "Arquivo inválido" << std::endl;
  }
}

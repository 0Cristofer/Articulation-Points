/*Arquivo que implementa algoritmos no grafo de game of thrones
  Autor: Cristofer Oswald
  Data: 23/05/2017 */

#include "include/Vertice.h"

bool verificaArgs(int argc){
  if(argc != 2){
    std::cout << "Argumentos inválidos, modo de execução:";
    std::cout << " got nome_do_grafo" << std::endl;
    return false;
  }
  return true;
}

void leGrafo(std::string& nomeFile){
  std::ifstream inputFile;
  std::string linha, nome1, nome2;

  inputFile.open(nomeFile);

  if(inputFile.is_open()){
    getline(inputFile, linha, '\r'); //Ignora a primeira linha

    while(getline(inputFile, linha, '\r')){
      nome1 = strtok(&linha[0], ",");
      nome2 = strtok(NULL, ",");
      std::cout << "Nome 1 : " << nome1 <<"  Nome 2: " << nome2 << std::endl;
      //TODO Logica gerar lista de adjacencia
    }
  }
  else{
    std::cout<< "Arquivo inválido" << std::endl;
  }
}

int main(int argc, char** argv){
  if(!verificaArgs(argc)){
    return 0;
  }

  std::string nome_arquivo(argv[1]);

  std::cout << "Lendo grafo: " << nome_arquivo << std::endl ;

  leGrafo(nome_arquivo);
  std::cout << std::endl << "Fim" << std::endl;
  return 0;
}

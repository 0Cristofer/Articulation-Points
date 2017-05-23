/*Arquivo que implementa algoritmos no grafo de game of thrones
  Autor: Cristofer Oswald
  Data: 23/05/2017 */

#include "include/vertice.h"


using namespace std;

void leGrafo(string nomeFile ){
    string linha, nome1, nome2;
    inputFile.open(nomeFile);
    if(inputFile.is_open()){
        getline(inputFile,linha,'\r'); //Ignora a primeira linha

        //cout<<linha;
        while(getline(inputFile,linha,'\r')){
            nome1 = strtok(&linha[0], ",");
            nome2 = strtok(NULL, ",");
            cout << "Nome 1 : " << nome1 <<"  Nome 2: " << nome2<<endl;

            //TODO Logica gerar lista de adjacencia

        }
    }

}

int main(){
    string nomeFile;
    cout << "Teste do got.cpp! Insira o nome do arquivo a ser lido: ";
    cin >> nomeFile;
    leGrafo(nomeFile);
    cout <<"\nFim\n";
    return 0;
  }

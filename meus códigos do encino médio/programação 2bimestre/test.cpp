#include <iostream>
#include <string>
using namespace std;

struct veiculos {
    string placa;
    string modelo;
    string ano;
    string quilometragem;
    string status;

};

const int todosveiculos = 2;
    veiculos v[todosveiculos];
    char opcao;
    int total = 0;

    
   int placaexistente(string placatemp){
    for (int i = 0; i < total; i++){
        if (v[i].placa == placatemp){
            return true;  
        } 
           
    }
 return false;
   }

 void cadastrar(){
    
do{
    string placatemp;

    if (total >= todosveiculos){
    cout << "Numeros de cadrasto de veiculos alcancados" << endl;
    break;
    }
    cout << "=======================" << endl;

cout << "veiculos cadastrados #" << (total + 1) << endl;
    
    cout << "Digite o placa: ";
    cin >> placatemp;
        if (placaexistente(placatemp)){
            cout << "placa ja cadastrada!!. Tente novamente com outra placa." << endl;
           break;
         }

    v[total].placa = placatemp;


    cout << "Digite a modelo: ";
     cin >> v[total].modelo;

    cout << "Digite o ano: ";
     cin >> v[total].ano;
  
    cout << "Digite a quilometragem: ";
     cin >> v[total].quilometragem;
  
    cout << " Ativo/Inativo: ";
    cin >> v[total].status;

    total++;

    
     } while (opcao !=0);

 
    }
    void editar() {
    if (total == 0) {
        cout << "Nenhum veiculo cadastrado para editar." << endl;
        return;
    }
cout << "=======================" << endl;
    string placaBusca;
    cout << "Digite a placa do veiculo que deseja editar: ";
    cin >> placaBusca;

    int encontrado = false;

    for (int i = 0; i < total; i++) {
        if (v[i].placa == placaBusca) {
            cout << "Veiculo encontrado. Digite os novos dados:" << endl;

            cout << "Nova placa: ";
            cin >> v[i].placa;

            cout << "Novo modelo: ";
            cin >> v[i].modelo;

            cout << "Novo ano: ";
            cin >> v[i].ano;

            cout << "Nova quilometragem: ";
            cin >> v[i].quilometragem;

            cout << "Novo status (ativo/inativo): ";
            cin >> v[i].status;

            encontrado = true;
            cout << "Veiculo atualizado com sucesso!" << endl;
            break;
        }
    }

    if (!encontrado) {
        cout << "Placa nao encontrada." << endl;
    }


}
void excluir() {
    if (total == 0) {
        cout << "Nenhum veiculo cadastrado foi encontrado para excluir." << endl;
        return;
    }
cout << "=======================" << endl;
    string placaBusca;
    cout << "Digite a placa do veiculo que deseja excluir: " << endl;
    cin >> placaBusca;

    bool encontrado = false;

    for (int i = 0; i < total; i++) {
        if (v[i].placa == placaBusca) {
            for (int e = i; e < total - 1; e++) {
                v[e] = v[e + 1];
            }
            total--;
            encontrado = true;
            cout << "Veiculo excluido com sucesso!" << endl;
            break;
        }
    }

    if (!encontrado) {
        cout << "Placa nao encontrada." << endl;
    }
}


void exibir(){
    
 for (int i = 0; i < total; i++) {

cout << "=====================" << endl;
    cout << "Placa: " << v[i].placa << endl;
    cout << "Modelo: " << v[i].modelo << endl;
    cout << "Ano: " << v[i].ano << endl;
    cout << "Quilometragem: " << v[i].quilometragem << endl;
    cout << "Ativo/Inativo: " << v[i].status << endl;
 }

}
void menu(){
    cout << "=======================" << endl;
    cout << "Menu de opcoes" << endl;
    cout << "======================" << endl;
    cout << "Digite 1 para cadastrar" << endl;
    cout << "Digite 2 para exibir" << endl;
     cout << "Digite 3 para editar" << endl;
     cout << "Dijite 4 para excluir" << endl;
     cout << " Dijite 0 Para sair" << endl;


}

int main(){
    int opcao;
    do
    {
        menu();
        cin >> opcao;
          switch (opcao){
            case 1:
           cadastrar();
            break;
           case 2:
           exibir();
            break;
            case 3:
            editar();
            break;
            case 4:
            excluir();
            break;
          }
    } while (opcao !=0);

    return 0;
}
#include <iostream>
using namespace std;
int main (){
    int codigo;
    do{
        cout << "*** pessoa ***" << endl;
        cout << "1. cafe da manha" << endl;
        cout << "2. almoco" << endl;
        cout << "3. jantar" << endl;
        cout << "0. sair" <<endl;
        cin >> codigo;
        switch (codigo){
            case 1:
            cout << "seu cafe da manha é cuscuz com ovos" << endl;
            break;
            case 2:
            cout << " seu almoco e arroz, feijao e carne" << endl;
            break;
            case 3:
            cout << "seu jantar e arroz e creme de galinha" << endl;
            break;
            default:
            cout << "opcao invalida! tente novamente." << endl;
        }
        cout << endl;
    } while (codigo !=0);
    cout << " pedido....finalizado!" << endl;
    return 0;
}
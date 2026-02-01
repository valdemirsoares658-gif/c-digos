#include <iostream>
using namespace std;
int main()
{
    int batatas[3];
    batatas[0] = 7;
    batatas[1] = 8;
    batatas[2] = 6;

    int custo[3] = {20, 30, 5};

    cout << "quantidades de batatas = ";
    cout << batatas[0] + batatas[1] + batatas[2] << endl;
    cout << "o pacote com " << batatas[1] << " batatas custa ";
    cout << custo[1] << " centavos por batatas.\n";

    int total = batatas[1] * custo[1];
    cout << "o segundo pacote custa " << total << " centavos.\n";
    return 0;
}
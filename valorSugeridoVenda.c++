#include <iostream>
using namespace std;
    int main () {
        int valor_Compra;
        //recebe o valor da compra
        cout << "Digite o valor da compra: ";
        cin >> valor_Compra;
        //adiciona 20% ao valor da compra
        valor_Compra = valor_Compra + (valor_Compra * 0.2);
        //exibe o valor da compra com 20% de acrescimo
        cout << "O valor da compra com 20% de acrescimo é: " << valor_Compra << endl;
        return 0;
    }
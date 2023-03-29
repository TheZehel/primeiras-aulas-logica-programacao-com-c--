#include <iostream>
using namespace std;
int main() 
{
    int anoAtual, anoNascimento, idade;
    cout << "Digite o ano atual: ";
    cin >> anoAtual;
    cout << "Digite o ano de nascimento: ";
    cin >> anoNascimento;
    idade = anoAtual - anoNascimento;
    cout << "Vocẽ tem ou Fará: " << idade << endl;
    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;

int main(){

int soma=0, sub=0, mult=0, x=0, op=0;
float di=0, y=0;

cout << "Digite a opcao desejada: \n";
cout << "1. Soma\n";
cout << "2. Subtracao\n";
cout << "3. Multiplicacao\n";
cout << "4. Divisao\n";
cin >> op;

switch (op)
{
case 1:
    
    cout << "Digite um numero: ";
    cin  >> x;
    cout << "Digite um numero: ";
    cin  >> y;

    soma= x + y;

    cout << "Resultado da soma: " << soma << "\n";

    system("pause");
    break;

case 2:

    cout << "Digite um numero: ";
    cin  >> x;
    cout << "Digite um numero: ";
    cin  >> y;

    sub= x - y;

    cout << "Resultado da subtracao: " << sub << "\n";

    system("pause");
    break;

case 3:

    cout << "Digite um numero: ";
    cin  >> x;
    cout << "Digite um numero: ";
    cin  >> y;

    mult= x * y;

    cout << "Resultado da multiplicacao: " << mult << "\n";

    system("pause");
    break;

case 4:

    cout << "Digite um numero: ";
    cin  >> x;
    cout << "Digite um numero: ";
    cin  >> y;

    di= x/y;

    cout << fixed << setprecision (1);
    cout << "Resultado da divisao: " << di << "\n";

    system("pause");
    break;

default:
    break;
}
return (0);
}
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {

    int number1, number2;

    cout << "Insira 2 valores para serem comparados \n";

    cin >> number1 >> number2;

    if( number1 == number2) {
        cout << "1º valor: " << number1 << " É igual ao 2º valor: " << number2 << "\n";
    }

    if( number1 != number2 ) {
        cout << "1º valor: " << number1 << " É diferente do 2º valor: " << number2 << "\n";
    }

    if( number1 > number2 ) {
        cout << "1º valor: " << number1 << " É maior que 2º valor: " << number2 << endl;
    }

    if( number1 < number2 ) {
        cout << "1º valor: " << number1 << " É menor que 2º valor: " << number2 << endl;
    }

    return 0;
}
#include <iostream>

using std::endl;
using std::cout;

int recursivo(int y) {
    if(y == 0) { return 0;}

    return y + recursivo(y - 1);
}


int main() {

    int resultado = recursivo(5);

    cout << resultado << endl;
}
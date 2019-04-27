#include <iostream>
#include <gtest/gtest.h>

using std::cin;
using std::cout;
using std::endl;
using std::string;

using namespace std;

class ArrayList {

    int tamanho = 0;
    int array[100];


    public: void adicionar (int object) {
        array[tamanho] = object;
        tamanho++;
    }

    public: void adicionar (int object, int posicao) {

    }

    public: void remove (int posicao) {

    }

    public: void toString () {
        for ( int i = 0 ; i < tamanho; i++ ) {
            cout << "posição " << i << ": " << array[i] << endl;
        }
    }
};

int main( int argc, char **argv ) {

    ArrayList arraylist;


    arraylist.adicionar(1);
    arraylist.adicionar(3);
    arraylist.adicionar(20);
    arraylist.adicionar(-55);
    arraylist.toString();

     testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
#include <iostream>

using std::cout;
using std::endl;

class ClassTest {

  public: void mensagem () {
      cout << "Olá mundo";
  }
};

int main() {
    ClassTest classTest; 
    classTest.mensagem();

    return 0;
}
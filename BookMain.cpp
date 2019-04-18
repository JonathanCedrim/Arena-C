#include "Book.h"

int main () {
    Book book("Homem mais rico da Babilonia", "Ótimo livro sobre economia");
    Book otherBook("Test", "Test");

    string comentario;
        
    cout << book.getTitle() << " test " << endl;

    book.getResume();

    cout << endl;

    cout << "Informe seu comentario sobre o livro: " << book.getTitle();
    getline(cin, comentario);
    
    cout << endl;
   
    cout << comentario;

    cout << endl;    

    otherBook.toString();
    cout << endl;

    return 0;
}
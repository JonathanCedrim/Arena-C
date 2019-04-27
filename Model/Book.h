#include "Model/GradeBook.h"

#include <iostream>

using std::cout;

class Book : GradeBook {
    
    Book(string titleVar);

    void getTitle(string title) {
        cout << title;
    }
};

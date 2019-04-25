#include <iostream>
#include <string>

#include "GradeBook.cpp"

string title = "Defina o titulo";

GradeBook::GradeBook(string titleVar) {
    getTitle();
}   

string GradeBook::getTitle() {
    return title;
}

void GradeBook::setTitle(string titleVar) {
    title = titleVar;
}
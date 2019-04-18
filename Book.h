#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

using std::string;
using std::getline;

class Book {
    private: string title;
    private: string resume;    

    public:
    Book(string varTitle, string varResume) {
        setTitle(varTitle);
        setResume(varResume);
    }

    public: string getTitle () {
        return title;
    }

    public: void setTitle (string varTitle) {
        title = varTitle;
    }

    public: string getResume () {
        return resume;
    }

    public: void setResume (string varResume) {
        resume = varResume;
    }

    public: void toString () {
        cout << "Title: " << getTitle() <<  "Resume: " << getResume();
    }
};
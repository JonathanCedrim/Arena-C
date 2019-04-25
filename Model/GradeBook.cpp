#include<string>
using std::string;

class GradeBook {
    public:
        GradeBook( string );
        string getTitle();
        virtual void setTitle( string );
};
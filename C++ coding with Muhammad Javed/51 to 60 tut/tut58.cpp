#include <iostream>
#include <string>
using namespace std;

class CodeWithJaved
{
protected:
    string title;
    float rating;

public:
    CodeWithJaved(string s, float r)
    {
        title = s;
        rating = r;
    }

    virtual   void display()= 0; // Do nothing -->pure virtual function
    
};

class CWJvedio : public CodeWithJaved
{
protected:
    float vedioLength;

public:
    CWJvedio(string s, float r, float vlen) : CodeWithJaved(s, r)
    {
        vedioLength = vlen;
    }

    void display()
    {
        cout << "This is a amazing vedio with title " << title << "." << endl;
        cout << "Rating of this vedio is  " << rating << "  out of 5 stars." << endl;
        cout << "Length og this vedio is  " << vedioLength << "  minutes" << endl;
    }
};

class CWJwords : public CodeWithJaved
{
protected:
    int words;

public:
    CWJwords(string s, float r, int w) : CodeWithJaved(s, r)
    {
        words = w;
    }

    void display()
    {
        cout << "This is a amazing words tutorial with title " << title << "." << endl;
        cout << "Rating of this Text tutorial is  " << rating << "  out of 5 stars." << endl;
        cout << "Number of words in this Text tutorial is " << words << "  minutes" << endl;
    }
};

int main()
{

    string title;
    float rating, vlen;
    int words;

    // Code with Muhammad Javed vedio

    title = "Django tutorial";
    rating = 3.9;
    vlen = 25.12;
    CWJvedio djvedio(title, rating, vlen);
    djvedio.display();

    // Code with Muhammad Javed Text

    title = "Django  Text tutorial";
    rating = 3.5;
    words = 2560;
    CWJwords djtext(title, rating, words);
    djtext.display();

    CodeWithJaved *tut[2];
    tut[0] = &djvedio;
    tut[1] = &djtext;

    tut[0]->display();
    tut[0]->display();

    return 0;
}
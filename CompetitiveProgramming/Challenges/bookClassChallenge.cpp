#include <bits/stdc++.h>

//CREDIT: AARON WANG
using namespace std;
class Book{
    int numberOfPages;
    string title;
    vector<pair<string, int>> tableOfContents;

    public:
        Book(int pages, string remysBook, vector<pair<string, int>> table)
            : numberOfPages(pages),
            title(remysBook),
            tableOfContents(table){}

        ~Book()
        {

        }
};

int main(){
    string book = "book";
    string book2 = "book2";
    string book3 = "book3";
    Book b(4, book, {{"Chapter 1", 5}, {"Chapter 2", 6}});
    Book b2(4, book2, {{"Chapter 1", 5}, {"Chapter 2", 6}});
    Book b3(4, book3, {{"Chapter 1", 5}, {"Chapter 2", 6}});
}
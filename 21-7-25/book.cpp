#include<bits/stdc++.h>
using namespace std;
class Book {
    private:
        string name;
        int BookId;
        int price;
        string authorName;
    public:
        Book(){
            cout<<" class initiated"<<endl;
        }

        Book( int BookId, int price, string name, string authorName){
            this->BookId = BookId;
            this->price =price;
            this->name = name;
            this->authorName = authorName;
        }

        void display(){
            cout<<"the Book with ISBN Code: "<< this->BookId << " " << this->name << " has a price " << this->price << " written by"<< this->authorName << endl ;
        }
};

int main(){
    Book a = Book();
    Book b= Book(121371,12000,"beyond age"," arav conray");
    a.display();
    b.display();

}
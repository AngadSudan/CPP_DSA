#include<bits/stdc++.h>
using namespace std;
class Product {
    private:
        string name;
        int productId;
        int price;

    public:
        Product(){
            cout<<" class initiated"<<endl;
        }

        Product( int productId, int price, string name){
            this->productId = productId;
            this->price =price;
            this->name = name;
        }

        void display(){
            cout<<"the product with productID: "<< this->productId << " " << this->name << " has a price " << this->price<<endl;
        }
};

int main(){
    Product a = Product();
    Product b= Product(12,12000,"product");
    a.display();
    b.display();

}
#include<iostream>
#include<string>

using namespace std;

struct Product {
    string name;
    double price;
    int quantity;
};

double valueTotal(Product* product, int qtd);

int main(){
    int qtd = 2;
    Product* products = new Product[qtd];

    products[0].name = "P1";
    products[0].price = 2.0;
    products[0].quantity = 5;

    products[1].name = "P2";
    products[1].price = 5.0 ;
    products[1].quantity = 1;

    double total
     = valueTotal(products, qtd);

    cout << "The value total is " << total << endl;

    delete[] products;

    return 0;
}

double valueTotal(Product* product, int qtd) {
    double total = 0.0;

    for(int i = 0; i < qtd; i++) {
        total += product[i].price * product[i].quantity;
    }

    return total;
}

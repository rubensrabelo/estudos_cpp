#include<iostream>
#include<string>

using namespace std;

class Car {
    public:
        Car(string  brand, string model, int year) {
            this-> brand = brand;
            this-> model = model;
            this-> year = year;
        }

        string getBrand() {
            return this->brand;
        }

        void setBrand(string brand) {
            this->brand = brand;
        }

        string getModel() {
            return this->model;
        }

        void setModel(string model) {
            this->model = model;
        }

        int getYear() {
            return this->year;
        }

        void setYear(int year) {
            this->year = year;
        }

        friend ostream& operator<<(ostream& input, const Car& car) {
            input << "Car(Brand=" << car.brand << ", Model=" << car.model << ", Year=" << car.year << ")" << endl;
            return input;
        }
    private:
        string brand;
        string model;
        int year;
};

int main(){
    // Criando um objeto Car
    Car meuCarro("Toyota", "Corolla", 2022);

    // Exibindo informações do carro usando o operador de inserção (<<)
    cout << "Informacoes do carro:" << endl;
    cout << meuCarro << endl;

    // Alterando o modelo e o ano do carro
    meuCarro.setModel("Camry");
    meuCarro.setYear(2023);

    // Exibindo as informações atualizadas
    cout << "Informaco,es atualizadas do carro:" << endl;
    cout << meuCarro << endl;

    return 0;
}
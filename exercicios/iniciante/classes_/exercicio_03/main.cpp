#include<iostream>


using namespace std;

class Circulo{
    public:
        static const double PI;
        Circulo(int raio){
            this->raio = raio;
        }

        double area(){
            return Circulo::PI * raio * raio;
        }
    private:
        int raio;
};

const double Circulo::PI = 3.14;

int main(){
    Circulo circulo(3);

    cout << "A area do circulo eh " << circulo.area() << endl;
    
    return 0;
}
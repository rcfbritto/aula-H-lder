#include <iostream>
#include <vector>

using namespace std;

class Animal{
    public:
        virtual void som(){
            cout << "Som generico de um animal" << endl;

        }
};
class Cachorro : public Animal{
    public:
        void som() override{
            cout << "Latido de cachorro" << endl;
        }
};
class Gato : public Animal{
    public:
        void som() override{
            cout << "Miado de gato" << endl;
        }
};

int main(){
    Animal* animal;

    Cachorro cachorro;
    Gato gato;

    animal = &cachorro;
    animal -> som(); //chama o método som() da classe Cachorro

    animal = &gato;
    animal -> som(); //chama o método som() da classe Gato

    return 0;
}

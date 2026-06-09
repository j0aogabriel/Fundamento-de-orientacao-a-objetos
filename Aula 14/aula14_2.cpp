#include <iostream>

class Animal {
public:
    void respirar() { std::cout << "Respiro como um animal."
        << std::endl; }
};

class Reptil {
public:
    void rastejar() { std::cout << "Rastejo como um reptil."
        << std::endl; }
};

class Cobra : public Animal, public Reptil {
public:
    void respirar() { std::cout << "Respiro como uma cobra."
        << std::endl; }
};

int main() {
    Cobra cobra;
    cobra.respirar(); // Chama a função respirar() da classe Cobra
    cobra.Animal::respirar(); // Chama a função respirar() da classe Animal
    cobra.rastejar(); // Chama a função rastejar() da classe Reptil
    return 0;
}
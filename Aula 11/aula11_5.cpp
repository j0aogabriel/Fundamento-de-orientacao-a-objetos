#include <iostream>
using namespace std;

// Interface nao existe esta palavra em c++
class Animal { //classe abstrata = interface
public:
    virtual void fazerSom() = 0;
};

class Cachorro : public Animal {
public:
    void fazerSom() override {
        cout << "Au au!" << endl;
    }
};

class Gato : public Animal {
public:
    void fazerSom() override {
        cout << "Miau!" << endl;
    }
};

int main() {
    Cachorro c;
    Gato g;

    c.fazerSom();
    g.fazerSom();

    return 0;
}


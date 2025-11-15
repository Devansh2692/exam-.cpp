#include <iostream>
using namespace std;

// Abstract class Animal
class Animal {
public:
    // Pure virtual functions
    virtual void sound() = 0;
    virtual void move() = 0;

    // Virtual destructor (good practice)
    virtual ~Animal() {}
};

// Derived class Dog
class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog: Woof! Woof!" << endl;
    }

    void move() override {
        cout << "Dog runs on four legs." << endl;
    }
};

// Derived class Bird
class Bird : public Animal {
public:
    void sound() override {
        cout << "Bird: Chirp! Chirp!" << endl;
    }

    void move() override {
        cout << "Bird flies in the sky." << endl;
    }
};

int main() {
    // Create objects of Dog and Bird
    Dog d;
    Bird b;

    // Array of Animal pointers
    Animal* animals[2];
    animals[0] = &d;
    animals[1] = &b;

    // Demonstrate polymorphism
    cout << "Demonstrating Polymorphism:\n" << endl;

    for (int i = 0; i < 2; i++) {
        animals[i]->sound();  // Calls Dog/Bird version
        animals[i]->move();   // Calls Dog/Bird version
        cout << endl;
    }

    return 0;
}

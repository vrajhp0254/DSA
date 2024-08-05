#include <iostream>
#include <string>

// Encapsulation: Data members are private and accessed through public member functions
class Animal {
public:
    // Constructor
    Animal(const std::string& name) : name(name) {
        std::cout << "Animal constructor called for " << name << std::endl;
    }

    // Copy constructor
    Animal(const Animal& other) : name(other.name) {
        std::cout << "Animal copy constructor called for " << name << std::endl;
    }

    // Assignment operator
    Animal& operator=(const Animal& other) {
        if (this != &other) {
            name = other.name;
            std::cout << "Animal assignment operator called for " << name << std::endl;
        }
        return *this;
    }

    // Encapsulation: Getter for name
    const std::string& getName() const {
        return name;
    }

    // Polymorphism: Virtual function
    virtual void makeSound() const {
        std::cout << "Animal sound" << std::endl;
    }

    // Destructor
    virtual ~Animal() {
        std::cout << "Animal destructor called for " << name << std::endl;
    }

    // Friend function
    friend void showFriendInfo(const Animal& animal);

    void displayInfo() const {
        std::cout << "Name: " << name << std::endl;
    }

private:
    std::string name;
};

// Friend function definition
void showFriendInfo(const Animal& animal) {
    std::cout << "Friend function: Name is " << animal.name << std::endl;
}

// Inheritance: Derived class
class Dog : public Animal {
public:
    Dog(const std::string& name) : Animal(name) {
        std::cout << "Dog constructor called for " << name << std::endl;
    }

    // Polymorphism: Override function
    void makeSound() const override {
        std::cout << "Woof! Woof!" << std::endl;
    }

    // Destructor
    ~Dog() {
        std::cout << "Dog destructor called for " << getName() << std::endl;
    }
};

// Inheritance: Derived class
class Cat : public Animal {
public:
    Cat(const std::string& name) : Animal(name) {
        std::cout << "Cat constructor called for " << name << std::endl;
    }

    // Polymorphism: Override function
    void makeSound() const override {
        std::cout << "Meow! Meow!" << std::endl;
    }

    // Destructor
    ~Cat() {
        std::cout << "Cat destructor called for " << getName() << std::endl;
    }
};

int main() {
    // Abstraction: Using base class pointers to demonstrate polymorphism
    Animal* animal1 = new Dog("Buddy");
    Animal* animal2 = new Cat("Whiskers");

    animal1->displayInfo(); // Encapsulation: Accessing name through a member function
    animal1->makeSound();

    animal2->displayInfo(); // Encapsulation: Accessing name through a member function
    animal2->makeSound();

    showFriendInfo(*animal1); // Using the friend function

    // Deallocate memory
    delete animal1;
    delete animal2;

    return 0;
}

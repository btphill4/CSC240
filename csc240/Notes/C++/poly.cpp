#include<iostream>
#include<string>

using namespace std;

class Animal{
 protrect: 
 string n;

 public:
    void speak() { cout << n << ": SPEAKING!" << endl; }
    void move() { cout << n << ": MOVING!" << endl; }
    void eat() { cout << n << ": Im Hungry" << endl; }

};

class Dog : public Animal {
 public:
  Dog(stromg s = "Dog") : Animal(s) {}
  void speak() { cout << n << ": woof!" << endl; }
    void move() { cout << n << ": crawling!" << endl; }
    void fetch() { cout << n << ": throw ball" << endl; }
};


int main() {

Animal a: 
Animal * aptr;
 d = new Dog("dog");
Dog & dpgRef = d;
Dog * dptr;
Cat c("Whiskers");
  Cat *cptr;
  Cat &catRef = c;
 
  Animal *danimal, *canimal;

 cout << endl << "Animal Object: " << endl;
 a.speak();
 a.move();
 a.eat();

cout << endl << "Animal pointer to an Animal object: " << endl;
 aptr = new Animal("pointer animal");
 aptr.speak();
 aptr.move();
 aptr.eat();

cout << endl << "Dog Class: " << endl;
 d.speak();
 d.move();
 d.eat();
 d.fetch();

cout << endl << "Dog pointer: " << endl;
 dptr = new Dog("pugsly");
 dptr.speak();
 dptr.move();
 dptr.eat();
 dptr.fetch();

cout << endl << "Dog reference: " << endl;
 d = new Dog("dog");
 d.speak();
 d.move();
 d.eat();
 d.fetch();

 

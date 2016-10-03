#include<iostream>
#include<memory>
using namespace std;

class Dog{
    string name;
    public:
    Dog(string name){cout<<"Dog is "<<name<<endl;}
    Dog(){cout<<"nameless dog created"<<endl;}
    ~Dog(){cout<<"Dog is destroyed"<<endl;}
    void bark(){cout<<"bhoow"<<endl;}
};

void foo(){
    shared_ptr<Dog> p(new Dog("Brutus"));   //count 1

    {shared_ptr<Dog> p2 = p;        //count 2
    p2->bark();
    cout<<p.use_count();}
    //count 1
    p->bark();   //or (*p).bark();   //count 0
}

int main(){

foo();


//better way; faster and safer

Dog* d = new Dog("Tank");
shared_ptr<Dog> p1 = make_shared<Dog>("Tank");
shared_ptr<Dog> p2 = make_shared<Dog>("Gunner");
p1 = p2;    //tank is deleted
p1 = nullptr;   //tank is deleted
p1.reset(); //tank is deleted
}

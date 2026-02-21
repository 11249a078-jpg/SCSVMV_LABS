#include<iostream>
using namespace std;
class laptop{
    public:
    string brand;
    string processor;
    int ram;
    void display(){
        cout<<"Brand:"<<brand
        <<", processor:"<<processor
        <<", Ram:"<<ram<<"GB"<<endl;

    }
};
int main(){
    laptop l1,l2;
    l1.brand="dell";
    l1.processor="intel i5";
    l1.ram=16;
    l2.brand="hp";
    l2.processor="AMD RYZEN 5";
    l2.ram=16;
    l1.display();
    l2.display();
    return 0;
}


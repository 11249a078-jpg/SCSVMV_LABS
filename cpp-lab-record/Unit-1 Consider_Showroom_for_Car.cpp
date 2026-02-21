#include<iostream>
using namespace std;
class car{
    public:
    string model;
    string company;
    float price;
    void display(){
    cout<<"company "<<company<<endl;
    cout<<" model "<<model<<endl;
    cout<<" price "<<price<<endl;
}
};
int main(){
    car c1,c2,c3;
    c1.company="toyota";
    c1.model="innova";
    c1.price=2000000;
    c2.company="honda";
    c2.model="city";
    c2.price=8000000;
    c3.company="hyundai";
    c3.model="i20";
    c3.price=800000;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}




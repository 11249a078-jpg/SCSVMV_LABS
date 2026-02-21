#include<iostream>
using namespace std;
class bank{
    public:
    int accno;
    string name;
    float balance;
    void display(){
    cout<<"accno "<<accno<<endl;
    cout<<"name "<<name<<endl;
    cout<<"balance "<<balance<<endl;
}
};
int main(){
    bank b1,b2;
    b1.accno=1001;
    b1.name="ramesh";
    b1.balance=25000.50;
    b2.accno=1002;
    b2.name="sita";
    b2.balance=40000.75;
    b1.display();
    b2.display();
    return 0;
}




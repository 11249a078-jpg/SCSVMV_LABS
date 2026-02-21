#include<iostream>
using namespace std;
class book{
    public:
    string title;
    string author;
    float price;
    void display(){
    cout<<"title "<<title<<endl;
    cout<<"author "<<author<<endl;
    cout<<"price "<<price<<endl;
  }
};
int main(){
    book b1,b2;
    b1.title="c++ programming";
    b1.author="bjame stroustrup";
    b1.price=200;
    b2.title="data structures";
    b2.author="mark allemn weiss";
    b2.price=800;
    b1.display();
    b2.display();
    return 0;
}




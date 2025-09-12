#include <iostream>
using namespace std;

struct Person{
    string name;
    int age;
    char Gender;
};

int main(){
    Person p ;
    cout<<"Enter Your Name: ";
    getline(cin,p.name);
    // cin.ignore();
    cout<<"Enter Age: ";
    cin>>p.age;
    cout<<"Enter Gender: ";
    cin>>p.Gender;

    cout<<"Name: "<<p.name;
    cout<<"\nAge: "<<p.age;
    cout<<"\nGender: "<<p.Gender;
}

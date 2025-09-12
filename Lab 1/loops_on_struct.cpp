#include <iostream>
using namespace std;

struct Person{
    string name;
    int age;
    char Gender;
};

int main(){
    Person p[5] ;
    for(int i=0 ; i<5; i++ ){

        cout<<"Enter Your Name: ";
        cin.ignore();
        getline(cin,p[i].name);
        cout<<"Enter Age: ";
        cin>>p[i].age;
        cout<<"Enter Gender: ";
        cin>>p[i].Gender;
    }

    for(int i=0 ; i<5 ; i++){
        cout<<"Name: "<<p[i].name;
        cout<<"\nAge: "<<p[i].age;
        cout<<"\nGender: "<<p[i].Gender;
    }
}
#include <iostream>
#include <string>
using namespace std;

struct hospital {
    int ID;
    string name;
    int Age;
};

void add_details(hospital p[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter ID: ";
        cin >> p[i].ID;
        cin.ignore(); 
        cout << "Enter Name: ";
        getline(cin, p[i].name);
        cout << "Enter Age: ";
        cin >> p[i].Age;
    }
}
void display(hospital p[], int size){
       for (int i = 0; i < size; i++) {
        cout << "\nID: " << p[i].ID;
        cout << "\nName: " << p[i].name;
        cout << "\nAge: " << p[i].Age << endl;
    }
}

int main() {
    const int size = 5;
    hospital p[size];

    
    add_details(p, size);
    display(p ,size);
    
 

    return 0;
}

// 2.	Implement a structure Rectangle with attributes of length and width, Prompt to take the values form the users and calculate and print the area.
#include <iostream>
using namespace std;
struct Rectangle{
    float length;
    float width;

};

int main(){
    Rectangle R1;
    cout<<"Enter Length: ";
    cin>>R1.length;
    cout<<"Enter Width: ";
    cin>>R1.width;
    float area;
    area = R1.length*R1.width;
    cout<<"Area of Rectangle is: "<<area;
    
}
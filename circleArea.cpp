//
// Created by djb on 10/28/22.
//
#include <iostream>
using namespace std;
const float PI = 3.14;

float areaCircle(float radius){
    float area = radius * radius * PI;
    cout<< area <<endl;
}

float circmfrenceCircle(float radius){
   float circmufrence = 2 * radius * PI;
    cout<< circmufrence <<endl;
}

float cubeVolume(){

}

void ascending(){

}

int main(){
    float  radius;
    cout<<"The program to caculate the area and circmufrence of a circle: \n";
    cout<<"Enter the radius of a circle: ";
    cin>>radius;
    circmfrenceCircle(radius);
    areaCircle(radius);


}
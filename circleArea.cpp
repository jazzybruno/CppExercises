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

float cubeVolume(float side){
float volume = side * side * side;
cout<<"The volume of a cube with the side " << side << " is " << volume <<endl;
}

void ascending(int a , int b , int c){
int max , smallest , middle , largest;
max = a;
if(max < b){
    max = b;
    if(max < c){

    }else{

    }
}else{
    cout<<"Number " << b << " is the smallest";
    if(max < c){

    }else{

    }
}
}

int main(){
    float  radius , side ;
    cout<<"The program to caculate the area and circmufrence of a circle: \n";
    cout<<"Enter the radius of a circle: ";
    cin>>radius;
    circmfrenceCircle(radius);
    areaCircle(radius);

    cout<<"Enter the side of the cube: ";
    cin>>side;
    cubeVolume(side);

}
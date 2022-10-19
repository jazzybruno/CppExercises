//
// Created by djb on 10/19/22.
//

#include <iostream>
using namespace std;

float cubicRadius(float radius){
    float cubic = radius * radius * radius;
    return cubic;
}

float sphereArea(float cubic){
  const  float  PI = 3.14;
  float area = 4/3 * PI * cubic;
    return area;
}

int volumeCalculator(){
    float radius;
    cout<<"Enter the radius of the sphere: ";
    cin>>radius;

    float cubic = cubicRadius(radius);
    float area = sphereArea(cubic);

    cout<<"The Volume is: " <<area;
}
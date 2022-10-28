//
// Created by djb on 10/25/22.
//
#include <iostream>
using namespace std;

float areaCalculator(float length , float width){
    float area = length * width;
    return area;
}

float perimeter(float length , float width){
    float perimeter = (length + width) * 2;
    return perimeter;
}

int rectangleCalcultor(){
    float length , width , area , per;
    cout<<"Enter the length of your rectangle: ";
    cin>>length;

    cout<<"Enter the width of the rectangle: ";
    cin>>width;

    area = areaCalculator(length , width);
    per = perimeter(length , width);

    cout<<"The perimeter of the rectangle is: " <<per<<endl;
    cout<<"The area of the rectangle is: " <<area;

}
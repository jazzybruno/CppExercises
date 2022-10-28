//
// Created by djb on 10/20/22.
//
#include <iostream>
#include <math.h>
using namespace std;

float deltaClaculator(float a , float b , float c){
    float squareB = b * b;
    float other = 4*(a*c);
    float delta = squareB - other;
    return delta;
}

int rootsCalculator(){
    float a , b , c , delta;
    cout<<"Enter the value of a";
    cin>>a;
    cout<<"Enter the value of b";
    cin>>b;
    cout<<"Enter the value of c";
    cin>>c;

   delta = deltaClaculator(a , b , c);

   if(delta > 0){
       cout<<"There are no roots as the delta is negative";
       exit(1);
   }else if(delta == 0){
       float beforeRoot = -b + sqrt(delta);
       float root = beforeRoot / (2 * a);
       cout<<"The root we have which is one is :  " <<root;
       exit(1);
   }else{
       float beforeFirstroot = -b + sqrt(delta);
       float firstRoot = beforeFirstroot / (2 * a);

       float beforeSecondroot = -b - sqrt(delta);
       float secondRoot = beforeFirstroot / (2 * a);
       cout<<"The first root is :  " <<firstRoot;
       cout<<"The second root is :  " <<secondRoot;
   }
}
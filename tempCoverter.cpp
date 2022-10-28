//
// Created by djb on 10/28/22.
//
#include <iostream>
using namespace  std;

float celsiusFahrenheit(float celsius){
    float product = celsius * 9/5;
    float Fahrenheit = product + 32;
    return  Fahrenheit;
}

int main(){
    cout<<"This is a program to convert celsius to Fahrenheit!!!" <<endl;
    float celsius;
    cout<<"Enter the temperature in celsius: ";
    cin>>celsius;
    float fahrenheit = celsiusFahrenheit(celsius);
    cout<<celsius << " degrees celsius is equal to " <<fahrenheit << " degrees fahrenheit!!";
}
//
// Created by djb on 10/19/22.
//
#include <iostream>
using namespace std;

int sumCalculator(int num1 , int num2){
    return num1 + num2;
}

int sumDisplay(){
    int number1 , number2 , sum;
    cout<<"Enter the first number: ";
    cin>>number1;

    cout<<"Enter the second number: ";
    cin>>number2;

    sum = sumCalculator(number1 , number2);
    cout<<"The sum of " << number1 << " and " <<number2 << " is : " << sum;
}
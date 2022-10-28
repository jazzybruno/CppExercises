//
// Created by djb on 10/19/22.
//
#include <iostream>
using namespace std;

 void swap(int num1 , int num2){
     int* ptr1 = &num1;
     int* ptr2 = &num2;

     int temp;
     temp = *ptr1;
     *ptr1 = num2;
     *ptr2 = temp;

 }

 int swapper(){
     int num1 , num2;
     cout<<"Enter the first number: ";
     cin>>num1;

     cout<<"Enter the second number: ";
     cin>>num2;

     cout<<"Input 1st number: " << num1 <<endl;
     cout<<"Input 2nd number: " << num2 <<endl;

     swap(num1 , num2);

     cout<<"After swapping the 1st number is : " <<  num1 <<endl;
     cout<<"After swapping the 2nd number is : "  <<  num2 <<endl;
 }
//
// Created by djb on 11/10/22.
//

#include <iostream>
using namespace std;

int ageConverter(int age){
int oneYear = 31536000;
int years = age / oneYear;
    return years;
}

int ageConverting(){
    int ageSeconds , ageYears;
    cout<<"Welcome to the age converter" <<endl;
    cout<<"Enter your age in seconds: ";
    cin>>ageSeconds;
    ageYears = ageConverter(ageSeconds);

    cout<<"This is your age: " << ageYears;
}
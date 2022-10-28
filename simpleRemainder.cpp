//
// Created by djb on 10/28/22.
//
#include <iostream>
#include <ctime>

using namespace std;

int quotient(int num1 , int num2){
    int value = num1 / num2;
    int remainder = num1 % num2;

    cout<<"The quotient between " << num1 << " and " << num2 << " is " << value <<endl;
    cout<<"The remainder between " << num1 << " and " << num2 << " is " << remainder <<endl;
}

 string checker(float  number){
    if(number == 0){
        return "Zero";
    }else if(number > 0){
        return  "Positive";
    }else{
        return "Negative";
    }
}

string displayDate(){
    time_t now  = time(0);
    string timeNow = ctime(&now);
    cout << "The local date and time is: " << timeNow << endl;

}

void nameDisplay(string secondName , string firstName ){
    cout<<"The name in reverse is: " << secondName << " " << firstName <<endl;
}

int main(){
    cout<<"This will include 2 functions !!!!!" <<endl;
    cout<<""<<endl;
    quotient(1 , 2);
    float  num;
    cout<<"Enter the number you want to test: ";
    cin>>num;
    string isState = checker(num);
    cout<<"The number " << num << " you entered is " << isState<<endl;


    string firstName , secondName;
    cout<<"Input your First Name: ";
    cin>>firstName;

    cout<<"Input your Second Name: ";
    cin>>secondName;


    nameDisplay(secondName , firstName);

    displayDate();
}
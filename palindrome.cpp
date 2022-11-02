//
// Created by djb on 11/1/22.
//

#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

string wordReverser(string word){
    int length = word.length();
            char wordArray[length + 1];
            strcpy(wordArray , word.c_str());
    for (int i = 0; i < length; ++i) {
        int num = length - i;
        if(num - i == 0){
            break;
        }else{
            char temp;
            temp = wordArray[i];
            wordArray[i] =  wordArray[length  - i];
            wordArray[length - i] = temp;
        }
        cout<<"The reversed character is now: " << wordArray[i];
    }
}

int main(){
    string word;
    cout<<"Welcome to the palindrome checker program!!! \n";
    cout<<"Enter the word tou want to check: ";
    cin>>word;

    //converting the word to an array;
    wordReverser(word);

}
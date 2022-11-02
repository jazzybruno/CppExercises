//
// Created by djb on 11/1/22.
//

#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

void wordReverser(string word){
    int length = word.length();
            char wordArray[length + 1];
            strcpy(wordArray , word.c_str());
    for (int i = 0; i < length; ++i) {
        int real = length - 1;
        int num = real - i;
        if(length % 2 == 0){
            if(num - i == -1){
                break;
            }else {
                char temp;
                temp = wordArray[i];
                wordArray[i] = wordArray[num];
                wordArray[num] = temp;
            }
        }else{
            if(num - i == 0){
                break;
            }else {
                char temp;
                temp = wordArray[i];
                wordArray[i] = wordArray[num];
                wordArray[num] = temp;
            }
        }

    }

    string reversed = "";
    for (int i = 0; i < length; ++i) {
        reversed = reversed + wordArray[i];
    }

    cout<<reversed <<endl;

    if(reversed == word){
        cout<<"The given word is a plindrome!!";
    }else{
        cout<<"The given word is not a palindrome";
    }


}

int main(){

    string word;
    cout<<"Welcome to the palindrome checker program!!! \n";
    cout<<"Enter the word you want to check: ";
    cin>>word;

    //converting the word to an array;
    wordReverser(word);

}
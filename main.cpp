// Copyright (c) 2020 Ahmad El-khawaldeh All rights reserved.
//
// Created by: Ahmad El-khawaldeh
// Created on: DEC 2020
// This program gives you a percentage of your mark

#include<iostream>
using namespace std;

// Function that returns Pecentage
int percentageMark(string level){
    int mark = 0;
    if (level == "4+"){
        mark = (95 + 100) / 2;
    }
    else if (level == "4"){
        mark = (87 + 94) / 2;
    }
    else if (level == "4-"){
        mark = (80 + 86) / 2;
    }
    else if (level == "3+"){
        mark = (77 + 79) / 2;
    }
    else if (level == "3"){
        mark = (73 + 76) / 2;
    }
    else if (level == "3-"){
        mark = (70 + 72) / 2;
    }
    else if (level == "2+"){
        mark = (67 + 69) / 2;
    }
    else if (level == "2"){
        mark = (63 + 66) / 2;
    }
    else if (level == "2-"){
        mark = (60 + 62) / 2;
    }
    else if (level == "1+"){
        mark = (57 + 59) / 2;
    }
    else if (level == "1"){
        mark = (53 + 56) / 2;
    }
    else if (level == "1-"){
        mark = (50 + 52) / 2;
    }
    else if (level == "R"){
        mark = (0 + 49) / 2;
    }
    else {
        mark = -1;
    }
    return mark;
}

int main(void){
    string level;
    cout << "Enter the Level to Grade : " << endl;
    cin >> level;
    // Function Call
    int mark = percentageMark(level);
    if(mark == -1){
        cout << "You have entered an invalid Level" << endl;
    }
    else{
        cout << " your Percentage is : " << mark << endl;
    }
}
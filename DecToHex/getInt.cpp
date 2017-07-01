/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   getInt.cpp
 * Author: mark
 * 
 * Created on June 30, 2017, 9:54 PM
 */

#include <c++/6/iostream>

#include "getInt.h"

getInt::getInt() {
    x = 0;
    s = "";
}

void getInt::fetchInt(){
    std::cin >> s;
    try{
        x = stoi(s, nullptr, 10);    //convert it to an int
    }
    catch(const std::exception& e){
        x = 0;
    }
}

int getInt::returnInt(){
    return x;
}

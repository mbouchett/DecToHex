/* 
 * File:   getInt.cpp
 * Author: mark
 * 
 * Created on June 30, 2017, 9:54 PM
 */

#include <c++/6/iostream>
#include "getInt.h"

getInt::getInt() {
    x = 0;      // integer to return
    s = "";     // container for string input
}

/**
 * gets input from the console
 * converts it to integer or zero if non-integer input
 */
void getInt::fetchInt(){
    std::cin >> s;  //get user input
    
    // attempt conversion or save zero if conversion fails
    try{
        x = stoi(s, nullptr, 10);    //convert it to an int
    }
    catch(const std::exception& e){
        x = 0;
    }
}

/**
 * return the integer value of the object
 * @return 
 */
int getInt::returnInt(){
    return x;
}

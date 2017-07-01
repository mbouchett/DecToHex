/* 
 * File:   main.cpp
 * Author: Mark Bouchett
 *
 * Created on June 30, 2017, 9:26 PM
 * This program uses recursion to convert Decimal to Hexadecimal
 */

#include <iostream>  //console Input/Output
#include <string>    //string handler
#include "getInt.h"  // fetches an integer


using namespace std; //declares the name space
// declare function prototypes
string decToHex(int);

int main() {

    getInt x;
    int z = 0;
    
    cout << "Decimal to Hexadecimal convertor\n\n";
    while(z >= 0){
        cout << "Enter an integer for conversion or -1 to quit: ";
       x.fetchInt();
       z = x.returnInt();
        
       cout << z << endl;
    }
    return 0;
}

string decToHex(int){
    
}
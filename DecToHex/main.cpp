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
#include <c++/6/iostream>


using namespace std; //declares the name space
// declare function prototypes
void decToHex(int, string &);

int main() {

    getInt x;
    int z = 0;
    string hex;
    
    cout << "Decimal to Hexadecimal convertor";
    while(z >= 0){
        cout << "\n\nEnter an integer for conversion or -1 to quit: ";
        hex = "";
        x.fetchInt();
        z = x.returnInt();
        decToHex(z, hex);
        if(z >=0 ){
            cout << z << endl;
            cout << hex;
        }else{
            cout << "Goodbye!";
        }
    }
    return 0;
}

void decToHex(int n, string& hex){
    int dhex = 0;
    if(!n){
        return;
    }else{
        dhex = n % 16;
        decToHex(n/16 , hex);
    }
    if(dhex > 9)
        hex += 'A'+(dhex-10);
    else
        hex += to_string(dhex);
}
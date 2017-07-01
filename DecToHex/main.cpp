/* 
 * File:   main.cpp
 * Author: Mark Bouchett
 *
 * Created on June 30, 2017, 9:26 PM
 * This program uses recursion to convert Decimal to Hexadecimal
 * decToHex() adapted from Ananthan's Blog(gitHub)
 * http://eionix.blogspot.com/2014/12/decimal-to-hex-conversion-using.html
 */

#include <iostream>  //console Input/Output
#include <string>    //string handler
#include "getInt.h"  // fetches an integer
#include <c++/6/iostream>


using namespace std; //declares the name space
// declare function prototypes
void decToHex(int, string &);

int main() {

    getInt x;   // object ensures an integer
    int z = 0;  // container to save returned integer
    string hex; // holds the hex conversion
    
    //intro
    cout << "Decimal to Hexadecimal convertor";
    
    // main program loop
    while(z >= 0){
        cout << "\n\nEnter an integer for conversion or -1 to quit: ";
        hex = "";           //clear the hex container
        x.fetchInt();       //get an integer 
        z = x.returnInt();  //save the integer to z
        decToHex(z, hex);   //invoke the recursive dec to hex function
        
        if(z >=0 ){         //output unless -1 entered
            cout << z << endl;
            cout << hex;
        }else{              //print output message
            cout << "Goodbye!";
        }
    }
    
    return 0;
}

/**
 * converts decimals to hexadecimal using recursion
 * @param n     //decimal to be converted
 * @param hex   //reference to hex string
 */
void decToHex(int n, string& hex){
    
    int dhex = 0;               
    
    if(!n){
        return;                 //Base case
    }else{                      //recursive case
        dhex = n % 16;          //separate the remainder
        decToHex(n/16 , hex);   //recurse minus the remainder
    }
    if(dhex > 9)                //store the over 9 digits A,B,C,D,E & F
        hex += 'A'+(dhex-10);   //Ananthan's clever bit to get the over 9 digits
    else                        //store the under 10 digits
        hex += to_string(dhex);
}
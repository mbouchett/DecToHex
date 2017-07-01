/* 
 * File:   getInt.h
 * Author: mark
 *
 * Created on June 30, 2017, 9:54 PM
 * gets user input and returns integer or 0 for non-int input
 */

#ifndef GETINT_H
#define GETINT_H
#include <string>
#include<iostream>

class getInt {
public:
    getInt();
    void fetchInt();
    int returnInt();

private:
    int x;
    std::string s;
};

#endif /* GETINT_H */


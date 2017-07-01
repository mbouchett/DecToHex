/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   getInt.h
 * Author: mark
 *
 * Created on June 30, 2017, 9:54 PM
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


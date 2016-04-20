/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MyStack.h
 * Author: teddy
 *
 * Created on April 19, 2016, 2:41 PM
 */

#ifndef MYSTACK_H
#define MYSTACK_H

#include <vector>

class MyStack {
public:
    MyStack(void);
    virtual ~MyStack(void);
    
    void push(int);
    int pop();
    //std::string toString();
private:
    std::vector<int> _v;

};

#endif /* MYSTACK_H */


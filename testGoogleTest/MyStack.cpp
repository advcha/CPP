/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MyStack.cpp
 * Author: teddy
 * 
 * Created on April 19, 2016, 2:41 PM
 */
#include "MyStack.h"
#include <sstream>

MyStack::MyStack(void) {
    
}

MyStack::~MyStack(void) {
}

void MyStack::push(int x){
    this->_v.push_back(x);
}
int MyStack::pop(){
    int ret=_v.back();
    _v.pop_back();
    return ret;
}

/*std::string MyStack::toString(){  //-->ERROR
    std::string ret="";
    std::stringstream ss;
    for(unsigned int i=0;i<_v.size();++i){
        ss<<_v[i]<<" ";
    }
    return ss.str();
}*/
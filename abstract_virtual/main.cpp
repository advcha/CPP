/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: teddy
 *
 * Created on April 15, 2016, 9:29 PM
 */
//ref:http://www.interviewsansar.com/2015/10/03/explain-abstract-class-in-cpp-with-an-example/
//ref:http://www.studytonight.com/cpp/abstract-class-and-pure-virtual.php
/*Abstract Class is a class which contains atleast one Pure Virtual function in it. 
Abstract classes are used to provide an Interface for its sub classes. Classes inheriting an 
Abstract Class must provide definition to the pure virtual function, otherwise they will 
also become abstract class.*/
#include <iostream>
#include <cstdlib>
#include <memory>

using namespace std;

class Beverages{
public:
    void addHotItems(){
        addHotWater();
        addMilk();
    }
    virtual void addSachets()=0;    //define pure abstract class
private:
    void addHotWater(){
        cout<<"\tAdd hot water..."<<endl;
    }
    void addMilk(){
        cout<<"\tAdd milk..."<<endl;
    }
};

class Tea:public Beverages{
public:
    void addSachets(){          //implement abstract class
        cout<<"\tAdd tea..."<<endl;
    }
    Tea(){
        cout<<"Preparing tea..."<<endl;
    }
};

class Coffee:public Beverages{
public:
    void addSachets(){          //implement abstract class
        cout<<"\tAdd coffee..."<<endl;
    }
    Coffee(){
        cout<<"Preparing coffee..."<<endl;
    }
};
/*
 * 
 */
int main(int argc, char** argv) {
    //Beverages b;    //compile error, must use pointer
    //Prepare Tea
    Beverages *tea;
    Tea t;
    tea=&t;
    tea->addHotItems();
    tea->addSachets(); 
    /*Beverages* tea=new Tea();
    tea->addHotItems();
    tea->addSachets();
    delete tea;*/
    /*
    //unique_ptr<Beverages> tea(new Tea());
    shared_ptr<Beverages> tea(new Tea());
    tea->addHotItems();
    tea->addSachets();*/
    
    /*Beverages *coffee;
    Coffee c;
    coffee=&c;
    coffee->addHotItems();
    coffee->addSachets();*/    
    //Prepare coffee
    /*Beverages* coffee=new Coffee();
    coffee->addHotItems();
    coffee->addSachets();*/
    
    return 0;
}


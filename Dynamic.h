//
// Created by Bryan Martinez on 5/5/22.
//

#ifndef OOP_FINAL_PROJECT_DYNAMIC_H
#define OOP_FINAL_PROJECT_DYNAMIC_H
#include <list>
#include <iostream>
using namespace std;


class Dynamic {

public:
    //List to store our functions
    list<function<void(function<void()>)>>functions;

    //Here we store a call to a function object where we will then store these function objects into our list
    function<void(function<void()>)> remove_func_object = remove_func();
    function<void(function<void()>)> add_func_object = add_func();

    //Constructor will insert our 2 main function objects into our list
    Dynamic(){
        functions.push_back(remove_func_object);
        functions.push_back(add_func_object);
    };

    //These are our functions which we need to overload operator() for them to work
    struct remove_func {
        void operator()(function<void()> f) const {
            //Code to remove function from class
        }
    };

    struct add_func {
        void operator()(function<void()> f) const {
            //Code to add function from class
        }
    };
};


#endif //OOP_FINAL_PROJECT_DYNAMIC_H

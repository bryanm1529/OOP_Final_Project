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
    list<function<void()>>functions;

    //Constructor to initialize our variables and copy the initial list of functions
    Dynamic(const list<function<void()>>& initialList){
        //Copying the initial list to our functions list
        functions = initialList;

    };

    //Here we store a call to a function object to the remove and add functions this allows us to access the function at runtime
    function<void(function<void()>)> remove_func_object = remove_func();
    function<void(function<void()>)> add_func_object = add_func();

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

#include <iostream>
#include <list>
using namespace std;

class Dynamic {

public:
    //List to store our functions
    static list<void*>functions;

    //Constructor to initialize our variables and copy the initial list of functions
    Dynamic(const list<void*>& initialList){
        //Copying the initial list to our functions list
        functions = initialList;

    };

    Dynamic(){};

    //These are our functions which we need to overload operator() for them to work
    struct remove_func {
        void operator()(void *f) const {
            //Code to remove function from class
            functions.remove(f);
        }
    };

    struct add_func {
        void operator()(void* f) const {
            //Code to add function to class list
            functions.push_back(f);
        }
    };

    //Here we store a call to a function object to the remove and add functions this allows us to access the function at runtime
    function<void(void*)> remove_func_object = remove_func();
    function<void(void*)> add_func_object = add_func();

    void print(std::list<void*> const &list)
    {
        for (auto it = list.cbegin(); it != list.cend(); it++) {
            std::cout << *it << std::endl;
        }
    }
};

//test function to add or delete
void* dog(){
    int i = 7;
    int *doggy = &i;

    cout << " hi" << endl;
    return reinterpret_cast<void *>(*doggy);
}

int main() {
    Dynamic test;

    test.add_func_object(dog());

    test.print(test.functions);


    return 0;
}

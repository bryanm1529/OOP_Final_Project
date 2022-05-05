# OOP_Final_Project

For this assignment, you are to write a class
that can add or remove member functions at runtime. Suppose you call this class
Dyn_class (for dynamic class). Then Dyn_class should have functions:
A constructor that allows you give the Dyn_class object an initial list of functions.
remove_func(f): removes function f from a Dyn_class object.
add_func(f): adds function f to a Dyn_class object.
You must also overload operator () so that you can call the functions stored inside
Dyn_class.
You can use any existing C++ library code.

## Some questions that you will need to consider.
 What other classes do you need to write to support Dyn_class?

 What are the actual arguments for remove_func and add_func?

 Does it matter if the functions being added or removed from Dyn_class are actual
functions, function objects, or lambda functions?

 Do you need to make some restrictions on the type of functions being stored in
Dyn_class? For example, can they have an arbitrary number of arguments? What
about the return value?

### When you are done, you must turn in the following:
 An introduction in which you describe your approach to the project (including
what compiler you used).

 All code (documented).

 A driver program to test your code.

 The output from a particular execution of the driver program.

 A log of the team’s work on the project (times, days and who worked on what)

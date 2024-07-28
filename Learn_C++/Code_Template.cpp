

// rm yourfile          # Remove the old executable
// g++ yourfile.cpp -o yourfile        # Compile the new code
// ./yourfile             # Run the newly compiled code



#include <iostream>
// #include <string>


using namespace std;

int main(){


// double
// float
// bool 
// int 
// string
// char
//const    This is in front of the variable initialization, that forces the variable to stay the same and NEVER be changed with different use case in the future




// datatypes: 
// int - 4 bytes: -2B to 2B store for nubmers that we store
// short - 2 bytes: -32800 to 32800 nubmers for this 
// long - usually same as int, long long is 8 bytes and HUGE nubmers

// double - 8 bytes memeory, -1.7E308 to 1.7E308; float is 4 bytes, -3.4E38 to 3.4E38, longdouble is twice as many E valeus as double
// if we want to type BOTH the values of float AND double, we have to intiate the float value with a f at the end of the string.

//this is ESPECIALLY the case if we want to use the 'auto' prefix before the variables that we wan to to declare: 

//ex: auto isValid = false ----> will assume as bool type
//ex: auto float = 3.65f ----> will assume as float type
//ex: auto float = 3.65 ----> will assume as double type

// bool - binary 0 or 1- true or false
// char - gives one value



int a = 1;
int b = 2;


int carry_varibale = a; 
a = b;   //this here is not able to be modified becauase we set a to a constant in the first place and we cannot change it again
b = carry_varibale ;

cout << a << endl;
cout << b << endl;


double x;
double y;
#// cout << "Enter two numbers to add together: "<<endl;

cin >> x;
cin >> y;

cout << "The sum of the numbers you entered is : "<< x+y <<endl;

return 0;


}
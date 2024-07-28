#include <iostream>
#include <string>
#include <vector>

using namespace std;

string conditionals(int day_number){   //the 'type' of function here is what we can return as an output of this function WE MUST SPECIFY and BE THE SAME AS THE OUTPUT TYPE

string Name;


//'switch' is just another version of the if statement to set the value of some variable after checking some conditions

switch(day_number){   //this refers to when the day_number is equal to 
case 0:
Name = "Friday";
break;

case 1:
Name = "Saturday";
break;

default:
Name = "NONE";
break;


// cout<< Name<<endl;
// cout << day_number<<endl;
}
return Name;

}


int main(){

    string name;   //MAKE SURE THE TYPE THAT YOU RETURN IS THE SAME as the type that is intialized
    // int number;
    name = conditionals(1);


    cout << name <<endl;


    int index = 0;

    do{

        cout<<index<<endl;
        index +=2;
                
    } while(index<=5);   //we can set numbers equal by having != for does not equal, and we can also use && for combining two different conditions
 


//for loop: requires 3 parts for the condition: the limiting conditions as well as the iteration of the variable

//we HAVE to initiate the variable that we iterate over before our first semicolon

//remember for an array we always must include [] after the intialization // WE MUST ALSO specify the type that is inside the array
 //we include values 0 to 9 for 10 total values
    
    
    
    // int array_int[] = {1,2,4};   
    for (int i=0; i<3; i++) {  

    cout<<i<<endl;

    }   

    string word = "hello";
    // cout<<word<<endl;


    return 0;

}

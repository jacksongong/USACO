#include <iostream>
#include <string>
#include <vector>

using namespace std;

string conditionals(int day_number){   //the 'type' of function here is what we can return as an output of this function WE MUST SPECIFY

string Name;


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


    index = 0;

    do{
                
    } while(index<=5)   //we can set numbers equal by having != for does not equal, and we can also use && for combining two different conditions
 

    return 0;


}

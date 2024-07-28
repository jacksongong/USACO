#include <iostream>
#include <cstdlib>   
#include <cstdio>
#include <string>
#include <cmath>
#include <fstream> //this is for reading from the test file and writing to the output file
#include <sstream>  
#include <vector>

using namespace std;

void name_suffix(string name){
    freopen((name +".in").c_str(), "r", stdin); //this specifys the 
    freopen((name +".out").c_str(), "w", stdout); //this specifys the 
}

int main(){
    string file_name = "paint"; //put this in quotations
    name_suffix(file_name);
    
    int a;
    int b; 
    int c;
    int d;
    cin>>a>>b;
    cin>>c>>d;

//we can use boolean values, since false are assigned to 0 and true is assigned to 0. 
//We can create vectors using any datatype---this includes iterating over the vector using boolean values that are either 0 or 1

    vector <int> search(100, 0); //search is the name of our vector that contains the boolean and the size of the name
    int count = 0;  //count at the 4 points 

//we can set a list of BOOLEANS---these values can NOT BE SWITCH TWICE. If they switch once, they will stay switched. 

    

    for (int i = a; i<b ; i++){
       search[i] = 1;

    }

    for (int i = c; i<d ; i++){
       search[i] = 1;   //values of booleans will be converted to 0 no matter what we do
    }


// for (int i = a; i < b; i++) { cover[i] = true; }
// 	for (int i = c; i < d; i++) { cover[i] = true; }


    
for (int i = 0; i<100; i++){
        count += search[i];
    }



    cout<< count <<endl;   //DO NOT OUTPUT spaces in your stdout - DO NOT end your line with two new lines. Keep the endl in this way
    return 0;
}
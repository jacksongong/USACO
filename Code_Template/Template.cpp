#include <iostream>
#include <cstdlib>   
#include <cstdio>
#include <string>
#include <cmath>
#include <fstream> //this is for reading from the test file and writing to the output file
#include <sstream>  

using namespace std;

void name_suffix(string name){
    freopen((name +".in").c_str(), "r", stdin); //this specifys the 
    freopen((name +".out").c_str(), "w", stdout); //this specifys the 
}



int main(){
    string file_name = "testin"; //put this in quotations
    name_suffix(file_name);
    
    int a;
    int b; 
    int c;
    int d;
    cin>>a>>b;
    cin>>c>>d;



    cout<< "The sum of these numbers is:"<<a+b+c+d<<endl;   //DO NOT OUTPUT spaces in your stdout - DO NOT end your line with two new lines. Keep the endl in this way
    return 0;
}
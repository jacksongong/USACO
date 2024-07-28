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
    // string file_name = "testin"; //put this in quotations
    // name_suffix(file_name);
    
    string ans;
    int a;
    // int b; 
    // int c;
    // int d;


    cin>>a;

    if (a % 4 == 0){
        ans = "YES";
    }else{
        ans = "NO";
    }



    cout<<ans<<endl;
    return 0;
}
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
    
    int ans1;
    int ans2;
    int ans3;

    int a;
    int b; 
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    cin>>a>>b;
    cin>>c>>d;
    cin>>e>>f;
    cin>>g>>h;
    int tot = abs(a-b)+abs(c-d)+abs(e-f)+abs(g+h);
    if (a+c+e+g == b+d+f+h){
        ans1 = a-b;
        ans3 = h-g;
        ans2 = tot-ans1-ans3; //this middle one is tricky 


    }else {
        ans1 += a-b;
        ans3 += h-g;
        ans2 += tot-ans1-ans3; //this middle one is tricky 

        
    }



    cout<< ans<<endl;
    return 0;
}
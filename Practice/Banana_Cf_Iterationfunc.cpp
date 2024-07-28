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

int sum(int end){
    return end*(end+1)/2
}



int main(){
    string file_name = "testin"; //put this in quotations
    name_suffix(file_name);
    
    int ans;
    int a;
    int b; 
    int c;
    int d;
    cin>>a>>b;
    cin>>c;

    int owed = sum(c) * a;
    ans = owed - b;
    
    // vector <int> n(a);
    // for (int i =1; i<a+1; i++){
    //     vector[i] = i
    // }




    cout<< ans<<endl;
    return 0;
}
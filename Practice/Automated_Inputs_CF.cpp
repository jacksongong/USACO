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

    int ans = 0;
    int total;

    
    cin>>total;
    for (int n =0; n<total; n++){
        int a;
        int b; 
        int c;
        cin>>a>>b>>c;
        //cin>>c>>d;

        if ((a == 1 &&b==1 && c==0)||(a == 1 &&b==0 && c==1)||(a == 0 &&b==1 && c==1)){
            ans ++; 
        }else{
            ans == ans;
        }
    }
    cout<< ans<<endl;
    return 0;
}
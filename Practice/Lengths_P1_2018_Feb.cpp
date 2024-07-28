#include <iostream>
#include <cstdlib>   //this conatins the absolute value function
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
    string file_name = "testin"; //put this in quotations
    name_suffix(file_name);
    

    int ans;

    int a;
    int b; 
    int c;
    int d;
    cin>>a>>b;
    cin>>c>>d;


    ans = abs(a-b);
    if (ans>(abs(a-c)+abs(b-d))){
        ans = abs(a-c)+abs(b-d);
    }
    else if(ans>(abs(a-d)+abs(b-c))){
        ans = abs(a-d)+abs(b-c);
    }


// vector <bool> overlap1(100);

//     //int covered;

//     if (b>a){
//     for (int i = a; i<b; i++){
//         overlap1[i] = "true";  //this will naturally turn into 1 as true is the same as 1
//     }
//     } else if (b<a){
//     for (int i = a; i<b; i++){
//         overlap1[i] = "true";

//     }
//     }else{
//         ans = 0;
//     }

// vector <bool> overlap2(100);

// if (d>c){
//     for (int i = c; i<d; i++){
//         overlap1[i] = "true";
//     }
//     } else if (d<c){
//     for (int i = d; i<c; i++){
//         overlap1[i] = "true";

//     }
//     }else{
//         ans = abs(a-b);
//     }

// vector<bool> final_overlap(100); //this gives the overlapping region of the teleport zone and the actual zone

// for (int i = 0; i< (overlap1).size(); i++) {
//     if (overlap1[i] == overlap2[i] && overlap2[i] == 1){
//         final_overlap[i] = "true";
//     }
// }




//     if ((final_overlap).size() != 0){   //case where we have both going in the negative direction
    
//     ans = abs(b-d) + abs(a-c); //the teleporter can transfer stuff vise versa
    
//     }else if ((final_overlap).size() == 0){
//         ans = abs(a-b);
//     }

    cout<< ans<<endl;
    return 0;
}
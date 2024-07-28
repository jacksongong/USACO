#include <iostream>
#include <cstdlib>   //this is what we will use for the random number generator
#include <string>
#include <cmath>
#include <fstream>
#include <sstream>  

using namespace std;
// int main (){
// int a;
// int b; 
// int c; 
// int d;

// cin >> a >>b;

// cin>> c >>d;

// int ans;
// //cases- there are 24 cases for the arrangements


// if (d>c && c>b && b>a){
//    ans = (d-c+b-a);
//    //cout<<"here1";
// }else if (d>b && b>c && c>a){
//     ans = (d-a);
//     //   cout<<"here2";

// }else if (b>d && d>c && c>a) {
// ans = b-a;
//   // cout<<"here3";

// }else if (b>d && d>a && a>c){
// ans = b-c;
//   // cout<<"here4";

// }else if(b>a && a>d && d>c){
// ans = b-a+d-c;
//   // cout<<"here5";

// }else{
//     ans = d-c;
//        //cout<<"here6";

// }//did not include cases where numbers can be the same

// cout<<ans<<endl;

// }



int main() {
    // initialize file I/O
    ifstream infile("paint.in");
    ofstream outfile("paint.out");

    // read in the first line, store a and b
    string line;
    getline(infile, line);
    stringstream ss1(line); 
    int a, b;
    ss1 >> a >> b;

    // read in the second line, store c and d
    getline(infile, line);
    stringstream ss2(line);
    int c, d;
    ss2 >> c >> d;

    int amountPainted = 0;
    for(int i = 0; i < 100; i++) {
        if((i >= a && i + 1 <= b) || (i >= c && i + 1 <= d)) {
            amountPainted++;
        }
    }

    // print the answer!
    outfile << amountPainted << endl;

    // close output stream
    outfile.close();

    return 0;
}
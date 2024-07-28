#include <iostream>
#include <string>
#include <vector>
//the vector module allows the storage of lists of values and the printing of them as well



using namespace std;

//we want to initialize the function outside the main funciton





//the default for the i++ is to add one to each iteration. we can also use increments by specifiying i+=20 or i/=2, i*=2, i-=2

//we must give the starting, ending, and the increment for EVERY FOR LOOP







// vector<double> fibonacci(int start1, int start2, int position) {
//     vector<double> results_array(position); // Create a vector to store results
//             for (int i=0 ; i < position; i++){
                
//                 int result = start1 + start2;

//                 start2 = result;
//                 start1=start2;
//                 cout<<result<<" "<<endl;
//                 results_array[i] = result;



//             }

//     return results_array[position], results_array;
// }





int fibonacci_1(int start1, int start2, int position) {

        int results_array_1[position] = {};
        cout<< position<<endl; 

         results_array_1[0] = start1;
         results_array_1[1] = start2;

            for (int i=0 ; i < position; i++){
                //cout<<start1<<"oooooooooooooooooooooooooooooo"<<start2<<endl;
                int result = start1 + start2;
                cout<<result<<" ";
                results_array_1[i+2] = result;


                start2 = result;
                start1= results_array_1[i+1];
                

            }
    return results_array_1[position-1];
}







int main(){

    int num1, num2 ; //#we declare the type of input 



    //arrays: lists in python notation below----we must also specify the type of data in our array

    double numberlist[20] = {2,3,4,5.5,6.666,9.0};

    //20 indicates the number of elements we WANT in our list

    numberlist[2] = 10;

    //we are changing the numberlist into the version that we want


    int first = 4;
    int second =5;
    int iteration = 5;


//even for the output of a function, we MUST specify the type of the variable by intializing it 

int final_value;
int list_outputs;


    final_value = fibonacci_1(first, second, iteration);

    cout<<endl<< final_value <<endl; 

    //here, we have to 
    //cout<< list_outputs <<endl; 



// when we set conditions, we can use the || for 'or' and the && for the and condition --- we can also set conditions for our conditions such as greater than and less than




    //functions start with void do NOT RETURN A RESULT. It simply outputs a constant value or operation and then stops
    //,  we MUST input parameters that have some initaliztion like double cube(int variable); storing the output of a function just like python
    //and we can return the value throught the function by using the 



//the preset condition for 



    // for (int i = 0; i < 20; ++i) {
    //         cout << numberlist[i] << endl;
    //     }

    //we want to print out each element in the list 

    return 0;


}

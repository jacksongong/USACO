// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;


	//pointers--these are hexdecimal data types that store information TO THE COMPUTER.
	// we use the & sign to indicate the datatype, teh * in fron of variable name is to 
	//turn the hexidecimal type to a type that we can recognize. *page is NOT EUQAL to &age
	//we cna convert from integer to hexidecimal by using the * in front of the encoding that starts with &

class book{
public: 
string title;
string author;
int pages;


book(string a_title, string a_author, int a_pages){   //these are what we call dummy varaibles
	
//these values below are 'ORIGINAL VARIABLES' which we MUST set to our dummy variables (much like python variables)
	title =a_title;
	author = a_author;
	pages = a_pages;
}

book(string a_title){
    title = a_title;
	//string title;
	string author;
	int pages;
}

 
bool isthegoat(){   //we can DEFINE functions within our classes that have functionality 
	if (author == "jgong"){
		return true; //TRUE is boolean values of 1 
	}
	return false; // false is boolean vlaues of 0
}

};


int pointers(int age_input){
int age = age_input;
int *page = &age;

cout<<*&age<<endl;
return *page;   //we canot return a hexidecimal value
}

// int forloop(int a, int b){
	

class search{  //when defining a class we DO NOT have to have parenthesis next to it (this is for function)

string rating;

public:
string place;
int stars;

search(string a_place, int a_stars, string a_rating) {  //this here is for defining what each of the input values will correlate to 
	place = a_place;
	stars = a_stars;
	rating = check_rating(a_rating);  //this will ALWAYS be run when we call class
}  //we set dummy varaible here*

private:
 //this is so that OTHER FUNCTIONS outside the class CAN NOT access the rating variable
string check_rating(string a_rating){  //does not return anything, so just a function
	if (a_rating == "good" || a_rating == "mid" || a_rating == "bad"){
		rating = a_rating;
	}
	else{
	return "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN";
	}
}
public:
string get_back(){
	return rating;
}

}

// }

int main() {
	// int a, b, c; cin >> a >> b >> c;
	// cout << "The sum of these three numbers is " << a + b + c << "\n";


	int grid[4][2]{
		{1,2},
		{2,3},
		{5,6},
		{5,7}
	};

	for (int i = 0; i<4; i++){
	for (int j = 0; j<2; j++){
		cout<< grid[i][j] <<endl;
	}
	}

	int key = 19;
	int debugged;
	debugged = pointers(key);
cout<< debugged <<endl; 

//we MUST USE "" to indicate specific strings. We also have to watch for how we initiate the objects as shown here
book book1("me", "isuck", 69);


//WE DO NOT USE THIS NOTATION book2 = book('title', 'jgong', 69)   
book book2("title", "jgong", 69);   

book book3("ITTLELELE");
book3.author = "HI";


search avengers("mommy place", 9, "mid");

cout<< avengers.get_back() <<endl; 

bool bool_goat;
bool_goat = book1.isthegoat();
cout<< bool_goat<<endl<<endl;
cout<<book3.title<<endl<<endl;
cout<<book2.author<<endl;

cout<<book1.pages<<endl;






return 0;





}




//// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> v{1, 7, 4, 5, 2};
	for (int i = 0; i < int(size(v)); i++) { cout << v[i] << " "; }
	cout << endl;

//++i will FIRST INCREMENT then return the value of i; whereas i++ will return i THEN inc
//increment by 1 

//.begin() and .end() by definition are the position of elements within the vector. These are assumed to be iteratior types
//the usage of .resize(size of new set, nubmer to fill in the rest of the vector)
// .empty() returns boolean and .size() gives size of vecotr can always be used 



for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
	cout << *it << " ";  // prints the values in the vector using the iterator
} //this code sets an iterator to the vector, starts the it at the beginning and stops 
//it at the end (not including); and adds 1 to the iterator after each iteration


//we take the elements that are in a vector // next(it) stands for taking the NEXT position of the iterator

//(DOES NOT TAKE the last element inclusion)
//v.erase(v.begin(), v.begin() + 3) ---this is removing the indices from the start to the 
//OR v.erase(v.end())---start from the end 

for (element : v){
	cout<< element<<" ";
}

//MEMORY ALLOCATION:

//256*10^6 bytes, where 4 bytes in int, 8 in long, 













} // in the above code we first made the vector into what we wanted, then we set the size 
// as int type and iterated over the position by [], while initalizaing using {}



// vector <int> v; is for a dynamic vector that can change size

// cin>> n
// int v[n]  ----> this is making an array with set length n (initalize the type of thing inside of the array)


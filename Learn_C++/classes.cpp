#include <bits/stdc++.h>
using namespace std;

class book {
public:
    string title;
    string author;
    int pages;

    book(string a_title, string a_author, int a_pages) {
        title = a_title;
        author = a_author;
        pages = a_pages;
    }

    book(string a_title) {
        title = a_title;
        author = "Unknown";
        pages = 0;
    }

    bool isthegoat() {
        return author == "jgong";
    }
};

int pointers(int age_input) {
    int age = age_input;
    int* page = &age;

    cout << *&age << endl;
    return *page;
}

class search {
    string rating;

public:
    string place;
    int stars;

    search(string a_place, int a_stars, string a_rating) {
        place = a_place;
        stars = a_stars;
        rating = check_rating(a_rating);
    }

private:
    string check_rating(string a_rating) {
        if (a_rating == "good" || a_rating == "mid" || a_rating == "bad") {
            return a_rating;
        } else {
            return "Invalid Rating";
        }
    }

public:
    string get_back() {
        return rating;
    }
};

int main() {
    int grid[4][2] = {
        {1, 2},
        {2, 3},
        {5, 6},
        {5, 7}
    };

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {
            cout << grid[i][j] << endl;
        }
    }

    int key = 19;
    int debugged;
    debugged = pointers(key);
    cout << debugged << endl;

    book book1("me", "isuck", 69);
    book book2("title", "jgong", 69);
    book book3("ITTLELELE");
    book3.author = "HI";

    search avengers("mommy place", 9, "mid");
    cout << avengers.get_back() << endl;

    bool bool_goat;
    bool_goat = book1.isthegoat();
    cout << bool_goat << endl;
    cout << book3.title << endl;
    cout << book2.author << endl;
    cout << book1.pages << endl;

    return 0;
}
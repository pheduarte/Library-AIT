//
//  Book.cpp
//  Teste
//
//  Created by Phelippe D Ambrosio on 12/11/2024.
//

#import "Book.h"

void Book::displayBookDetails(){            //method to display the book's title, author, ISBN, and current availability.
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "ISBN: " << ISBN << endl;
    cout << "Availability: " << availability << endl;
    cout << "_____________" << endl;
};

void Book::borrowBook() {                   
    if (availability == true) {
        availability = false;
    }   else {cout << "Book not available" << endl;}
};

void Book::setBookDetails() {
    
    cout << "Enter title: ";
    getline (cin, title);                   //"getline" is used intead of 'cin'
    cout << "Enter author name: ";          //'cin' captures the first word only
    getline (cin, author);
    cout << "Enter ISBN: ";
    cin >> ISBN;
    availability = true;
    cin.ignore();
};

void Book::returnBook() {
    availability = true;
};

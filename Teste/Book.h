//
//  Book.h
//  Teste
//
//  Created by Phelippe D Ambrosio on 12/11/2024.
//

#pragma once
#include <iostream>
#include <string>
using namespace std;

class Book {
    public:
        string title;
        string author;
        int ISBN;
        bool availability;
        void setBookDetails();          // method to assign values to the book’s attributes
        void displayBookDetails();      // method to display the book's title, author, ISBN, and current availability.
        void borrowBook();              // method to mark the book as borrowed (only if it's currently available)
        void returnBook();              // method to return the book and mark it as available again
};

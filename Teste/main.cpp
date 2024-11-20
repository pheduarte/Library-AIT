//
//  main.cpp
//  Teste
//
//  Created by Phelippe D Ambrosio on 8/11/2024.
//


#import "Book.h"
#import "eBook.h"
#import "PaperBook.h"

int main(int argc, const char * argv[]) {
    
    
    Book shelf[6];      //initializing an array of 6 books
    
    //book 1
    shelf[0].title = "Pride and Prejudice";
    shelf[0].author = "Jane Austen";
    shelf[0].ISBN = 1;
    shelf[0].availability = true;
    
    //book 2
    shelf[1].title = "To Kill a Mockingbird";
    shelf[1].author = "Harper Lee";
    shelf[1].ISBN = 2;
    shelf[1].availability = true;
    
    //book 3
    shelf[2].title = "Fourth Wing";
    shelf[2].author = "Rebecca Yarros";
    shelf[2].ISBN = 3;
    shelf[2].availability = true;
    
    //book 4
    shelf[3].title = "The Women";
    shelf[3].author = "Kristin Hannah";
    shelf[3].ISBN = 4;
    shelf[3].availability = true;
    
    //book 5
    shelf[4].title = "The Lord of the Rings";
    shelf[4].author = "J. R. R. Tolkien";
    shelf[4].ISBN = 5;
    shelf[4].availability = true;
    
    
    int selection = -1;                                        //"selection" variable is reset to -1 after
                                                               //every selection except for "4 - exit"
    
    while (selection == -1) {
        
        cout << "What would you like to do?" << endl;
        cout << "1 - Borrow a book" << endl;
        cout << "2 - Return a book" << endl;
        cout << "3 - Check availability" << endl;
        cout << "4 - Exit" << endl;                             //any number other than 1, 2, or 3 will stop the program
        
        cin >> selection;
        
        if(selection == 1) {
            for(int i = 0; i < 5; i++) {                        //loop "shelf" to display the book available
                shelf[i].displayBookDetails();
            };
            
            cout << "Please type the ISBN of the book you would like to borrow" << endl;
            
            int ISBN;
            cin >> ISBN;
            
            shelf[ISBN-1].borrowBook();
            cout << "You have selected the book " << shelf[ISBN-1].title << endl;
            selection = -1;
            
            cout << " " << endl;
            cout << " " << endl;
            
        } else if (selection == 2) {
            for(int i = 0; i < 5; i++) {                        //loop "shelf" to display the books available
                shelf[i].displayBookDetails();
            };
            cout << "Please enter the ISBN of the book you would like to return" << endl;
            
            int ISBN;
            cin >> ISBN;
            
            shelf[ISBN-1].returnBook();                                         //array index starts with 0, that's why ISBN-1
            cout << "You have selected book " << shelf[ISBN-1].title << endl;
            selection = -1;
            
        } else if (selection == 3) {
            for(int i = 0; i < 5; i++) {                        //loop "shelf" to display the books available
                shelf[i].displayBookDetails();
                
                selection = -1;
            };
        };
//            if(ISBN == 1) {
//                cout << "You have selected book " << shelf[0].title << endl;
//                shelf[0].borrowBook();
//                selection = -1;
//                cout << " " << endl;
//                cout << " " << endl;
//                cout << " " << endl;
//            } else if(ISBN == 2) {
//                cout << "You have selected book " << shelf[1].title << endl;
//                shelf[0].borrowBook();
//                selection = -1;
//                cout << " " << endl;
//                cout << " " << endl;
//                cout << " " << endl;
//            } else if(ISBN == 3) {
//                cout << "You have selected book " << shelf[2].title << endl;
//                shelf[0].borrowBook();
//                selection = -1;
//                cout << " " << endl;
//                cout << " " << endl;
//                cout << " " << endl;
//            } else if(ISBN == 4) {
//                cout << "You have selected book " << shelf[3].title << endl;
//                shelf[0].borrowBook();
//                selection = -1;
//                cout << " " << endl;
//                cout << " " << endl;
//                cout << " " << endl;
//            } else if(ISBN == 5) {
//                cout << "You have selected book " << shelf[4].title << endl;
//                shelf[0].borrowBook();
//                selection = -1;
//                cout << " " << endl;
//                cout << " " << endl;
//                cout << " " << endl;
//            } else
//                return 0;
//        } if (selection == 3) {
//            return 0;
//        };
        
    
    
//
//
//    Book novo2, book3;
//    
//    novo2.setBookDetails();
//    novo2.displayBookDetails();
//    
//    book3.setBookDetails();
    
    
    
    
//    int i;
//    
//    for(i = 0; i <= 1; i++){                      //Loop to add books to the shelf
//        shelf[i].setBookDetails();
//        cout << "Book added to shelf" << endl;
};
    
    eBook newEbook;
    newEbook.title = "Harry Potter";
    newEbook.displayBookDetails();
    
    
   
    
    return 0;
}

    

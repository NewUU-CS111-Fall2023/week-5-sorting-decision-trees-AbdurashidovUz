#include <iostream>
#include <vector>
#include <string>

using namespace std;

void bubbleSort(vector<string>& books) {
    int n = books.size();

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (books[j].compare(books[j + 1]) > 0) {
                string temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
            }
        }
    }
}

int main() {

    vector<string> bookTitles;


    int numBooks;
    cout << "Enter the number of books: ";
    cin >> numBooks;




    cout << "Enter the titles of the books:" << endl;
    for (int i = 0; i < numBooks; ++i) {
        string title;
        getline(cin, title);
        bookTitles.push_back(title);
    }


    bubbleSort(bookTitles);


    cout << "\nSorted list of book titles:" << endl;
    for (const string& title : bookTitles) {
        cout << title << endl;
    }

    return 0;
}

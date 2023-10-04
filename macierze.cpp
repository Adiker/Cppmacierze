#include <iostream>
using namespace std;

int main() {
    int rows1, rows2, columns1, columns2, size1, size2;
    do {
    cout << "Podaj rozmiar macierzy numer 1\n Najpierw liczba wierszy, potem kolumn" << endl;
    cout << "Wiersze: " << endl;
    cin >> rows1;
    cout << "Kolumny: " << endl;
    cin >> columns1;
    cout << "Podaj rozmiar macierzy numer 2\n Najpierw liczba wierszy, potem kolumn" << endl;
    cout << "Wiersze: " << endl;
    cin >> rows2;
    cout << "Kolumny: " << endl;
    cin >> columns2;
    }while(columns1 != rows2);
    
   /* if (columns1 != rows2)
    {
        cout << "Liczba kolumn macierzy 1 musi sie rownac liczbie wierszy macierzy 2" << endl;
    } */
    
    // cout << "Sukces !" << endl;
    
    
    size1 = rows1 * columns1;
    size2 = rows2 * columns2;
    
    
    
    return 0;
}
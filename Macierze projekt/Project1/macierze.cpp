#include <iostream>
using namespace std;

int main() {
    int rows1, rows2, columns1, columns2, number;
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
    if (columns1 != rows2)
    {
        cout << "Liczba kolumn macierzy 1 musi sie rownac liczbie wierszy macierzy 2" << endl;
    }
        // cout << "Sukces !" << endl;
    }while(columns1 != rows2);

    int** tab1 = new int*[rows1];
    for (int i = 0; i < rows1; i++)
    {
        tab1[i] = new int[columns1];
        for (int j = 0; j < columns1; j++)
        {
            cout << "Podaj liczbe (macierz 1):" << " wiersz: " << i << ", kolumna: " << j << endl;
            cin >> number;
            tab1[i][j] = number;
        }
        
    }
    int** tab2 = new int*[rows2];
    for (int i = 0; i < rows2; i++)
    {
        tab2[i] = new int[columns2];
        for (int j = 0; j < columns2; j++)
        {
            cout << "Podaj liczbe (macierz 2):" << " wiersz: " << i << ", kolumna: " << j << endl;
            cin >> number;
            tab2[i][j] = number;
        }

    }

    cout << "\nMacierz 1: " << endl;
    for (int i = 0; i < rows1; i++)
    {
        cout << "\n" << endl;
        for (int j = 0; j < columns1; j++)
        {
            cout << tab1[i][j] << "\t";
        }

    }
    
    cout << "\n\nMacierz 2: " << endl;
    for (int i = 0; i < rows2; i++)
    {
        cout << "\n" << endl;
        for (int j = 0; j < columns2; j++)
        {
            cout << tab2[i][j] << "\t";
        }

    }

    cout << "\n\nWykonywanie operacji mnozenia macierzy...\nMacierz wynikowa to: " << endl;

    int** tab3 = new int*[rows1];

    int c1 = 0, c2 = 0, r1 = 0, r2 = 0;


    for (int i = 0; i < rows1; i++)
    {
        cout << "\n" << endl;
        tab3[i] = new int[columns2];
        for (int j = 0; j < columns2; j++)
        {
            tab3[i][j] = 0;
            for (int temp = 0; temp < columns1; temp++)
            {   
                tab3[i][j] += tab1[r1][c1 + temp] * tab2[r2 + temp][c2];
            }
            cout << tab3[i][j] << "\t";
            c2++;
            if (c2 == columns2)
            {
                c2 = 0;
                r1++;
            }
           
        }
    }

    


    
    
    
    
    return 0;
}
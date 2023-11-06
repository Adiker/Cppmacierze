#include <iostream>
#include <limits>

using namespace std;

int main() {
    int rows1, rows2, columns1, columns2;
    
    do {
        cout << "Podaj rozmiar macierzy numer 1\n Najpierw liczba wierszy, potem kolumn" << endl;
        error:
        cout << "Wiersze: ";
        if (!(cin >> rows1) || rows1 <= 0) {
            cout << "To nie jest prawidłowa liczba wierszy. Spróbuj ponownie." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            goto error;
        }
        error1:
        cout << "Kolumny: ";
        if (!(cin >> columns1) || columns1 <= 0) {
            cout << "To nie jest prawidłowa liczba kolumn. Spróbuj ponownie." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            goto error1;
        }
        error2:
        cout << "Podaj rozmiar macierzy numer 2\n Najpierw liczba wierszy, potem kolumn" << endl;
        cout << "Wiersze: ";
        if (!(cin >> rows2) || rows2 <= 0) {
            cout << "To nie jest prawidłowa liczba wierszy. Spróbuj ponownie." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            goto error2;
        }
        error3:
        cout << "Kolumny: ";
        if (!(cin >> columns2) || columns2 <= 0) {
            cout << "To nie jest prawidłowa liczba kolumn. Spróbuj ponownie." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            goto error3;
        }

        if (columns1 != rows2) {
            cout << "Liczba kolumn macierzy 1 musi się równać liczbie wierszy macierzy 2" << endl;
        }
    } while (columns1 != rows2);

    double** tab1 = new double*[rows1];
    for (int i = 0; i < rows1; i++) {
        tab1[i] = new double[columns1];
        for (int j = 0; j < columns1; j++) {
            cout << "Podaj liczbe (macierz 1):" << " wiersz: " << i << ", kolumna: " << j << endl;
            if (!(cin >> tab1[i][j])) {
                cout << "To nie jest prawidłowa liczba. Spróbuj ponownie." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                j--;
            }
        }
    }

    double** tab2 = new double*[rows2];
    for (int i = 0; i < rows2; i++) {
        tab2[i] = new double[columns2];
        for (int j = 0; j < columns2; j++) {
            cout << "Podaj liczbe (macierz 2):" << " wiersz: " << i << ", kolumna: " << j << endl;
            if (!(cin >> tab2[i][j])) {
                cout << "To nie jest prawidłowa liczba. Spróbuj ponownie." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                j--;
            }
        }
    }

    cout << "\nMacierz 1: " << endl;
    for (int i = 0; i < rows1; i++) {
        cout << "\n" << endl;
        for (int j = 0; j < columns1; j++) {
            cout << tab1[i][j] << "\t";
        }
    }
    
    cout << "\n\nMacierz 2: " << endl;
    for (int i = 0; i < rows2; i++) {
        cout << "\n" << endl;
        for (int j = 0; j < columns2; j++) {
            cout << tab2[i][j] << "\t";
        }
    }

    cout << "\n\nWykonywanie operacji mnożenia macierzy...\nMacierz wynikowa to: " << endl;

    double** tab3 = new double*[rows1];
    int c1 = 0, c2 = 0, r1 = 0, r2 = 0;

    for (int i = 0; i < rows1; i++) {
        cout << "\n" << endl;
        tab3[i] = new double[columns2];
        for (int j = 0; j < columns2; j++) {
            tab3[i][j] = 0;
            for (int temp = 0; temp < columns1; temp++) {   
                tab3[i][j] += tab1[i][c1 + temp] * tab2[r2 + temp][c2];
            }
            cout << tab3[i][j] << "\t";
            c2++;
            if (c2 == columns2) {
                c2 = 0;
                r1++;
            }
        }
    }
    return 0;
}

#include <iostream>
using namespace std;

string login, haslo;

int main() {
    {
        cout << "Podaj login: ";
        cin >> login;
        cout << "Podaj haslo: ";
        cin >> haslo;

        if ((login == "admin") && (haslo == "iva")) {
            cout << "Udało sie logowanie";

        } else


        {
            cout<< "Nie udało się logowanie";
        }
    }
    return 0;
}

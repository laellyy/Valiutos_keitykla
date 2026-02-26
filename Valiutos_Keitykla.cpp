#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    // ---- Valiutu kursai ----
    double GBP_BENDRAS = 0.8729;
    double GBP_PIRKTI = 0.8600;
    double GBP_PARDUOTI = 0.9220;

    double USD_BENDRAS = 1.1793;
    double USD_PIRKTI = 1.1460;
    double USD_PARDUOTI = 1.2340;

    double INR_BENDRAS = 104.6918;
    double INR_PIRKTI = 101.3862;
    double INR_PARDUOTI = 107.8546;

    int pasirinkimas = -1;   // kad ciklas prasidetu
    string valiuta;
    double suma;
    double rezultatas;

    // nustatome kad rodytu 2 skaicius po kablelio
    cout << fixed << setprecision(2);

    // ciklas veiks kol vartotojas nepasirinks 0
    while (pasirinkimas != 0) {

        cout << "\n===== VALIUTOS KEITYKLA =====" << endl;
        cout << "1 - Palyginti kursa" << endl;
        cout << "2 - Pirkti valiuta" << endl;
        cout << "3 - Parduoti valiuta" << endl;
        cout << "0 - Iseiti" << endl;
        cout << "Pasirinkite: ";
        cin >> pasirinkimas;

        if (pasirinkimas == 0) {
            cout << "Programa baigta." << endl;
            break;
        }

        cout << "Pasirinkite valiuta (GBP, USD, INR): ";
        cin >> valiuta;

        // ----- 1. Kursu palyginimas -----
        if (pasirinkimas == 1) {

            if (valiuta == "GBP")
                cout << "1 EUR = " << GBP_BENDRAS << " GBP" << endl;
            else if (valiuta == "USD")
                cout << "1 EUR = " << USD_BENDRAS << " USD" << endl;
            else if (valiuta == "INR")
                cout << "1 EUR = " << INR_BENDRAS << " INR" << endl;
            else
                cout << "Neteisinga valiuta!" << endl;
        }

        // ----- 2. Valiutos pirkimas -----
        else if (pasirinkimas == 2) {

            cout << "Iveskite EUR suma: ";
            cin >> suma;

            if (valiuta == "GBP")
                rezultatas = suma * GBP_PIRKTI;
            else if (valiuta == "USD")
                rezultatas = suma * USD_PIRKTI;
            else if (valiuta == "INR")
                rezultatas = suma * INR_PIRKTI;
            else {
                cout << "Neteisinga valiuta!" << endl;
                continue;
            }

            cout << "Gausite: " << rezultatas << " " << valiuta << endl;
        }

        // ----- 3. Valiutos pardavimas -----
        else if (pasirinkimas == 3) {

            cout << "Iveskite valiutos suma: ";
            cin >> suma;

            if (valiuta == "GBP")
                rezultatas = suma / GBP_PARDUOTI;
            else if (valiuta == "USD")
                rezultatas = suma / USD_PARDUOTI;
            else if (valiuta == "INR")
                rezultatas = suma / INR_PARDUOTI;
            else {
                cout << "Neteisinga valiuta!" << endl;
                continue;
            }

            cout << "Gausite: " << rezultatas << " EUR" << endl;
        }

        else {
            cout << "Neteisingas pasirinkimas!" << endl;
        }
    }

    return 0;
}
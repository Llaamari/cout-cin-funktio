#include <iostream>
#include <iomanip>      // std::setprecision
#include <stdexcept>    // std::runtime_error
using namespace std;

// Funktio, joka tulostaa summan (ei palauta mitään)
void calcSum(int a, int b) {
    cout << a << " + " << b << " = " << (a + b) << endl;
}

// Funktio, joka tulostaa osamäärän (ei palauta mitään)
void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "Virhe: jakaja ei saa olla nolla!" << endl;
    } else {
        cout << fixed << setprecision(2); // kaksi desimaalia
        cout << a << " / " << b << " = " << static_cast<float>(a) / b << endl;
    }
}

// Funktio, joka palauttaa summan
int retSum(int a, int b) {
    return a + b;
}

// Funktio, joka palauttaa osamäärän (float)
float retDiv(int a, int b) {
    if (b == 0) {
        throw runtime_error("jakaja ei saa olla nolla!");
    }
    return static_cast<float>(a) / b;
}

int main() {
    int a, b;
    float result;

    cout << "Anna kaksi kokonaislukua:" << endl;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    cout << endl << "== Funktiot, jotka tulostavat suoraan ==" << endl;
    calcSum(a, b);
    calcDiv(a, b);

    cout << endl << "== Funktiot, jotka palauttavat arvon ==" << endl;
    cout << a << " + " << b << " = " << retSum(a, b) << endl;

    try {
        result = retDiv(a, b);
        cout << fixed << setprecision(2);
        cout << a << " / " << b << " = " << result << endl;
    } catch (runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}

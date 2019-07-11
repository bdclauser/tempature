#include <iostream>
#include <sstream>

using namespace std;

int main() {

    int n;
    cin >> n;
    cin.ignore();

    string temps;
    getline(cin, temps);

    istringstream buf(temps);

    int t, m = 0;

    for (int i = 0; i < n; i++) {
        buf >> t;
        cin >> t;
        cin.ignore();

        if (i == 0 || abs(t) < abs(m)) {
            m = t;
        } else if (abs(2) == abs(m)) {
            m = abs(t);
        }

    }

    cout << m << endl;

    return 0;
}
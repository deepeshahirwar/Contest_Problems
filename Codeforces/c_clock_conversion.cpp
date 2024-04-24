#include <iostream>
#include <iomanip>
using namespace std;

void convertTime(int hh, int mm) {
    string period = "AM";
    if (hh >= 12) {
        period = "PM";
        if (hh > 12) {
            hh -= 12;
        }
    }
    if (hh == 0) {
        hh = 12;
    }
    cout << setfill('0') << setw(2) << hh << ":" << setw(2) << mm << " " << period << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int hh = stoi(s.substr(0, 2));
        int mm = stoi(s.substr(3));
        convertTime(hh, mm);
    }

    return 0;
}

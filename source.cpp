#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

int main() {
    while (true) {
        string path;
        ifstream f;
        string s;
        int res = 0;
        int i;

        while (!f.is_open()) {
            cout << "Enter the path: ";
            cin >> path;

            f.open(path);
        }

        while (getline(f, s)) {
            if (!s.empty() && s.at(0) != ' ') {
                i = 0;
                for (; s.at(i) != ' '; ++i) {}
                s.resize(i);
                res += atoi(s.c_str());
            }
        }

        cout << res << endl;
    }
    return 0;
}

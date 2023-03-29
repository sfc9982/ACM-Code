//
// Created by sfc9982 on 2023/3/19.
//

#include <algorithm>
#include <cmath>
#include <cstring>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <stack>
#include <string>

using namespace std;

map<string, string> major_third = {{"C", "E"}, {"C#", "F"}, {"D", "F#"}, {"D#", "G"}, {"E", "G#"}, {"F", "A"}, {"F#", "A#"}, {"G", "B"}, {"G#", "C"}, {"A", "C#"}, {"A#", "D"}, {"B", "D#"}};
map<string, string> minor_third = {{"C", "D#"}, {"C#", "E"}, {"D", "F"}, {"D#", "F#"}, {"E", "G"}, {"F", "G#"}, {"F#", "A"}, {"G", "A#"}, {"G#", "B"}, {"A", "C"}, {"A#", "C#"}, {"B", "D"}};

int main() {
    int T;
    cin >> T;
    while (T--) {
        string x, y, z;
        cin >> x >> y >> z;
        cout << (major_third[x] == y && major_third[y] == z ? x + "+" : (major_third[x] == y && minor_third[y] == z ? x : (minor_third[x] == y && minor_third[y] == z ? x + "-" : (minor_third[x] == y && major_third[y] == z ? x + "m" : "Unknown")))) << endl;
    }
    return EXIT_SUCCESS;
}

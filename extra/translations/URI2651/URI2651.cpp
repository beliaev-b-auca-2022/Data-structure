#include <iostream>
#include <set>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    for(int i = 0;i < s.size();i ++) {
        s[i] = tolower(s[i]);
    }
    string substr = "zelda";
    if(s.find(substr) != string::npos) {
        cout << "Link Bolado" << endl;
    }
    else {
        cout << "Link Tranquilo" << endl;
    }
    return 0;
}
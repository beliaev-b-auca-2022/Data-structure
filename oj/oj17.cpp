#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <string>
#include <queue>
#include <bitset>
#include <deque>
#include <stack>

using namespace std;

typedef long long ll;

string result = "";

string textEditorSimulation(string s) {
    stack<char> leftStack; 
    deque<char> rightStack; 
    ll l = 0;
    for (char c : s) {
        if (c == '<') {
            if (l == 0) {
                if (!rightStack.empty()) {
                    rightStack.pop_back();
                }
                else {
                    l = 1;
                    if (!leftStack.empty()) {
                        leftStack.pop();
                    }
                }
            }
            else {
                if (!leftStack.empty()) {
                    leftStack.pop();
                }
            }
        }
        else if (c == '[') {
            while (!leftStack.empty()) {
                rightStack.push_front(leftStack.top());
                leftStack.pop();
            }
            l = 1;
        }
        else if (c == ']') {
            l = 0;
        }
        else {
            if (l == 0) {
                rightStack.push_back(c);
            }
            else {
                leftStack.push(c);
            }
        }
    }
    while (!leftStack.empty()) {
        result = leftStack.top() + result;
        leftStack.pop();
    }
    while (!rightStack.empty()) {
        result += rightStack.front();
        rightStack.pop_front();
    }
    return result;
}

int main() {
    ll tt;
    cin >> tt;
    cin.ignore();
    while (tt--) {
        string text;
        getline(cin, text);
        result = "";
        string finalText = textEditorSimulation(text);
        cout << finalText << endl;
    }
    return 0;
}
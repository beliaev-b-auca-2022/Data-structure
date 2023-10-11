#include <iostream>
#include <string>

using namespace std;

string incrementString(const string &str) {
    string result = str;
    int n = str.length();
    int numLength = 0;
    for (int i = n - 1; i >= 0 && isdigit(str[i]); i--) {
        numLength++;
    }
    if (numLength == 0) {
        result += "1";
    } else {
        string numStr = str.substr(n - numLength);
        int num = stoi(numStr);
        num++;
        numStr = to_string(num);
        while (numStr.length() < numLength) {
            numStr = "0" + numStr;
        }
        result.replace(n - numLength, numLength, numStr);
    }
    return result;
}
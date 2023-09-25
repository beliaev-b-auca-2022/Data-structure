#include <string>

using namespace std; 

bool tidyNumber (int number) {
    string numStr = to_string(number);
    for (int i = 0; i < numStr.length() - 1; ++i) {
        if (numStr[i] > numStr[i + 1]) {
            return false;
        }
    }
    return true;
}


#include <string>
#include <array>

using namespace std;

bool scramble(const std::string& str1, const std::string& str2){
    array<int, 26> str1_count = {0};
    for (char c : str1) {
        str1_count[c - 'a']++;
    }
    for (char c : str2) {
        int index = c - 'a';
        if (str1_count[index] <= 0) {
            return false;
        }
        str1_count[index]--;
    }
    return true;
}
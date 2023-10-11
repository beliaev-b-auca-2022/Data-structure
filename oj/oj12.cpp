#include <string>

using namespace std;

string format_duration(int seconds) {
  if (seconds == 0) {
        return "now";
    }
    int years, days, hours, minutes;
    years = seconds / 31536000;  
    seconds %= 31536000;
    days = seconds / 86400; 
    seconds %= 86400;
    hours = seconds / 3600;  
    seconds %= 3600;
    minutes = seconds / 60; 
    seconds %= 60;
    string result;
    if (years > 0) {
        result += to_string(years) + " year";
        if (years > 1) result += "s";
    }
    if (days > 0) {
        if (!result.empty()) result += ", ";
        result += to_string(days) + " day";
        if (days > 1) result += "s";
    }
    if (hours > 0) {
        if (!result.empty()) result += ", ";
        result += to_string(hours) + " hour";
        if (hours > 1) result += "s";
    }
    if (minutes > 0) {
        if (!result.empty()) result += ", ";
        result += to_string(minutes) + " minute";
        if (minutes > 1) result += "s";
    }
    if (seconds > 0) {
        if (!result.empty()) result += ", ";
        result += to_string(seconds) + " second";
        if (seconds > 1) result += "s";
    }

    size_t last_comma = result.find_last_of(',');
    if (last_comma != string::npos) {
        result.replace(last_comma, 2, " and ");
    }
    return result;
}
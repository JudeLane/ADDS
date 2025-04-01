#include "Finder.h"


std::vector<int> Finder::findSubstrings(std::string s1, std::string s2) {
std::vector<int> result;
std::string prefix;
size_t previous = 0;

for(size_t i = 1; i <= s2.size(); i++) {
    prefix += s2[i-1];
    size_t found = s1.find(prefix, previous);
    if (found != std::string::npos) {
        result.push_back(found);
        previous = found;
    } else {
        result.push_back(-1);
        break;
    }
}
return result;
}

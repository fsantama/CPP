#include "StringReplacer.hpp"

std::string replaceAll(const std::string& content, const std::string& s1, const std::string& s2) {
    std::string result = content;
    size_t pos = 0;

    while ((pos = result.find(s1, pos)) != std::string::npos) {
        result.erase(pos, s1.length());
        result.insert(pos, s2);
        pos += s2.length();
    }

    return result;
}

#include <algorithm> // max
#include <string>
#include <vector>

#include "centerAlign.h"

typedef std::string::size_type string_size;
typedef std::vector<std::string>::size_type vec_size;

string_size width(const std::vector<std::string>& vec){
    string_size maxLen = 0;
    for(vec_size i = 0; i < vec.size(); ++i)
        maxLen = std::max(maxLen, vec[i].size());
    return maxLen;
}

std::vector<std::string> centerAlign(const std::vector<std::string>& vec){
    std::vector<std::string> ret;
    string_size maxLen = width(vec);

    // top border
    ret.push_back((std::string(maxLen + 4, '*')));

    // middle body
    for (string_size i = 0; i != vec.size(); ++i){
        std::string s;
        vec_size stringLength = vec[i].size();

        s.append("* ");

        string_size leftPad = (maxLen - stringLength) / 2;
        string_size rightPad = ((maxLen - stringLength) / 2) + ((maxLen - stringLength) % 2);

        s.append(std::string(leftPad, ' '));
        s.append(vec[i]);
        s.append(std::string(rightPad, ' '));

        s.append(" *");

        ret.push_back(s);
    }

    // bottom border
    ret.push_back((std::string(maxLen + 4, '*')));
    return ret;
}


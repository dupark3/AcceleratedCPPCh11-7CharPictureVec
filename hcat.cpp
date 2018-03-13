
#include <string>
#include <vector>

#include "hcat.h"
#include "width.h"


template <class T>
T hcat(const T& firstPic, const T& secondPic){
    T ret;

    typedef std::string::size_type string_size;
    typedef typename T::size_type vec_size;

    string_size maxLen = width(firstPic);
    vec_size i = 0;
    vec_size j = 0;
    vec_size firstSize = firstPic.size();
    vec_size secondSize = secondPic.size();

    while (i != firstSize || j != secondSize){
        std::string s;

        // start with a lien from the first picture if still within range and then increment
        if (i != firstSize)
            s = firstPic[i++];

        // add appropriate number of pad for alignment
        s.append(std::string(maxLen - s.size() + 1, ' '));

        // append a line of the second picture and then increment
        if (j != secondSize)
            s.append(secondPic[j++]);

        ret.push_back(s);
    }

    return ret;
}


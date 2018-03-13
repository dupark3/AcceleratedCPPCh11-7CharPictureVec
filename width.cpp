#include <string>

typedef std::string::size_type string_size;

template <class T>
string_size width(const T& vec){
    typedef typename T::size_type vec_size;

    string_size maxLen = 0;
    for(vec_size i = 0; i < vec.size(); ++i)
        maxLen = std::max(maxLen, vec[i].size());
    return maxLen;
}


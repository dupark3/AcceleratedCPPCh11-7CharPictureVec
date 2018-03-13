// Accelerated C++ Exercise 5-5 Page 100
// write a function named center(const vector<string>&) that will return a centered frame

#include <iostream>
#include <string>
#include <vector>

#include "centerAlign.h"

typedef std::vector<std::string>::size_type vec_size;

int main() {

    // receive original picture from user and store in vector
    std::string s;
    std::vector<std::string> input;
    while(getline(std::cin, s))
        input.push_back(s);

    // copy returned vector of centered and framed text into new vector
    std::vector<std::string> centered_text = centerAlign(input);

    // print centered, framed text
    for (vec_size i = 0; i != centered_text.size(); ++i){
        std::cout << centered_text[i] << std::endl;
    }

    return 0;
}

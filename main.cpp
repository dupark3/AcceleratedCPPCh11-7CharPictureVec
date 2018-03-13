// Accelerated C++ Exercise 5-5 Page 100
// write a function named center(const vector<string>&) that will return a centered frame

#include <iostream>
#include <string>
#include "Vec.h"

#include "centerAlign.h"
#include "hcat.h"

typedef Vec<std::string>::size_type vec_size;

int main() {

// FRAME AND CENTER ALIGN
    // receive original picture from user and store in vector
    std::string s;
    Vec<std::string> input;
    while(getline(std::cin, s))
        input.push_back(s);
    std::cin.clear();

    // copy returned vector of centered and framed text into new vector
    Vec<std::string> centered_text = centerAlign(input);

    // print centered, framed text
    for (vec_size i = 0; i != centered_text.size(); ++i){
        std::cout << centered_text[i] << std::endl;
    }



// HORIZONTALLY CONCATENATE
    // store first picture into vec
    std::cout << std::endl << "Input first picture: " << std::endl;
    Vec<std::string> firstPicture;
    while(getline(std::cin, s))
        firstPicture.push_back(s);

    // reset error state of console input stream
    std::cin.clear();

    // store second picture into vector
    std::cout << std::endl << "Input second picture: " << std::endl;
    Vec<std::string> secondPicture;
    while(getline(std::cin, s))
        secondPicture.push_back(s);
    
    std::cout << std::endl;

    // horizontally concatenate two pictures
    Vec<std::string> finalPicture = hcat(firstPicture, secondPicture);
    for (vec_size i = 0; i != finalPicture.size(); ++i){
        std::cout << finalPicture[i] << std::endl;
    }


    return 0;
}

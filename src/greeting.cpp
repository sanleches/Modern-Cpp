#include "greeting.hpp"
#include <iostream>
#include <algorithm>

// Sring Factory
std::string make_greeting(){
    return "Hello Nikki!";
}

// Perform Greeting
void greet(std::string message){
    if (message.empty()) {
        throw std::invalid_argument("message is empty");
        return;
    }

    // Ensure all characters are printable. Cast to unsigned char for isprint.
    if (!std::all_of(message.begin(), message.end(),
                 [](char ch){ return std::isprint(static_cast<unsigned char>(ch)); })) {
        throw std::invalid_argument("message contains non-printable characters");
        return;
    }

    std::cout << message << std::endl;
}
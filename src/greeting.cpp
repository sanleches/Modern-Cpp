
#include "greeting.hpp"
#include <iostream>

// Sring Factory
std::string make_greeting(){
    return "Hello Nikki!";
}

// Perform Greeting
void greet(std::string message){
    std::cout << message << std::endl;
}
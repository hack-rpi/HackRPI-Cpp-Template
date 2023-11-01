#include <iostream>

int main(int argc, char** argv){
    //Delete these before you use arguments
    (void) argc;
    (void) argv;

    std::cout << "Welcome to HackRPI!" << std::endl;
    std::cout << "Enter your name: " << std::endl;
    std::string userInput;
    std::getline(std::cin, userInput);
    std::cout << "Hello, " << userInput << std::endl;
}
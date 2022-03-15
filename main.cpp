#include <iostream> // cout; cin
#include <string>   // strings
#include <string_view> // string_views

int main() {
    
    // create two empty strings
    std::string first_name {};
    std::string surname {};

    // input for first_name
    std::cout << "\nPlease enter your first name: ";
    std::getline(std::cin,first_name);
    
    std::cout << "\nPlease enter your surname: ";
    std::getline(std::cin,surname);

    // output tests
    //std::cout << "your first name is: " << first_name << std::endl;
    //std::cout << "your surname is: " << surname << std::endl;
    std::cout << "Your name is " + first_name + " " + surname << std::endl;
 
};
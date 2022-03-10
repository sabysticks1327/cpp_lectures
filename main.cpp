/*
(1) ctrl + shift + p
(2) search for "git commit"
(3) then type a comment
(4) ctrl + shift + p
(5) then search "git push"
*/

#include <iostream>
#include <string>

// [7] include string_view
#include <string_view>

int main() {
        /* [1] strings instead of character arrays
                * easier to assign values
                * easier to concatenate (adding values)
                * have many more methods and functions available
                        * swap

           [2] string operations via string documentation
                * for example using the find operator                
        */


        std::string basket = "Pineapples, Bananas, Pears, Bananas, Peaches";
        
        // size_t is just like an int
        //std::size_t found = basket.find("apples");
        //std::cout << "The value of found is: " << found << std::endl;
        
        // using substrings
        std::string second_fruit = basket.substr(0, 10);

        std::cout << "The substring value is: " << second_fruit << std::endl;
        

        /* // Work from lesson
        std::string str1 = "Message One";
        std::string str2 = "Message Two";
        
        std::string_view str_v1 = str1;
        std::string_view str_v2 = str2;

        str_v1 = str2;

        str2 = "Message Three";

        str_v2 = str2;

        std::swap(str_v1,str_v2);
        
        std::cout << "str1: " << str1 << " length: " << str1.length() << std::endl;
        std::cout << "str2: " << str2 << " length: " << str2.length() << std::endl;
        std::cout << "str_v1: " << str_v1 << " length: " << str_v1.length() << std::endl;
        */


    
};
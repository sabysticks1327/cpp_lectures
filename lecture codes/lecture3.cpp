/*
(1) ctrl + shift + p
(2) search for "git commit"
(3) then type a comment
(4) ctrl + shift + p
(5) then search "git push"
*/

#include <iostream> // cout; cin
#include <string>   // strings
#include <string_view> // string_views

int main() {
        /* [1] strings instead of character arrays
                * easier to assign values
                * easier to concatenate (adding values)
                * have many more methods and functions available
                        * swap     
                        * find
                        * length
                        * substr
                        * ...

           [2] string operations via "cpp string documentation"
                * for example using the find operator                
        */

        /*
        // string of languages
        std::string languages = "English, French, French Latin, Bengali, Turkish, Hindi, Farsi, Korean, Catonese, Spanish, Arabic, Urdu, Latin, German";
        
        // language we're searching for
        std::string language_of_interest = "Hindi";

        // position of the searched language
        // big_string.find(search_item) -> returns position of search_item
        std::size_t position = languages.find(language_of_interest);

        // print the searched language and the next language
        std::size_t length_of_language = language_of_interest.length();

        std::cout << "\nThe first language is: " << languages.substr(position, length_of_language);

        //std::cout << "\nThe next language is: " << languages.substr(position,0);
       


        std::string colours {"Blue, Yellow, Green, Red"};

        // std::string some_colours {colours.substr(6,13)};
        // std::string_view view_1 {some_colours}; 
        //std::cout << view_1;

        std::cout << "Colours I like: " << colours << std::endl; 

        std::string favourite {"Yellow"};
        std::size_t position {colours.find(favourite)};

        std::cout << "Position of " << favourite << " " << position << std::endl; 
        
        std::size_t new_position {position + favourite.length() + 2};

        std::cout << "Position of next colour: " << new_position << std::endl; 
        
        std::string substring_remaining {colours.substr(new_position,colours.length() - new_position)};

        // now we look next comma
        // that will give length of next colour
 */








        //std::string basket = "Pineapples, Bananas, Pears, Bananas, Peaches";
        

        
        // size_t is just like an int
        //std::size_t found = basket.find("apples");
        //std::cout << "The value of found is: " << found << std::endl;
        
        // using substrings





        /*
        std::string fruit_of_interest = "Peaches";
        std::size_t position_of_fruit = basket.find(fruit_of_interest);
        std::string second_fruit = basket.substr(position_of_fruit, fruit_of_interest.length());
        std::cout << "The substring value is: " << second_fruit << std::endl;
        */

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
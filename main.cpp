#include <algorithm>
#include <ios>
#include <iostream>
#include <string>
#include <vector>
#include <cstdio>
constexpr auto MAX_ITEMS      = 30;
constexpr auto MAX_MODEL_NAME = 64; 


enum class Product_Name
{
        Invalid = -1,
        eggs,
        bread,
        fruits,
        vegetables,
        milk,
        yogurt,
        tea,
        coffee,
        sugar,
        salt,
        count
};
/// @see https://github.com/c2akula/cpp_lectures/blob/4add58c6acc595b622de7311fa8f60b44193d46e/main.cpp
constexpr std::string_view PRODUCT_NAMES[static_cast<int>(Product_Name::Count)] = {
    [static_cast<int>(Product_Name::eggs)]          = "eggs",
    [static_cast<int>(Product_Name::bread)]         = "bread",
    [static_cast<int>(Product_Name::fruits)]        = "fruits",
    [static_cast<int>(Product_Name::vegetables)]     = "vegetables",
    [static_cast<int>(Product_Name::milk)]          = "milk",
    [static_cast<int>(Product_Name::yogurt)]        = "yogurt",
    [static_cast<int>(Product_Name::tea)]           = "tea",
    [static_cast<int>(Product_Name::coffee)]        = "coffee",
    [static_cast<int>(Product_Name::sugar)]          = "sugar",
    [static_cast<int>(Product_Name::salt)]          = "salt",
};
constexpr auto isValidProduct(Product_Name prod) {
    return prod > Product_Name::begin && prod < Product_Name::end;
}
constexpr auto get_product_name(Product_Name prod)
{


        if (!is_valid_product(prod)) { return std::string_view {""}; }

        return PRODUCT_NAMES[static_cast<int>(prod)];
         // views the list of products
        void printItems() {
    cout << "Products List\n";
    for (int i = 1; i < (int)Product::end; i++) {
        cout << i  << " - " << getProductName(i) << endl;
    }
}

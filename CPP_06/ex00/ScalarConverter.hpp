#ifndef SCALAR_CONVERTER_H
# define SCALAR_CONVERTER_H

#include <iostream>
#include <string>
#include <iomanip> //for the static casting
#include <climits>

class ScalarConverter
{
    //the ScalarConverter class doesn't store or manage any data
    //so instatiating objects of that class would be pointless and misleading
    private:
    ScalarConverter();
    ScalarConverter(const ScalarConverter &other);
    ScalarConverter& operator=(const ScalarConverter &other);
    ~ScalarConverter();

    public:
    static size_t stringLength(const std::string& str);
    static bool isPrintable(char c);
    static void convert(std::string literal);
    static void returnType(std::string literal);
    static bool isDigit(char c);

};


#endif
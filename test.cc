#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "program.cc"

//simple single line character counting test
TEST_CASE("charCount Test One, standard", "[program,countChar]") 
{
    string param = "HughDillon";

    REQUIRE(countChar(param) == 10);
}

//this test ensures that when the string is two lines in a file it counts both lines
TEST_CASE("charCount Test Two, standard", "[program,countChar]") 
{
    string param = "HughDillon\ngoestoOhioUniversity";

    REQUIRE(countChar(param) == 31);
}

//this test checks to ensure that all white spaces are counted
TEST_CASE("charCount Test Three, standard", "[program,countChar]") 
{
    string param = "HughDillon\n goes to Ohio University";

    REQUIRE(countChar(param) == 35);
}
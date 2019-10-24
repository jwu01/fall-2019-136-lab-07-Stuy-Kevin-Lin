#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN

#include "doctest.h"
#include "funcs.h"


// TEST_CASE("Sample Test"){
//   CHECK(fact(5)==120);  
// }

TEST_CASE("removeLeadingSpaces") {
    CHECK(removeLeadingSpaces("        //Test line ") == "//Test line ");
    CHECK(removeLeadingSpaces("       int x = 1;  ") == "int x = 1;  ");
}

TEST_CASE("countChar") {
    CHECK(countChar("waffles are cool", ' ') == 2);
    CHECK(countChar("{}{}{}{}{{", '{') == 6);
}

TEST_CASE("formatCode") {
    CHECK(formatCode("example2.cpp") == "#include <iostream>\n\nint main() {\n\tstd::cout << \"Hello world!\";\n}\n");
    CHECK(formatCode("example.cpp") == readFile("formattedExample.cpp"));
}
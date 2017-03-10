#include "catch.hpp"

unsigned int Mod(int number ) {
    return number < 0 ? -1*number : number;
}

TEST_CASE( "Mod", "[mod]" ) {
    REQUIRE( Mod(1) == 1 );
    REQUIRE( Mod(-2) == 2 );
    REQUIRE( Mod(0) == 0 );
    REQUIRE( Mod(10) == 10 );
}

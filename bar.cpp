#include "catch.hpp"

int Invert( int number ) {
    return -1*number;
}

TEST_CASE( "Invert", "[invert]" ) {
    REQUIRE( Invert(1) == -1 );
    REQUIRE( Invert(2) == -2 );
    REQUIRE( Invert(0) == 0 );
    REQUIRE( Invert(-10) == 10 );
}

#include "catch.h"
#include <EgeMath\Vector.hpp>

using namespace ege;

TEST_CASE( "Vectors are tested", "[Vector]" ) {
	Vec2 a(1,2),b(2,4),c(1,2);

    REQUIRE( a == c );
    CHECK( (a + c) == b );
    CHECK( b == a + c );
    CHECK( b == (a + c));
}
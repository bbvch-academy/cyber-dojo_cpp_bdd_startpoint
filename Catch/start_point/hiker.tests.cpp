#include <hiker.hpp>
#include "catch.hpp" 

SCENARIO("Life the universe and everything", "[hhgttg]" )
{
    GIVEN("The Hitchhiker's Guide to the Galaxy")
    {
        auto hicker = Hicker{};

        WHEN("Deep Thought is asked to calculate the Answer to the Ultimate Question of Life, the Universe, and Everything")
        {
            auto answer = hicker.answer();

            THEN("The Answer is 42")
            {
                REQUIRE( answer == 42 );
            }
        }
    }
}

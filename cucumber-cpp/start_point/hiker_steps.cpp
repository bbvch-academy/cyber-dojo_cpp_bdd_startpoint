#include <gtest/gtest.h>
#include <cucumber-cpp/autodetect.hpp>

namespace
{

using cucumber::ScenarioScope;

struct HikerCtx
{
    size_t result = 0;
};

GIVEN("^the hitch-hiker selects some tiles$")
{
}

WHEN("^they spell (\\d+) times (\\d+)")
{
    REGEX_PARAM(size_t, multiplier);
    REGEX_PARAM(size_t, multiplicand);
}

THEN("^the score is (\\d+)$")
{
    REGEX_PARAM(size_t, result);
    ScenarioScope<DummyCtx> context{};
    ASSERT_EQ(result, context->result);
}


}//namespace

#include "hiker.hpp"
#include <igloo/igloo_alt.h>
using namespace igloo;

When(Hiker)
{
  Then(Life_the_universe_and_everything)
  {
    Assert::That(answer(), Equals(42));
  }
};

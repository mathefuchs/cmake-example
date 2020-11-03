#include <gtest/gtest.h>

#include <libA/libApi.hpp>

namespace libATests
{
    TEST(libATest, SomeSimpleExamples)
    {
        ASSERT_EQ(libA::foo(3, 4), 7);
        ASSERT_EQ(libA::foo(6, 4), 10);
    }

} // namespace libATests

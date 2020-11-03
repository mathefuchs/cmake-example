#include <gtest/gtest.h>

#include <libB/libApi.hpp>

namespace libBTests
{
    TEST(libBTest, SomeSimpleExamples)
    {
        ASSERT_EQ(libB::bar(3, 4), 12);
        ASSERT_EQ(libB::bar(6, 4), 15);
    }

} // namespace libBTests

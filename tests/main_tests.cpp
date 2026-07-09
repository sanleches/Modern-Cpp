#include <gtest/gtest.h>
#include "greeting.hpp"

TEST(GreetingTests, MakeGreetingReturnsExpectedMessage) {
    EXPECT_EQ(make_greeting(), "Hello Nikki!");
}
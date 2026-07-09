#include <gtest/gtest.h>
#include "greeting.hpp"

// Test that the greeting factory returns the expected message.
TEST(GreetingTests, MakeGreetingReturnsExpectedMessage) {
    EXPECT_EQ(make_greeting(), "Hello Nikki!");
}

// Test that the greeting function writes the expected output to stdout.
TEST(GreetingTests, GreetPrintsFormattedExpectedMessage) {
    testing::internal::CaptureStdout();
    std::string teststring = "Random String with a special character!";
    greet(teststring);
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Random String with a special character!\n");
}

//Test the captured stdout in combination with the string factory function to ensure the output is as expected.
TEST(GreetingTests, GetPrintFormattedWhilePassingStringFactoryString) {
    testing::internal::CaptureStdout();
    greet(make_greeting());
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_EQ(output, "Hello Nikki!\n");
}

// Test that the greeting function throws an exception when given an empty string.
TEST(GreetingTests, GreetThrowsExceptionOnEmptyString) {
    try {
        greet("");// Call greet with an empty string to trigger the exception
        FAIL() << "Expected std::invalid_argument to be thrown"; // If no exception is thrown, the test fails
    } catch (const std::invalid_argument& ex) {// Catch the expected exception and making a reference ex to exception object
        EXPECT_STREQ(ex.what(), "message is empty"); //Expect String Equal of reference (ex) to the thrown message
    } catch (...) {// Catch any other unexpected exceptions
        FAIL() << "Expected std::invalid_argument to be thrown";// If an unexpected exception is thrown, the test fails
    }
}

TEST(GreetingTests, GreetThrowsExceptionOnNonPrintableCharacters) {
    try {
        greet("Hello\x01World"); // Call greet with a string containing a non-printable character
        FAIL() << "Expected std::invalid_argument to be thrown"; // If no exception is thrown, the test fails
    } catch (const std::invalid_argument& ex) { // Catch the expected exception and making a reference ex to exception object
        EXPECT_STREQ(ex.what(), "message contains non-printable characters"); //Expect String Equal of reference (ex) to the thrown message
    } catch (...) { // Catch any other unexpected exceptions
        FAIL() << "Expected std::invalid_argument to be thrown"; // If an unexpected exception is thrown, the test fails
    }
}  
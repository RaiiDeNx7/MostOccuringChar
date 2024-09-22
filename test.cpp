//g++ -o test test.cpp main.cpp -lgtest -lgtest_main -pthread ./test

#include "main.cpp"
#include <gtest/gtest.h>

// Test the counting of characters
TEST(CharacterCountTest, BasicCounts) {
    int indexes[128] = {0};
    count_characters("ABBA", indexes);

    EXPECT_EQ(indexes['A'], 2);
    EXPECT_EQ(indexes['B'], 2);
    EXPECT_EQ(indexes['C'], 0);
}

// Test the most common character function
TEST(MostCommonCharTest, BasicFunctionality) {
    int indexes[128] = {0};
    count_characters("ABBA", indexes);
    
    char most_common = find_most_common_char(indexes);
    EXPECT_EQ(most_common, 'A') << "Expected 'A' or 'B' since both appear twice";
}

// Test the entire process_string function
TEST(ProcessStringTest, UppercaseAndMostCommon) {
    EXPECT_EQ(process_string("hello world"), "L 3");
    EXPECT_EQ(process_string("aAaBbBccc"), "C 3");
    EXPECT_EQ(process_string(""), " 0");  // Test empty string
}

// Test with special characters
TEST(ProcessStringTest, SpecialCharacters) {
    EXPECT_EQ(process_string("123123!"), "1 2");
    EXPECT_EQ(process_string("!!??@@"), "! 2");
}
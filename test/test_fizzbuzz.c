#include "unity_fixture.h"
#include "fizzbuzz.h"

TEST_GROUP(FizzBuzz);

TEST_SETUP(FizzBuzz) {}

TEST_TEAR_DOWN(FizzBuzz) {}

TEST(FizzBuzz, returns1_whenPassed1) {
    TEST_ASSERT_EQUAL_STRING("1", fizzbuzz(1));
}

TEST(FizzBuzz, returnsFizz_whenPassed3) {
    TEST_ASSERT_EQUAL_STRING("Fizz", fizzbuzz(3));
}

TEST(FizzBuzz, returnsBuzz_whenPassed5) {
    TEST_ASSERT_EQUAL_STRING("Buzz", fizzbuzz(5));
}

TEST(FizzBuzz, returnsFizzBuzz_whenPassed15) {
    TEST_ASSERT_EQUAL_STRING("FizzBuzz", fizzbuzz(15));
}

TEST(FizzBuzz, returnsFizzBuzz_whenPassed30) {
    TEST_ASSERT_EQUAL_STRING("FizzBuzz", fizzbuzz(30));
}


TEST_GROUP_RUNNER(FizzBuzz) {
    RUN_TEST_CASE(FizzBuzz, returns1_whenPassed1);
    RUN_TEST_CASE(FizzBuzz, returnsFizz_whenPassed3);
    RUN_TEST_CASE(FizzBuzz, returnsBuzz_whenPassed5);
    RUN_TEST_CASE(FizzBuzz, returnsFizzBuzz_whenPassed15);
    RUN_TEST_CASE(FizzBuzz, returnsFizzBuzz_whenPassed30);
}
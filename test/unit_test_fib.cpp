#include "gtest/gtest.h"
#include "fibonacci_sequence/fib.h"
#include "util.h"

TEST(fib, test) {
    /*
     * what's the input
     * what should be the output
     * is our code producing the right output
     */
    const uint32_t expects[30] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34,
                                  55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181,
                                  6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229};

    for (int i = 0; i < 30; ++i) {
        uint actual = fib(i);
        uint expect = expects[i];
        ASSERT_EQ(expect, actual);
    }
}
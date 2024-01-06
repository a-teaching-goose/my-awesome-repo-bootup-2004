#include "fib.h"

/*
 * [0, 1, 1, 2, 3, 5, ....]
 */
uint fib(const uint n) {    // nth fib number
    uint *data = new uint[n + 1];
    if (n < 2) {
        return n;
    }

    data[0] = 0;
    data[1] = 1;

    for (int i = 2; i <= n; ++i) {
        data[i] = data[i - 1] + data[i - 2];
    }

    return data[n];

}
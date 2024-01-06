#include "fib.h"

/*
 * [0, 1, 1, 2, 3, 5, ....]
 */
uint fib(const uint n) {    // nth fib number
    if (n < 2) {
        return n;
    }
    uint *data = new uint[n + 1];

    data[0] = 0;
    data[1] = 1;

    for (int i = 2; i <= n; ++i) {
        data[i] = data[i - 1] + data[i - 2];
    }

    uint result = data[n];
    delete[]data;
    return result;
}

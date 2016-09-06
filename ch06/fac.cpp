#include "Chapter6.h"

#include <stdexcept>
#include <cstddef>

size_t fac(size_t n)
{
    if (n < 0) {
        throw std::runtime_error("n must be less than 0");
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * fac(n - 1);
    }
}

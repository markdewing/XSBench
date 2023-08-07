
#include <ompx/sort_by_key.h>

// C interface
extern "C" {
void ompx_device_sort_by_key(int* keys_first, int* keys_last, double* values_first)
{
    ompx::device::sort_by_key(keys_first, keys_last, values_first);
}
}


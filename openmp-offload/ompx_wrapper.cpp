
#include <ompx/sort.h>

// C interface
extern "C" {
void ompx_device_sort_by_key(int* keys_first, int* keys_last, double* values_first)
{
    ompx::device::sort_by_key(keys_first, keys_last, values_first);
}

void ompx_device_sort_by_key_n(int* keys_first, uint32_t NumElements, double* values_first)
{
    ompx::device::sort_by_key(keys_first, NumElements, values_first);
}
}


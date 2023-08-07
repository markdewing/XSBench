
#ifdef __cplusplus
extern "C" {
#endif
void ompx_device_sort_by_key(int* keys_first, int* keys_last, double* values_first);
void ompx_device_sort_by_key_n(int* keys_first, uint32_t len, double* values_first);

#ifdef __cplusplus
}
#endif



Malloc() and free() have a very simple interface: malloc() takes a size and returns a pointer to the allocated memory block of that size,
 free() takes a previously allocated pointer and frees it. void* malloc(size_t size); void free(void* ptr); Then there is also calloc() ,
   which allocates memory that has been zeroed.

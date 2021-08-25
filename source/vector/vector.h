#ifndef VECTOR_H
#define VECTOR_H

#include <stddef.h>
#include <stdbool.h>


typedef struct _Vector vector_t;


vector_t *vector_cosntruct(size_t width, size_t capacity, double increment, void (*free_data)(void *data), int (*compare)(const void *first, const void *second));

void vector_free(vector_t *vector);
bool vector_trim(vector_t *vector);
bool vector_clear(vector_t *vector);

size_t vector_size(vector_t *vector);
size_t vector_capacity(vector_t *vector);

#endif // VECTOR_H

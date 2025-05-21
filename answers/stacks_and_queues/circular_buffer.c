#include <stdlib.h>
typedef struct {
    int* arr;
    int capacity;
    int head;
    int tail;
    int count;
} CircularBuffer;

CircularBuffer* create_circular_buffer(int capacity) {
    CircularBuffer *ourBuffer = (CircularBuffer*)malloc(sizeof(CircularBuffer));
    if (ourBuffer == NULL) {
        return NULL; //Malloc error
    }
    int* newArr= (int*) malloc (capacity * sizeof(int));
    if (!newArr) {
        return NULL;
    }
    *ourBuffer = (CircularBuffer){newArr, capacity, 0, 0, 0};
    return ourBuffer;
}
void destroy_cb(CircularBuffer* cb) {
    free(cb->arr);
    free(cb);
}
int cb_is_full(const CircularBuffer* cb) {
    return cb->capacity == cb->count;
}
int cb_is_empty(const CircularBuffer* cb) {
    return 0== cb->count;
}
int cb_enqueue(CircularBuffer* cb, int item) {
    if (cb==NULL || cb_is_full(cb)) return 0;
    int *position = (cb->arr + cb->tail);
    *position = item;
    cb->tail = (cb->tail+1) % cb->capacity;
    cb->count++;
    return 1;
}
int cb_dequeue(CircularBuffer* cb, int* item_ptr) {
    if (cb==NULL || cb_is_empty(cb)) return 0;
    int *position = (cb->arr + cb->head);
    *item_ptr = *position;
    *position = 0; //Or whatever the empty value is
    cb->head = (cb->head +1) % cb->capacity;
    cb->count++;
    return 1;
}

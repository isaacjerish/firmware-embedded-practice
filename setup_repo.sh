#!/bin/bash

# Create folders
mkdir -p arrays strings linked_lists stacks_and_queues bit_manipulation memory

# Questions and answers folders per topic
for topic in arrays strings linked_lists stacks_and_queues bit_manipulation memory misc; do
    mkdir -p "questions"
    touch "questions/$topic.md"

    mkdir -p "answers/$topic"
done

# Utils
touch utils/mock_registers.h

# Create example C stubs for arrays
touch arrays/binary_search.c
touch arrays/two_pointer_search.c
touch arrays/sliding_window.c
touch arrays/kadane_algorithm.c

# Strings
touch strings/reverse_string.c

# Linked lists
touch linked_lists/reverse_singly.c
touch linked_lists/reverse_doubly.c
touch linked_lists/merge_two_lists.c
touch linked_lists/add_delete_search.c
touch linked_lists/find_middle.c
touch linked_lists/find_nth_from_end.c
touch linked_lists/detect_loop.c

# Stacks and Queues
touch stacks_and_queues/stack_array.c
touch stacks_and_queues/stack_linkedlist.c
touch stacks_and_queues/queue_linkedlist.c
touch stacks_and_queues/queue_array.c
touch stacks_and_queues/circular_buffer.c

# Bit manipulation
touch bit_manipulation/atoi_itoa.c
touch bit_manipulation/itob_float_to_bin.c
touch bit_manipulation/binary_add_sub.c
touch bit_manipulation/twos_complement.c
touch bit_manipulation/endianness_swap.c
touch bit_manipulation/range_of_8bit.c
touch bit_manipulation/float_repr.c

# Memory
touch memory/aligned_malloc_free.c
touch memory/static_malloc_free.c


echo "✅ Directory structure created and stub files generated."

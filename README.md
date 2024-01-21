# Sorting Algorithms Library

This is a C library that provides implementations of various sorting algorithms. The library includes functions for bubble sort, selection sort, insertion sort, and quick sort. These algorithms can be used to efficiently sort arrays of integers.

## Table of Contents

- [Introduction](#introduction)
- [List of Sorting Algorithms](#list-of-sorting-algorithms)
- [Usage](#usage)
- [Authors](#authors)

## Introduction

The `sort.h` header file defines the interface for the sorting algorithms implemented in this library. It also includes a doubly linked list structure, `listint_t`, which can be used for sorting linked lists.

## List of Sorting Algorithms

1. **Bubble Sort:** `void bubble_sort(int *array, size_t size);`
   - Description: Sorts an array using the bubble sort algorithm.
   
2. **Selection Sort:** `void selection_sort(int *array, size_t size);`
   - Description: Sorts an array using the selection sort algorithm.

3. **Insertion Sort (List):** `void insertion_sort_list(listint_t **list);`
   - Description: Sorts a doubly linked list using the insertion sort algorithm.

4. **Quick Sort:** `void quick_sort(int *array, size_t size);`
   - Description: Sorts an array using the quick sort algorithm.

## Usage

To use the sorting algorithms provided by this library, include the `sort.h` header file in your C program and link with the corresponding source file.

```c
#include "sort.h"

int main(void) {
    int array[] = {4, 2, 7, 1, 9, 3};
    size_t size = sizeof(array) / sizeof(array[0]);

    // Example usage of quick sort
    quick_sort(array, size);

    // Additional code...

    return 0;
}
```
## Authors
- Ravan Asadov
- Hamid Hamidbeyli

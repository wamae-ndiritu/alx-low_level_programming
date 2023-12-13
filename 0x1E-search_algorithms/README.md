# C - Search Algorithms

This repository contains implementations of various search algorithms in C. The goal is to provide clear and efficient solutions for searching elements in arrays.

## Table of Contents

1. [Linear Search Implementation](./0-linear.c)
2. [Binary Search Implementation](./1-binary.c)
3. [Linear Search Time Complexity](./2-O)
4. [Linear Search Space Complexity](./3-O)
5. [Binary Search Time Complexity](./4-O)
6. [Binary Search Space Complexity](./5-O)
7. [Space Complexity the below function](./6-O)
```
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
```

## Linear Search

The linear search algorithm involves iterating through each element in an array until the target element is found.

### Implementation

The `linear_search` function takes an array, its size, and a value to search for, and returns the index of the first occurrence.

```c
// Example usage
int result = linear_search(arr, size, value);
```

## Binary Search

Binary search is a more efficient algorithm that works on sorted arrays by dividing the search space in half.

### Implementation

The `binary_search` function performs a binary search on a sorted array, returning the index of the target value.

```
// Example usage
int result = binary_search(arr, size, value);
```

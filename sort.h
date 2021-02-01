#ifndef SORT_H
#define SORT_H

/* headers */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;


/* Functions prototypes */
void selection_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void swap_Array(int *array, size_t j, size_t k);
int _putchar(char *s);
int _strlen(char *s);
char *_strcat(char *dest, char *c);

#endif /* SORT_H */

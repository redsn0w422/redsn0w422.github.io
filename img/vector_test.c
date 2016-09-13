/**
 * Machine Problem: Vector
 * CS 241 - Fall 2016
 */

#include "vector.h"
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <stdlib.h>
void *my_copy_ctor(void *elem) {
	char *str = elem;
	assert(str);
	return strdup(str);
}

void my_destructor(void *elem) { 
	free(elem); 
}

void print_array(Vector * vector) {
	printf("s: %zu c: %zu\n", Vector_size(vector), Vector_capacity(vector));
	for (size_t i = 0; i < Vector_size(vector); i++) {
		printf("\t%zu => %s\n", i, Vector_get(vector, i));
	}
}

int main() { 
	Vector * v = Vector_create(my_copy_ctor, my_destructor);
	print_array(v);
	// char * str = "Hello World!";

	Vector_resize(v, 11);
	print_array(v);
	// Vector_append(v, NULL);
	Vector_resize(v, 20);
	print_array(v);
	// Vector_resize(v, 5);
	// Vector_insert(v, 11, str);

	// print_array(v);
	// for (int i = 0; i < 1000; i++) {
	// 	char str[15];
	// 	sprintf(str, "%d", i);
	// 	Vector_append(v, str);
	// }

	// print_array(v);

	// Vector_resize(v, 2);

	// char * str = "number is GONE!";

	// Vector_set(v, 1, str);

	// print_array(v);

	// for (size_t i = Vector_size(v) - 1; i > 0; i--) {
	// 	if (i%2 == 0) {
	// 		Vector_delete(v, i);
	// 	}
	// }

	// print_array(v);

	// char str[15];
	// sprintf(str, "%d", 555);
	// Vector_insert(v, 0, str);

	// print_array(v);

	// sprintf(str, "%d", 222);
	// Vector_insert(v, 5, str);

	// print_array(v);

	// sprintf(str, "%d", 111);
	// Vector_set(v, 0, str);

	// print_array(v);

	// for (size_t i = 0; i < 501; i++) {
	// 	sprintf(str, "%zu", i);
	// 	Vector_insert(v, i, str);
	// }

	// print_array(v);

	// for (size_t i = 500; i > 5; i--) {
	// 	Vector_delete(v, i);
	// }

	// print_array(v);
	// printf("1 s:%zu c:%zu\n", Vector_size(v), Vector_capacity(v));

	// for (size_t i = (Vector_size(v)-1); i > 10; i--) {
	// 	if (i%2 == 0) {
	// 		Vector_delete(v, i);
	// 	}
	// }

	// printf("2 s:%zu c:%zu\n", Vector_size(v), Vector_capacity(v));

	Vector_destroy(v);

	return 0; 
}
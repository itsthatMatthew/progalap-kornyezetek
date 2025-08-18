#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED

#include <stdlib.h>

struct student
{
  char neptun[7];
  unsigned int age;
};

void student_array_sort(struct student* students, size_t array_size);
void student_array_print(struct student* student, size_t num_of_students);

#endif /* STUDENT_H_INCLUDED */
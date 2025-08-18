#include "student/student.h"
#include <stdio.h>

static int student_age_compare(const void* left_void, const void* right_void)
{
  const struct student* left_student = (const struct student*)left_void;
  const struct student* right_student = (const struct student*)right_void;

  if (left_student->age > right_student->age) return 1;
  if (left_student->age < right_student->age) return -1;
  return 0;
}

void student_array_sort(struct student* students, size_t array_size)
{
  qsort((void*)students, array_size, sizeof(struct student), student_age_compare);
}

void student_array_print(struct student* students, size_t num_of_students) {
  printf("| NEPTUN | AGE |\n|--------|-----|\n");
  for (unsigned idx = 0; idx < num_of_students; ++idx)
  {
    printf("| %6s | %3u |\n", students[idx].neptun, students[idx].age);
  }
}
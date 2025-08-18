#include "student/student.h"
#include <stdio.h>

int main()
{
  struct student students[] =
  {
    {"NEPTUN", 23},
    {"GOLYAH", 19},
    {"OKTATO", 37},
    {"VEGZOS", 25},
  };

  const size_t students_len = sizeof(students) / sizeof(*students);

  printf("Unsorted students array:\n");
  student_array_print(students, students_len);

  student_array_sort(students, students_len);

  printf("Students have been sorted by age:\n");
  student_array_print(students, students_len);

  return 0;
}
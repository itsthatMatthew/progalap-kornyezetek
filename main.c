#include <stdio.h>

int ominous_func(int x, int y) {
  x *= y = 2;
  y <<= x;
  x = y * 42;
  return x % 10;
}

int main() {
  int a = 42, b = 0;

  printf("Hello world, from a generic C program!\n"
    "My main contains two variables: a = %d and b = %d :3\n",
    a, b);

  if (a > b) {
    puts("Woo-hoo, I can do some debugging on my own!"
      "\n\nOr can I? *Vsauce music starts playing*\n");

    b = ominous_func(a, b);
  }
  
  for (int idx = 0; idx < b; ++idx) {
    printf("[%d] Woah, it's starting to feel a tad dizzy...\n", idx);
  }

  puts("\nBai bai!!\n");

  return 0;
}
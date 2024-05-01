#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "f.c"

int main(int argc, char const *argv[]) {
  firstmeth();
  bool a = true;
  while(a){
    for (size_t i = 0; i < 100; i++) {
      printf("Wow thats the big brain time: %zu\n", i);
    }
    a = false;
  }
  rlymain();
  return 0;
}

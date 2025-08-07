#include <stdio.h>

int main(int argc, const char * argv[]) {
    for (int a = 1; a <= 20; a++)
      {
        if (a % 3 == 0)
          continue;
        else
          printf ("%d ", a);
      }
    return 0;
}

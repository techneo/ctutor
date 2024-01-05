#include <stdio.h>
#include <limits.h>

int main() {
  char carry;
  unsigned long int val = ULONG_MAX - 10;
  while(1) {
    asm("movq %2, %%r9\n\t"
	"addq $1, %%r9\n\t"
	"setc %0\n\t"
	"movq %%r9, %1"
	:"=r"(carry), "=r"(val)
	:"r"(val)
	:"%r9"  
	);
    printf("%lu\n", val);
    if(carry) {
      printf("overflow!\n");
      return 0;
    }
  }
}
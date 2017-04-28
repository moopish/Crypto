#include "bigint/bigint.h"
#include "util.h"

#include <stdio.h>

int main(int argc, char** argv)
{
   uint8_t a=1, b=-1;
   printf("%d %d\n", byte_set_bit(a, 2), byte_get_bit(a, 1));   
   return (0);
}

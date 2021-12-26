#include <stdio.h>
#include <limits.h>

void task_2(){
    unsigned long n;
    int i;

    while ( printf("Номер: ") && scanf("%li", &n) == 1 )
        for ( i = 0; i < sizeof(n); ++i )
            printf("Byte %d: %lx\n", i, ( n >> ( CHAR_BIT * i ) ) & 0xff);
}


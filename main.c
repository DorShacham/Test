#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include "func.h"

int main()
{
    typedef enum ans
    {
        YES,
        NO,
        MAYBE
    } ans;
    ans e = MAYBE;
    ans f = NO;
    printf("%d\n", f2(e, f));
    malloc(100);
    return 0;
}

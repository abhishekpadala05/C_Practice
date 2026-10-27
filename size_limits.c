#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    printf("char           : size=%zu  min=%d  max=%d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("unsigned char  : size=%zu  min=0  max=%u\n", sizeof(unsigned char), UCHAR_MAX);

    printf("short          : size=%zu  min=%d  max=%d\n", sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("unsigned short : size=%zu  min=0  max=%u\n", sizeof(unsigned short), USHRT_MAX);

    printf("int            : size=%zu  min=%d  max=%d\n", sizeof(int), INT_MIN, INT_MAX);
    printf("unsigned int   : size=%zu  min=0  max=%u\n", sizeof(unsigned int), UINT_MAX);

    printf("long           : size=%zu  min=%ld  max=%ld\n", sizeof(long), LONG_MIN, LONG_MAX);
    printf("unsigned long  : size=%zu  min=0  max=%lu\n", sizeof(unsigned long), ULONG_MAX);

    printf("float          : size=%zu  min=%e  max=%e\n", sizeof(float), FLT_MIN, FLT_MAX);
    printf("double         : size=%zu  min=%e  max=%e\n", sizeof(double), DBL_MIN, DBL_MAX);

    printf("void           : no size (void * is %zu bytes)\n", sizeof(void *));

    return 0;
}

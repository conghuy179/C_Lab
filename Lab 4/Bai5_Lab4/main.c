#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("%zu\n",sizeof(char));
    printf("%zu\n",sizeof(int));
    printf("%zu\n",sizeof(long));
    printf("%zu\n",sizeof(long long));
    printf("%zu\n",sizeof(float));
    printf("%zu",sizeof(double));
    return 0;
}

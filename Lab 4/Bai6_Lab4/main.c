#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    scanf("%d", &a);
    int b;
    scanf("%d", &b);
    printf("a: %d\nb: %d\n", a, b);
    int result = ("%d", a/b);
    printf("Result: %d", result);
    return 0;
}

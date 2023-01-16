#include <stdio.h>
#include <stdlib.h>
#define MAX 10000

int main()
{
    char x[MAX];
    // int count = 0;
    FILE *file_ptr;

    file_ptr = fopen("test.txt","r");

    if (file_ptr != NULL)
    {
        while (fgets(x, MAX, file_ptr) != NULL)
        {
            // count++;
            printf("%s", x);
        }
        fclose(file_ptr);
    }
    else
    {
        printf("Error opening file");
    }
    return 0;
}

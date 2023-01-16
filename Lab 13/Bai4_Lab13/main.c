#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *filex_ptr;
    filex_ptr = fopen("testx.txt", "r");
    if (filex_ptr == NULL)
    {
        printf("Error: Cannot open file.\n");
        return -1;
    }

    FILE *filey_ptr;
    filey_ptr = fopen("testy.txt", "r");
    if (filey_ptr == NULL)
    {
        printf("Error: Cannot open file.\n");
        return -1;
    }

    FILE *filec_ptr;
    filec_ptr = fopen("testc.txt", "w");
    if (filec_ptr == NULL)
    {
        printf("Error: Cannot open file.\n");
        return -1;
    }

    char temp[100];

    while (fgets(temp, 100, filex_ptr) != NULL)
    {
        fprintf(filec_ptr, "%s", temp);
    }

    while (fgets(temp, 100, filey_ptr) != NULL)
    {
        fprintf(filec_ptr, "%s", temp);
    }

    fclose(filex_ptr);
    fclose(filey_ptr);
    fclose(filec_ptr);
    return 0;
}

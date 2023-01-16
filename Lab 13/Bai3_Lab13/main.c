#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int lines_count = 0;

    FILE *file_ptr;
    file_ptr = fopen("test.txt", "rt");
    if (file_ptr == NULL)
    {
        printf("Error: No file found!\n");
    }
    else
    {
        do
        {
            // read a char from file
            ch = fgetc(file_ptr);
            if (ch == '\n')
            {
                lines_count++;
            }
        } while (ch != EOF);

        printf("Total number of lines are: %d\n", lines_count + 1);
    }
    fclose(file_ptr);
    return 0;
}

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool is_ok(char c)
{
  return (c == '\0') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
}

int main()
{
  char s[1000];
  printf("Nhap vao chuoi ky tu: \n");
  scanf("%s", s);

  printf("Chuoi: %s\n", s);

  for (int i = 0; s[i] != '\0';)
  {
    // xet ky tu s[i]
    // neu s[i] khong hop le, ta dich cac ky tu phia sau i ve truoc

    /* while (!is_ok(s[i])) {
      int j = i;
      for (; s[j] != '\0'; j++)
      {
        s[j] = s[j + 1];
      }
      s[j] = '\0';
    }
    */
    while (!is_ok(s[i])) {
        int j = i;
        for (;s[j] !='\0'; j++)
        {
            s[j] = s[j + 1];
        }
        s[j] = '\0';
    }

    // neu ky tu i la \0 thi break do da duyet het
    if (s[i] == '\0')
    {
      break;
    }

    // s[i] la ky tu hop le, xet ky tu tiep theo
    i++;
  }

  printf("Chuoi sau xu ly: %s\n", s);
}

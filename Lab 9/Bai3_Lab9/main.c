#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int length(char c[]) //ham tinh do dai chuoi
{
  int len = 0;

  while (c[len] != '\0')
  {
    len++;
  }

  return len;
}

int main()
{
  // B1: Nhap chuoi va chuoi con
  char s[1000]; // chuoi
  char p[1000]; // chuoi con

  printf("Nhap vao chuoi: \n");
  scanf("%s", s);

  printf("Nhap vao chuoi con: \n");
  scanf("%s", p);

  printf("Chuoi: %s\n", s);
  printf("Chuoi con: %s\n", p);

  // B2: Tim do dai cua tung chuoi
  int len_s = length(s);
  int len_p = length(p);

  // B3: Tim kiem xem chuoi con p co xuat hien trong chuoi s hay khong
  int found_idx = -1;
  if (len_s > len_p)
  {
    for (int i = 0; i <= len_s - len_p; i++)
    {
      // kiem tra xem cac ky tu s[i..(i+len_p-1)] co match p[0..(len_p - 1)] khong?
      // nghia la xau ky tu bat dau tu i cua s co trung p khong
      bool is_matching = true;
      for (int j = 0; j < len_p; j++)
      {
        if (s[i + j] != p[j])
        {ok
          is_matching = false;
          break;
        }
      }

      if (is_matching)
      {
        // neu ma trung nhau => tim duoc p trong s xuat phat tu vi tri i
        found_idx = i;
        break;
      }
    }
  }

  if (found_idx != -1)
  {
    printf("Tim thay %s trong %s tai vi tri %d.\n", p, s, found_idx + 1);
  }
  else
  {
    printf("Khong tim thay %s trong %s.\n", p, s);
  }

  return 0;
}

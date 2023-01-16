#include <stdio.h>
#include <stdlib.h>

int main()
{
    double chieu_dai_cn = 10;
    double chieu_rong_cn = 5;
    double chu_vi_cn = 2*(chieu_dai_cn + chieu_rong_cn);
    double dien_tich_cn = chieu_dai_cn * chieu_rong_cn;
    printf("Chu vi cua hinh chu nhat co chieu dai %.f va chieu rong %.f  la %.f.\n", chieu_dai_cn, chieu_rong_cn, chu_vi_cn);
    printf("Dien tich cua hinh chu nhat co chieu dai %.f va chieu rong %.f la %.f\n", chieu_dai_cn, chieu_rong_cn, dien_tich_cn);
    return 0;
}

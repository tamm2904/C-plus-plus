#include <stdio.h>
 int main()
 {
     int tuoi;
     printf("Nhap tuoi cua ban: "); scanf("%d",&tuoi);
     if (tuoi < 18) {
         printf("Chua du tuoi di tu");
     } else printf("Da du tuoi di tu");
     return 0;
 }

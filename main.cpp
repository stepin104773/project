#include <stdio.h>

int main() {
   int yy;
   printf("enter the year:%d",yy);
   scanf("%d",&yy);

   if (((yy% 4 == 0) && (yy % 100!= 0)) || (yy%400 == 0))
      printf("%d is a leap year", yy);
   else
      printf("%d is not a leap year", yy);

   return 0;
}

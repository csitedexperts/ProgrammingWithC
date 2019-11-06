/*	CP12_02.C	*/
/* 	Getting file Creation date and time file */

#include <stdio.h>
#include <io.h>

int main(void)
{
   FILE *fp;
   struct ftime ft;

   if ((fp = fopen("C:\\TEST.TXT", "wt")) == NULL)
   {
      fprintf(stderr, "Cannot create file.\n");
      return 1;
   }

   getftime(fileno(fp), &ft);

printf("File creation date : %u/%u/%u\n", ft.ft_day, ft.ft_month, ft.ft_year+1980);
   printf("File creation time : %u:%u:%u\n", ft.ft_hour, ft.ft_min, ft.ft_tsec * 2);

   fclose(fp);
   return 0;
}

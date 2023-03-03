#include<stdio.h>
union u
{
   char name[21];
   float persentage;
   int rank;
} uv;

struct s
{
   char name[21];
   float persentage;
   int rank;
} sv;

void main()
{
   printf("size of union = %d bytes", sizeof(uv));
   printf("\nsize of structure = %d bytes", sizeof(sv));
}

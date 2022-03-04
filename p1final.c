#include <stdio.h>
void input(int *num1, int *den1, int *num2, int *den2)
{
  scanf("%d%d%d%d",num1, den1, num2, den2);
}
void add(int num1, int den1, int num2, int den2, int *num3, int *den3)
{
  int gcd, c, x, y;
  x=(num1*den2)+(num2*den1);
  y=(den1*den2);
  for(c=1; c<=x && c<=y; ++c)
    {
       if(x%c==0 && y%c==0)
          gcd=c;
    }
  *num3=x/gcd;
  *den3=y/gcd;
}
void output(int num1, int den1, int num2, int den2, int num3, int den3)
{
  printf("The sum of %d/%d and %d/%d is %d/%d\n",num1,den1,num2,den2,num3,den3);
}
int main()
{
  int num1,den1,num2,den2,num3,den3;
  printf("Enter two fractions\n");
  input(&num1,&den1,&num2,&den2);
  add(num1,den1,num2,den2,&num3,&den3);
  output(num1,den1,num2,den2,num3,den3);
}
#include<stdio.h>
struct _fraction
{
int num,den;
};
typedef struct _fraction Fraction;
Fraction input_fraction()
{
  Fraction f;
  scanf("%d%d",&f.num,&f.den);
  return f;
}
Fraction smallest_fraction(Fraction f1, Fraction f2, Fraction f3)
{
  int lcm, num1, num2, num3;
  lcm=f1.den*f2.den*f3.den;
  num1=f1.num*lcm/f1.den;
  num2=f2.num*lcm/f2.den;
  num3=f3.num*lcm/f3.den;
  if (num1<num2 && num1<num3)
    return f1;
  else
    if (num2<num3)
      return f2;
  else
      return f3;
}
void output(Fraction f1, Fraction f2, Fraction f3, Fraction smallest)
{
  printf("The smallest fraction of %d/%d, %d/%d & %d/%d is %d/%d\n",f1.num, f1.den, f2.num, f2.den, f3.num, f3.den, smallest.num, smallest.den);
}
int main()
{
  Fraction f1,f2,f3,smallest;
  printf("Enter 3 fractions\n");
  f1=input_fraction();
  f2=input_fraction();
  f3=input_fraction();
  smallest=smallest_fraction(f1,f2,f3);
  output(f1,f2,f3,smallest);
}
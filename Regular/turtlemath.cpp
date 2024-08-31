/*Regula Falsi*/
#include<stdio.h>
#include<math.h>
float f(float x)
{
  return(x*log10(x)-1.2);
}
void regula (float *x, float x0, float x1, float fx0, float fx1, int *itr)
{
  *x = x0 - (x1 - x0) / (f(x1) - f(x0)) * f(x0);
  ++(*itr);
  printf("Iteration no. %3d X = %7.5f f(x) = %7.5f\n", *itr, *x, f(*x));
}
 main ()
{
  int itr = 0, maxitr;
  float x0, x1, x2, x3, aerr;
  printf("Enter the values of x0, x1, allowed error, maximum iterations\n");
  scanf("%f %f %f %d", &x0, &x1, &aerr, &maxitr);
  regula (&x2, x0, x1, f(x0), f(x1), &itr);
    do
    {
      if (f(x0) * f(x2) < 0)
        x1 = x2;
      else
        x0 = x2;
      regula (&x3, x0, x1, f(x0), f(x1), &itr);
      if (fabs(x3 - x2) < aerr)
      {
        printf("After %d iterations, root = %6.4f\n", itr, x3);
        return 0;
      }
      x2 = x3;
    }
    while (itr < maxitr);
    printf("Solution does not converge, incorrect initial values\n");
    return 1;
}
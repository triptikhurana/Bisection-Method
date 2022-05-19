#include<stdio.h>
#include<math.h>
#define f(x) x*x*x-4*x+1
void main()
{
	 double x0, x1, x2, y0, y1, y2, e;
	 int step = 1;
	 up:
	 printf("Enter two initial guesses:");
	 scanf("%lf%lf", &x0, &x1);
	 printf("Enter tolerable error:\n");
	 scanf("%lf", &e);
	 y0 = f(x0);
	 y1 = f(x1);
	 if( y0 * y1 > 0.0)
	 {
		  printf("Guesse Incorrect.\n");
		  goto up;
	 }
     printf("\nStep\t\tx0\t\tx1\t\tx2\t\tf(x2)\n");
	 do
	 {
		  x2 = (x0 + x1)/2;
		  f2 = f(x2);
		
		  printf("%d\t\t%f\t%f\t%f\t%f\n",step, x0, x1, x2, f2);
		
		  if( f0 * f2 < 0)
		  {
			   x1 = x2;
			   f1 = f2;
		  }
		  else
		  {
			   x0 = x2;
			   f0 = f2;
		  }
		  step = step + 1;
	 }while(fabs(f2)>e);
	 printf("\nRoot is: %f", x2);
	 //getch();
}
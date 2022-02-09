//----------------------------------------------------------------------------------------
//AUTHOR: Joshua Wade West
//FILENAME: CS 1412- Section 502-QUIZ2-Joshua Wade West.c
//SPECIFICATION: find the root of an interval
//FOR: CS 1412 Lab- Section 502 - QUIZ2




//-----------------------------------------------------------------------------------------
//NAME: main
//INPUT: void
//OUTPUT:0
//PURPOSE: write a program to find the root of two numbers
//-----------------------------------------------------------------------------------------
#include <stdio.h>
#include <math.h>

#define f(x) x*x-3 // the equation we use
#define epsilon 0.01

int main(void) {

double x_l , x_r, x_m;//the lower, upper, and mid ranges
double f_l , f_r, f_m;

int root_founded;
int count_iteration =0;

printf("please enter the interval endpoints\n");// asks for endpoints
scanf("%lf%lf",&x_l, &x_r);

f_l=f(x_l);
f_r=f(x_r);
if (f_l * f_r > 0){
printf("There is no root in this interval\n");}
else
{
  while ((x_r - x_l > epsilon) && (!root_founded) )
{
x_m = (x_l + x_r) / 2;
f_l=f(x_l);
f_m = f(x_m);


        if (f_m == 0)
        {
        printf("%lf is the root\n", x_m);
        root_founded = 1;

        }
        else
        {
          if
        (f_l * f_m < 0)
        x_r=x_m;

        else 
        x_l = x_m;
        }

count_iteration +=1;
}

if (x_r - x_l < epsilon)
printf("\n \n the final interval has the width less than epsilon and the f(%lf) is < %lf, so %lf can be considered as a root\n ", x_m, epsilon, x_m);
printf("the number of iteration is %d \n and the inerval is [%lf,%lf] \n ", count_iteration, x_l,x_r);




}

  return 0;
}
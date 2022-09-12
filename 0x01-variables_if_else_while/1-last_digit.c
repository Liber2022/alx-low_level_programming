#include<stdio.h>
#include<stdib.h>
#include<time.h>
/**
*main -assign a random nunmber to the variable n each time it is executed
*The string Last digit of n
*Return: 0
*/
int main(void)
{
int n;

srand(time(0));
n = rand()-RAND_MAX/2;
lastn = n% 10;
{
printf("Last digit of %d is %d and is greater than 5\n",n,lastn);
}
else if(lastn<6&&lastn !=0)
{

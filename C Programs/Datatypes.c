#include <stdio.h>
#include <limits.h>

int main(){
// Checking the Integer
printf("The size of Integer is %d \n",sizeof(int));
// Checking the float
printf("The size of float is %d \n",sizeof(float));

int a,b;
int c;
float f;

a = 10;
b = 20;

c = a+b;

printf("The Value of c is %d \n",c);

f = 70.0/3.0;
printf("f value is : %f \n",f);


return 0;

}

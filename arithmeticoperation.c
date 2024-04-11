#include <stdio.h>

int main( ) {

int x = 10,y = 5, z;

z = x + y;
printf("x + y = %d \n", z);

z = x - y;
printf("x - y = %d \n", z);


z = x / y;
printf("x / y = %d \n", z);


z = x  * y;
printf("x * y = %d \n", z);

z = x  % y;
printf("Reminder when %d divided by %d = %d \n", x,y,z);


    return 0;

}
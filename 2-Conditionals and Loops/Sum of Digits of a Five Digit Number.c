#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int temp = n,last_num,sum=0;
 
    while(temp > 0)
    {
        last_num = temp %10;
        sum = sum + last_num;
        temp = temp/10;
    }
    printf("%d",sum);
    return 0;
}

공배수 문제 구연
---------------------------------------------
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int number, int n, int m)
{
   if(number % n == 0 && number % m == 0)
    return 1;
   else
    return 0;
}

int main()
{
    printf("%d\n", solution(60, 2, 3));
    return 0;
}

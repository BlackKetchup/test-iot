1~100까지 짝수합 홀수합 구하기
  -----------------------------------------------
  #include <stdio.h>

int main()
{
    int a1 = 0;
    int a2 = 0;
    
    for(int b = 1; b <= 100; b++)
    {
        if(b % 2 == 0)
            a1 += b;
        else
            a2 += b;
    }
    printf("짝수 합 : %d\n", a1);
    printf("홀수 합 : %d\n", a2);

    return 0;
}

#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    while(a!=0 && b!=0 && c!=0)
    {
               if(a*a + b*b == c*c)
                      printf("right\n");
               else if(a*a + c*c == b*b)
                    printf("right\n");
               else if(b*b + c*c == a*a)
                    printf("right\n");
               else
                   printf("wrong\n");
               scanf("%d%d%d", &a, &b, &c);
    }
    return 0;
}
                      

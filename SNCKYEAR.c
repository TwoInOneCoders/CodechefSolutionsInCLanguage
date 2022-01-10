
#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        int yearshosted[] = {2010, 2015, 2016, 2017, 2019};
        scanf("%d", &n);
        if(n == 2010 || n == 2015 || n == 2016 || n == 2017 || n == 2019)
        {
            printf("HOSTED\n");
        }
        else
        {
            {
                printf("NOT HOSTED\n");
            }
        }
    }
}

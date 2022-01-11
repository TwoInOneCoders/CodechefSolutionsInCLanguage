/*
  Author: The legendary NITIN (iss janvar ka naam hai coderalways1 on codechef)
  DATE: 12/01/2022
  TIME: raat ke 12 bajke 36 mins
  (because i love coding!!)
*/

#include <stdio.h>

int main(void)
{
    int t, a, b, c, d;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int tmp1 = 0, tmp2 = 0;
        tmp1 = c / a;
        tmp2 = d / b;
        printf("%d\n", tmp1 + tmp2);
    }
}

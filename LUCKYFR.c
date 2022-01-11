/*
    Dekho bhai please dont cheat!
    
    Mai aapko logic smjha deta hu: 
    sabse pehle testcase aur yeh sab lo
    ek counter rakho jiska value 0 ho jaaye har ek testcase ka loop me
    counter, number of 4's ko count karta hai
    abhi jo cheez maine highlight kar di hai usme ek number daal ke dekho
    aur tumko smjh aa jaega
    
    yes i know tum mujhe roast karoge ki upar likha hai, ki cheat nahi karna, and neeche dekhne ko bol rha hu
    
    Author: The legendary CODERALWAYS
    Date: 12/01/2022
    Time: Raat ke 12 bajke 20 minute
    (because i love coding!!)
*/

#include <stdio.h>

int main(void)
{
    int t, n, last;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        int count = 0;
        for(int i = 0; n != 0; i++)
        {
            last = n % 10;
            if(last == 4)
            {
                count++;
            }
            n = (n - last) / 10;
        }
        printf("%d\n", count);
    }
}

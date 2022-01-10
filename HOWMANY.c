#include <stdio.h>
#include <math.h>
#include <stdlib.h>     //Bas thoda flex maar rha hu yeh sab libraries laake

int main(void)
{
    int n;
    scanf("%d", &n);        //Gets the number
    int counter = 0;        //To count the number of digits
    for(int i = 0; n != 0; i++)     //Bhailog yaha se tumlog ek ek number daal ka dekh lena matlab n ke jagah par kuch bhi and u can catch the logic
    {
        int last = n % 10;
        n = (n - last) / 10;
        counter++;
    }
    if(counter == 1 || counter == 2 || counter == 3)  //according to question maine iska outputs ko customize kar diya
    {
        printf("%d", counter);
    }
    else
    {
        printf("More than 3 digits\n");
    }
  //And then boom submit kar do, ho gya tumhara!!
}
/*

The earlier you start working on something, the earlier you will see results

*/

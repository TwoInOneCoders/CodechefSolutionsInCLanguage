/*
	Author: NITIN THE LEGEND
	DATE: 10 JANUARY 2022
	Language: C
*/
#include <stdio.h>

int main()
{
	int l,b,c,p;
	scabf("%d %d", &l, &b);
	c=l*b;    //THIS IS AREA
	p=2*(l+b);    //THIS IS PERI
	if(p>c)
	{
	    printf("Peri\n");
	    printf("%d\n",p);
	}
	else if(c==p)
	{
	    printf("Eq\n");   //YEH DIYA HUA NAHI HAI BUT CODECHEF ME EK BUG HAI :(
	    printf("%d\n",c);
	}
	else
	{
	    printf("Area\n");
	    printf("%d\n",c);
	}
	return 0;
}
//There are no secrets to success.
//It is the result of preparation, hard work, and learning from *failure*.

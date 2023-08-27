#include <stdio.h>
struct poly
{
    int co;
    int expo;
};


int main()
{
    int term1,term2,term3;
    printf("Enter 1st Poly:\n");
    printf("Enter Number of terms in First Poly:\n");
    scanf("%d",&term1);
    struct poly p1[term1];
    printf("Enter Terms of First Poly in descending order:\n");
   
    for(int i=0;i<term1;i++)
    {
        printf("Enter Coeffice of term (%d)\n",i+1);
        scanf("%d",&p1[i].co);
        printf("Enter Exponecial of term (%d)\n",i+1);
        scanf("%d",&p1[i].expo);
    }
    printf("Your first poly:\n");
    int k;
	for(k=0;k<term1-1;k++)
	{
	    printf("%d(x^%d)+",p1[k].co,p1[k].expo);
	}
	printf("%d(x^%d)",p1[term1-1].co,p1[term1-1].expo);
	
	
	printf("\nEnter 2nd Poly:\n");
    printf("Enter Number of terms in 2nd Poly:\n");
    scanf("%d",&term2);
    struct poly p2[term2];
    printf("Enter Terms of 2nd Poly in descending order:\n");
   
    for(int i=0;i<term2;i++)
    {
        printf("Enter Coeffice of term (%d)\n",i+1);
        scanf("%d",&p2[i].co);
        printf("Enter Exponecial of term (%d)\n",i+1);
        scanf("%d",&p2[i].expo);
    }
    printf("Your 2nd poly:\n");
    
	for(k=0;k<term2-1;k++)
	{
	    printf("%d(x^%d)+",p2[k].co,p2[k].expo);
	}
	printf("%d(x^%d)",p2[term2-1].co,p2[term2-1].expo);
	
	struct poly p3[term2+term1];
	
	int p,q,r;
    p=q=r=0;
    while(p<term1 && q<term2)
    {
        if(p1[p].expo==p2[q].expo)
        {
            p3[r].co=p1[p].co+p2[q].co;
            p3[r].expo=p1[p].expo;
            p++;
            q++;
            r++;
        }
        else if(p1[p].expo>p2[q].expo)
        {
            p3[r].co=p1[p].co;
            p3[r].expo=p1[p].expo;
            p++;
            r++;
        }
        else
        {
            p3[r].co=p2[p].co;
            p3[r].expo=p2[p].expo;
            q++;
            r++;
        }
    }
    
    while(p<term1)
	{
		p3[r].co=p1[p].co;
		p3[r].expo=p1[p].expo;
		p++;
		r++;
	}

	while(q<term2)
	{
	    p3[r].co=p2[q].co;
		p3[r].expo=p2[q].expo;
		q++;
		r++;
	}
	
	printf("\nAfter add poly:\n");
    
	for(k=0;k<r-1;k++)
	{
	    printf("%d(x^%d)+",p3[k].co,p3[k].expo);
	}
	printf("%d(x^%d)",p3[r-1].co,p3[r-1].expo);

    return 0;
}

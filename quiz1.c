#include<stdio.h>
int main()
{
    int c=0,q;
    char ans;
    printf("Enter\n1 for maths\n2 for science");
    scanf("%d",&q);
    switch(q)
    {
    case 1:
        printf("56+24=\na)80\nb)34\nc)81\nd)78");
        scanf("%c",&ans);
        if(ans==a)
        {
            c+=2;
            printf("Correct");
        }else{ c-=1; printf("Incorrect");}
        printf("34*8=\na)56\nb)272\nc)271\nd)200");
        scanf("%c",&ans);
        if(ans==b)
        {
           c+=2;
            printf("Correct");
        }else{ c-=1; printf("Incorrect");}
    case 2:
        printf("Powerhouse of the cell ______\na)cytoplasm\nb)mitochondria\nc)cell wall\nribulose");
        scanf("%c",&ans);
        if(ans==b)
          {
            c+=2;
            printf("Correct");
        }else{ c-=1; printf("Incorrect");}
    }
    return 0;
}

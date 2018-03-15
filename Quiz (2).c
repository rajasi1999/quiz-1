#include<stdio.h>
void maths()
{
  int c=0;
  char ans;
  int ch;



  printf("MATHEMATICS\n");
  printf("1)What is 1004 divided by 2\na)52\nb)502\nc)520\nd)5002\n");
  scanf(" %c",&ans);
  if(ans=='b')
{
  c+=2;
  printf("Correct\n\n");
}
  else{c-=1;
    printf("Incorrect\n\nThe answer is b)502\n");
    }
  printf("2)How many yards are there in one mile\na)100\nb)170\nc)1760\nd)1650\n");
  scanf(" %c",&ans);
  if(ans=='c')
{
  c+=2;
  printf("Correct\n\n");
}
  else{c-=1;
    printf("Incorrect\n\nThe answer is c)1760\n");}
    printf("3)How many hours are there in seven days\na)157\nb)170\nc)144\nd)168\n");
  scanf(" %c",&ans);
  if(ans=='d')
{
  c+=2;
  printf("Correct\n\n");
}
  else{c-=1;
    printf("Incorrect\n\nThe answer is d)168\n");}
    printf("4)Which prime number occurs after 31\na)33\nb)35\nc)37\nd)32\n");
  scanf(" %c",&ans);
  if(ans=='c')
{
  c+=2;
  printf("Correct\n\n");
}
  else{c-=1;
    printf("Incorrect\n\nThe answer is c)37\n");}
    printf("5)What is the next number in the sequence: 3,7,15,31,63......\na)127\nb)93\nc)117\nd)115\n");
  scanf(" %c",&ans);
  if(ans=='a')
    {
  c+=2;
  printf("Correct\n\n");
}

  else{c-=1;
    printf("Incorrect\n\nThe answer is a)127\n");}
    printf("Your score is : %d/10\n\n",c);
    printf("If you want to retake the test enter 1 for maths and 2 for science:\n");
    scanf("%d",&ch);
    if(ch==1)
        maths();
    else if(ch==2)
        science();
        else
            printf("You have successfully completed the quiz\n ");


}

void science()
{   int c1=0;
    char ans1;
    int ch;
    printf("SCIENCE\n");
    printf("1)What is the powerhouse of the cell\na)Nucleus\nb)Cytoplasm\nc)Mitochondria\nd)Chromatin\n");
    scanf(" %c",&ans1);
    if(ans1=='c')
    {
        c1+=2;
        printf("Correct\n\n");
    }
    else{
        c1-=1;
        printf("Incorrect\n\nThe answer is c)Mitochondria\n");
    }
    printf("2)Instrument used to measure and record relative humidity of air\na)Hydrometer\nb)Hygrometer\nc)Barometer\nd)Lactometer\n");
    scanf(" %c",&ans1);
    if(ans1=='b')
    {
        c1+=2;
        printf("Correct\n\n");
    }
    else{
        c1-=1;
        printf("Incorrect\n\nThe answer is b)Hygrometer\n");
    }
    printf("3)Light year is a unit of\na)Time\nb)Light\nc)Distance\nd)Intensity of light\n");
    scanf(" %c",&ans1);
    if(ans1=='c')
    {
        c1+=2;
        printf("Correct\n\n");
    }
    else{
        c1-=1;
        printf("Incorrect\n\nThe answer is c)Distance\n");
    }
    printf("4)The purest form of iron is\na)Cast iron\nb)Steel\nc)Pig iron\nd)Wrought iron\n");
    scanf(" %c",&ans1);
    if(ans1=='d')
    {
        c1+=2;
        printf("Correct\n\n");
    }
    else{
        c1-=1;
        printf("Incorrect\n\nThe answer is d)Wrought iron\n");
    }
    printf("5)Natural radioactivity was discovered by\na)Rutherford\nb)Marie Curie\nc)Henry Becquerel\nd)Enrico Fermi\n");
    scanf(" %c",&ans1);
    if(ans1=='c')
    {
        c1+=2;
        printf("Correct\n\n");
    }
    else{
        c1-=1;
        printf("Incorrect\n\nThe answer is c)Henry Becquerel");
    }
    printf("Your score is :%d/10\n\n",c1);
    printf("If you want to retake the test enter 1 for maths and 2 for science:\n");
    scanf("%d",&ch);
    if(ch==1)
        maths();
    else if(ch==2)
        science();
        else
            printf("You have successfully completed the quiz\n ");

}
void main()
{
    int n;
    char name[50];
    printf("QUIZ\n\n");
    printf("Enter your name:\n");
    scanf("%[^\n]",&name);

    printf("\nEnter your choice:\n1-MATHEMATICS\n2-SCIENCE");
    scanf("%d",&n);
    switch(n)
    {
        case 1:maths();break;
        case 2:science();break;
    }

}

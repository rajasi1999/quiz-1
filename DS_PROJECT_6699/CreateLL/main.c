#include <stdio.h>
#include <stdlib.h>

int bs,fs,es;

typedef struct passenger{
char name[20];
int age;
int priority;
int cls;
int custom_id;
int seat_no;
}passenger;

typedef struct seatInfo{
    int sn;
    int cls;
    int isFull;
    struct passenger pass;
    struct seatInfo *next;
}seat;

seat *headBC,*headFC,*headEC,*pnode;

/*
************************************************************************************************
************************************************************************************************
*/
seat *create(int cls,int num,int initialSn){
    int i;
    seat *temp;
    pnode=(seat*)malloc(sizeof(seat));
    pnode->sn=initialSn;
    if(cls==0){
        pnode->cls=0;
    }
    else if(cls==1){
        pnode->cls=1;
    }
    else if(cls==2){
        pnode->cls=2;
    }

    pnode->isFull=0;
    if(cls==0){
        bs=num;
        headBC=pnode;
        temp=headBC;
    }
    else if(cls==1){
        fs=num;
        headFC=pnode;
        temp=headFC;
    }
    else if(cls==2){
        es=num;
        headEC=pnode;
        temp=headEC;
    }
    else{
        printf("\nError:Invalid class\n");
    }
    for(i=0;i<num-1;i++){
        pnode=(seat*)malloc(sizeof(seat));
        pnode->sn=initialSn+i+1;
        if(cls==0){
        pnode->cls=0;
        }
        else if(cls==1){
            pnode->cls=1;
        }
        else if(cls==2){
            pnode->cls=2;
        }
        pnode->isFull=0;
        //These lines will be executed only once
        if(cls==0&&headBC->next==NULL){
            headBC->next=pnode;
            temp=pnode;
            continue;
        }
        else if(cls==1&&headFC->next==NULL){
            headFC->next=pnode;
            temp=pnode;
            continue;
        }
        else if(cls==2&&headEC->next==NULL){
            headEC->next=pnode;
            temp=pnode;
            continue;
        }
        //till here
        temp->next=pnode;
        temp=pnode;
    }
    if(cls==0){
        temp->next=headBC;
        return headBC;
    }
    else if(cls==1){
        temp->next=headFC;
        return headFC;
    }
    else if(cls==2){
        temp->next=headEC;
        return headEC;
    }
}

/*
************************************************************************************************
************************************************************************************************
*/

struct passenger addPassenger()
{
    passenger p;
    int debug;
    printf("Enter your name: ");
    gets(p.name);
    printf("Enter your age: ");
    scanf("%d",&p.age);
   // printf("Enter your priority: ");
   // scanf("%d",&p.priority);
   /* Print 5 random numbers from 0 to 99 */
    p.priority=(rand() % 100);
    printf("Enter \n1)BUSINESS CLASS\n 2)FIRST CLASS\n 3)ECONOMY CLASS\n ");
    scanf("%d",&debug);
    debug=debug-1;
    p.cls=debug;
    printf("Enter your seat number: ");
    scanf("%d",&p.seat_no);
    return p;
}

/*
************************************************************************************************
************************************************************************************************
*/


void display(seat *l){
    int i,j,z;
    int x;
    if(l->cls==0){
        x=bs;
    }
    else if(l->cls==1){
        x=fs;
    }
    else{
        x=es;
    }
    for(i=1;i<=x;i++){
            if(l->isFull==1){
                if(l->cls==0){
                    printf("\t%c",219);
                    printf(" B%d\t",l->sn);
                }
                else if(l->cls==1){
                    printf("\t%c",219);
                    printf(" F%d\t",l->sn);
                }
                else if(l->cls==2){
                    printf("\t%c",219);
                    printf(" E%d\t",l->sn);
                }
            }

            else{
                    if(l->cls==0){
                    printf("\t%c",176);
                    printf(" B%d\t",l->sn);
                }
                else if(l->cls==1){
                    printf("\t%c",176);
                    printf(" F%d\t",l->sn);
                }
                else if(l->cls==2){
                    printf("\t%c",176);
                    printf(" E%d\t",l->sn);
                }
            }
        i%3==0?printf("\n\n"):printf("");
    l=l->next;
    }
}


void check(struct passenger ps){
    seat *temp;
    int i;
    if(ps.cls==2){
            temp=headEC;
            for(i=0;i<es;i++){
                if(ps.seat_no==temp->sn){
                    if(temp->isFull==0){
                        temp->pass=ps;
                        temp->isFull=1;
                    }
                }
                temp=temp->next;
            }
    }

    else if(ps.cls==1){
            temp=headFC;
            for(i=0;i<fs;i++){
                if(ps.seat_no==temp->sn){
                    if(temp->isFull==0){
                        temp->pass=ps;
                        temp->isFull=1;
                    }
                }
                temp=temp->next;
            }
    }

    else if(ps.cls==0){
            temp=headBC;
            for(i=0;i<bs;i++){
                if(ps.seat_no==temp->sn){
                    if(temp->isFull==0){
                        temp->pass=ps;
                        temp->isFull=1;
                    }
                }
                temp=temp->next;
            }
    }
}
int main()
{

    seat *head;
    headFC=create(1,10,10);
    head=headFC;
    check(addPassenger());
    //headEC->isFull=1;
    display(headFC);
}

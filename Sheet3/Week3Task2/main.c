/*
* Filename: Week3Task2.c
 * Author: Youssef Al Mutairi
 * Date: 05/03/2026
 * Description: Program that sorts four input values in both ascending and descending order
 */
#include <stdio.h>
int main()
{
    int a,b,c,d,temp;

    printf("Enter four numbers:\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if(a>b) {
        temp=a;
        a=b;
        b=temp;
    }
    if(a>c){temp=a;a=c;c=temp;}
    if(a>d){temp=a;a=d;d=temp;}

    if(b>c){temp=b;b=c;c=temp;}
    if(b>d){temp=b;b=d;d=temp;}

    if(c>d){temp=c;c=d;d=temp;}

    printf("Ascending order: %d %d %d %d\n",a,b,c,d);
    printf("Descending order: %d %d %d %d\n",d,c,b,a);
    return 0;
}

#include <stdio.h>
struct Student
{
int rate ,qty,amt,dis,bamt,gst,netbill;
};

int main()
{
    struct Student s1[3];

    for (int i = 0; i < 3; i++)
    {
        printf("enter rate:");
        scanf("%d", &s1[i].rate);
        printf("enter qty:");
        scanf("%d", &s1[i].qty);

        s1[i].amt=s1[i].rate*s1[i].qty;
        s1[i].dis=s1[i].amt*0.10;
        s1[i].bamt=s1[i].amt-s1[i].dis;
        s1[i].gst=s1[i].bamt*0.18;
        s1[i].netbill=s1[i].bamt+s1[i].gst;

        printf("rate  qty  amount  dis  billamt  gst18  netbill \n");
	printf("%d  %d  %d  %d   %d   %d   %d  \n",s1[i].rate , s1[i].qty , s1[i].amt , s1[i].dis , s1[i].bamt , s1[i].gst , s1[i].netbill);
    }

    return 0;
}

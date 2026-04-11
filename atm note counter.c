#include <stdio.h>
#include <string.h>
int main()
{
int pin1, amt, pin2, pin3, pin4, pin5,  pin6, b, c, d, e, f, g, h, i, j, k, l, m, n;
char name1[20] ="piyush";
char name2[20];
char name3[20]="saniket";
char name4[20]="om";
char name5[20]="diksha";
char name6[20]="arya";
pin1=2090;
pin3=1584;
pin4=6969;
pin5=7391;
pin6=2312;

printf("Enter username:\t ");  
scanf("%s",name2);  
  
if(strcmp(name1,name2)==0 ||  
  strcmp(name3,name2)==0 ||  
  strcmp(name4,name2)==0 ||
  strcmp(name6,name2)==0 ||
  strcmp(name5,name2)==0) {  
    printf("Enter your 4 digit pin:\t");  
}  
else {  
    printf("wrong username ");  
    printf("\nplease try again");  
}  
  
scanf("%d",&pin2);  
  
if ((strcmp(name2,name1)==0 && pin2==pin1 ||
        strcmp(name2,name3)==0 && pin2==pin3 ||
        strcmp(name2,name4)==0 && pin2==pin4 ||
        strcmp(name2,name6)==0 && pin2==pin6 ||
        strcmp(name5,name2)==0 && pin2==pin5))
        {  
    printf("Enter amount:\t");  
}  
else {  
    printf("Wrong pin");  
    printf("\nplease try again");  
}  
scanf("%d",&amt);  
b=amt/1000;  
c=amt%1000;  
printf("total 1000\u20B9 notes : %d",b);  
d=c/500;  
e=c%500;  
printf("\ntotal 500\u20B9 notes: %d",d);  
f=e/100;  
g=e%100;  
printf("\ntotal 100\u20B9 notes : %d",f);  
h=g/20;  
i=g%20;  
printf("\ntotal 20\u20B9 notes : %d",h);  
j=i/10;  
k=i%10;  
printf("\ntotal 10\u20B9 notes: %d",j);  
l=k/2;  
m=k%2;  
printf("\ntotal 2\u20B9 coins : %d",l);  
n=m/1;  
printf("\ntotal 1\u20B9 coins : %d",n);  
return 0;

}
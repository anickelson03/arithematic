#include<stdio.h>
int main()
{
char s[30];
int i,flag=0,n;
printf("enter the string");
scanf("%s",n);
for(i=0;s[i]='\0';i++)
{
 if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]=='4'||s[i]=='5'||s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')
 {
 flag=flag+1;
 }
 }
 if(flag==0)
 printf("YES");
 else
 printf("NO");
 return 0;
 }

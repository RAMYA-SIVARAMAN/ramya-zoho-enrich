#include<stdio.h>
void main()
{    
int n,rem,c=0;   
scanf("%d",&n);   
while(n>0)   
{        
           rem=n-2*(n/2);    
           if(rem==1)       
           c++;       
           n=n/2;   
 }  
printf("%d",c);
}

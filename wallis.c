#include<stdio.h>
void main (){
float i,n,p,s,pi=2.0;
for(i=1.0;i<20000000000000;i++){
n=4*i*i;
p=n-1;
s=n/p;
pi=pi*s;
}
printf("%f",pi);
}

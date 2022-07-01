#include <stdio.h>
#include <conio.h>
#define S(x, y)(x^=y^=x^=y)
#define Z(x)(S(b[x],b[x+1]))
#define X(x)(S(v[x],v[x+1]))
#define R(x)(1<<(-~-~-~-~x))
void y(char d[]){int i,j,t=0,a,f,u,p=0,c=0,e=0,b[10],v[10];
for(u=0;d[u];u++);for(i=0;i<=u;i++){if(t==0&&d[i]!=R(1)&&
(d[~-i]==R(1)||i==0)){b[p]=i;t=1;}if(d[~-i]!=R(1)&&
(d[i]==R(1)||d[i]==0)){v[p]=i;t=0;p++;}}while(1)
{f=0;for(a=0;a<9;a++){if(d[b[a]]>d[b[-~a]])
{f=1;Z(a);X(a);}else if(d[b[a]]==d[b[-~a]])
{c=b[a];e=b[a+1];do{c++;e++;}while(d[c]==d[e]);
if(d[c]>d[e]){f=1;Z(a);X(a);}}}if(f==0)break;}
for(i=0;i<10;i++){for(j=b[i];j<v[i];j++)
printf("%c",d[j]);if(i!=9)printf("\n");}}int main(){char
d[255];gets(d);printf("\n");y(d);getch();return 0;}

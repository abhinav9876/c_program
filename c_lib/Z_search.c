
#include<stdio.h>
#include<string.h>
void getZarr(char str[],int z[]);
void search(char text[],char pattern[],int l1,int l2)
{
int l=l1+l2+1;
char concat[l];int z[l];
int i=0;
for(i=0;i<l2;i++)concat[i]=pattern[i];
concat[i]='$';
for(i=0;i<l1;i++)concat[l2+1+i]=text[i];
getZarr(concat,z);
for(i=0;i<l;i++)
{

if(z[i]==strlen(pattern))
   {printf("pattern found at index %d\n",i-strlen(pattern)-1);}
}

}
void getZarr(char str[],int z[])
{
int i=0;
int n=strlen(str);
int L,R,k;
L=R=0;
for(i=1;i<n;i++)
{
if(i>R)
  {
L=R=i;
while(R<n && str[R-L]==str[R])
{
R++;}
z[i]=R-L;R--;


}
else
{k=i-L;
if(z[k]<R-i+1)z[i]=z[k];
else{L=i;
while(R<n && str[R-L]==str[R])
{
R++;}
z[i]=R-L;
R--;


}


}}}
void z_search(char text[],char pattern[])
{
//char text[]="GEEKS FOR GEEKS";
//char pattern[]="GEEK";
//int nn=5;
int l1=strlen(text);
int l2=strlen(pattern);
search(text,pattern,l1,l2);


}

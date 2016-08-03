#include<stdio.h>
int main()
{
int a=2,b=3;

printf("sub : %d",sub(a,b));

}

int sub(int a,int b)
{
while(b--)
a--;
return a;
}

#include<cstdio>
#include<iostream>
using namespace std;

// Pass as refrence
void update(int *a,int *b)
{
    int temp = *a;
    *a += *b;
    *b = abs(temp - *b);
}

int main()
{
    int a,b;
    int *pa = &a,*pb = &b;
    
    scanf("%d %d",&a,&b);
    
    update(pa,pb);
    
    printf("%d\n%d\n",a,b);
    
    return 0;
}

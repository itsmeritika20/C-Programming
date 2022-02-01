#include<stdio.h>

int main(){
    int x=5, *p, **q, ***r;
    p=&x;
    q=&p;
    r=&q;
    printf("%d", x);
    return 0;
}
#include<stdio.h>

int main(){
    int a,b;
    int *p,*q;
    p=&a;
    q=&b;
  
    return 0;
}

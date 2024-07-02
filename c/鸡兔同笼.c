#include<stdio.h>

int main(){
   
// 假设有30个头 62个脚
    int head = 20;
    int a;
    //24 - a
    for (a = 0; a < head; a++)
    {
        if (a*2 + (head-a)*4 == 62)
        {
            printf("%d 只鸡,%d 只兔子\n", a,head - a);
        }
    }
    return 0;
}
#include<stdio.h>
void decrement(int *num)
{
    *num=*num-1;
    // printf("after decrementing num=%d",num);
}
int main()
{

    int num=100;
    decrement(&num);
    printf("after decrementing num=%d",num);

}

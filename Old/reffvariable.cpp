#include <stdio.h>
#define TRUE 1
#define FALSE 0
void func(int a = 100, int flag = TRUE)
{
    if(flag == TRUE) 
    {
        printf("Flag is true and a = %d",a);
    }
    else 
    {
        printf("Flag is false and a = %d",a);
    }
}
int main()
{
    func(200, FALSE);
    return 0;
}
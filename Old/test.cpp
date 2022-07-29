    #include <stdio.h>
     
    int main ()
    {
        int array[] = {0, 2, 4, 6, 7, 5, 3};
        int n, result = 0;
        for (n = 0; n < 8; n++) 
        {
            result += array[n];
        }
        printf("%d\n",result);
        return 0;
    }
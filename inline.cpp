#include<stdio.h>
inline int abs(int x){
    return x<0 ? -x : x; 
}
int main(){
    int value,i;

    for(i=-2; i<2; i++){
        value = abs(i);
        printf("|%d| = %d\n", i, value);
    }
}
#include <stdio.h>

char swich(int a){
    char array[6];
    char out;
    for(int i =0;i<6;i++){
        array[i]=(char)65+i;
    }
    int b;
    while(a>0){
        int b = a%16;
        if(b>9){
            char c=array[b-10];
            out=c+out;
            a/=16;
            continue;
        }
        out=(char)b+out;
        a/=16;
    }
    return out;
}

int main(){
    unsigned int x=0x89ABCDEF;
    unsigned int mask1=0xFF;
    printf("%c\n",swich(14));
    printf("%c",x&mask1);
}
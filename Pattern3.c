#include <stdio.h>

int main()
{   int t=1;
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i>j || i==j){
             printf("%d",t); 
             t++;
            }
        }
        printf("\n");
    }

    return 0;
}


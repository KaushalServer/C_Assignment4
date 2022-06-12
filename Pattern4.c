#include <stdio.h>

int main()
{  
    for (int i=0;i<3;i++){
        for(int j=0;j<=i;j++){
            if(j==0){
             printf("%d",i+j+1); 
            }
            else
            printf("%d",i+j+2);
        }
        printf("\n");
    }

    return 0;
}


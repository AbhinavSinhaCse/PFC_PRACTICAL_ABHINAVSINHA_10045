#include<stdio.h>
int main(){
     // Abhinav Sinha _ RU-25-10045
     int pin;
     pin =1134;
     for(int i=1;i<=3;i++){
        int x;
        scanf("%d",&x);
        if(x==pin){
            printf("access granted");
            return 0;
        }
     }
     printf("account locked");
return 0;
}

//output
// 1234
// 1134
// access granted
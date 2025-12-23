#include<stdio.h>
int main(){
     // Abhinav Sinha _ RU-25-10045
    int n;
    scanf("%d",&n);
    int sum = 0;
    for(int i =0;i<=n;i++){
        if(i%2==0)sum=sum+i;
    }
    printf("SUM = %d",sum);
return 0;
}
//output = SUM = 16
//SUM = 6
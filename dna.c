#include<stdio.h>
void func(int n){
    if(n==0){
        return ;
    }
    if (n%2==1){
        printf("*** \n");
        printf(" *   \n");
    }
    if (n%2==0){
        printf(" *   \n");
        printf("*** \n");
    }
    func(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    if (n%2==0){

    func(n*3);
    }
    return 0;
}



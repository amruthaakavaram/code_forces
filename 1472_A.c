#include<stdio.h>
int main(){
    int t,n,w,h,sheets;
    printf("enter the value of t");
    scanf("%d",&t);
    while(t!=0){
        sheets=0;
        printf("enter width height and no of sheets");
        scanf("%d %d %d",&w,&h,&n);
        if(n>1){
            while(w% 2 == 0 || h% 2 == 0){
                if(w%2==0 && h%2==0){
                w=w/2;
                h=h/2;
                sheets = sheets + 4;
                }
                else if(w % 2 == 0){
                    w=w/2;
                    sheets = sheets + 2;
                }
                else if(h % 2 == 0){
                    h=h/2;
                    sheets = sheets + 2;
                }
                
            }
                
            
        }
        else{
        sheets = 1;
        }
        if(sheets>=n){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        t-=1;
    }
    return 0;
}
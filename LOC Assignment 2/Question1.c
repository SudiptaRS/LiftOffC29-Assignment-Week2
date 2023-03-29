# include<stdio.h>

void main(){
    int n;

    printf("Enter the value of n");
    scanf("%d",&n);

    int ary[n];

    int c = 0;

    printf("Enter the values of array ");
    for(int i = 0;i<n;i++){
        scanf("%d",&ary[i]);
    }

    for(int i=0;i<n;i++){
        printf("%d\n",ary[i]);
        c++;
    }
    printf("%d\n",c);

}
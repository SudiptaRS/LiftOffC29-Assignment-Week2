# include<stdio.h>
void main(){
    char str[100];
    int alphabet=0,digit=0,spclchar=0;
    printf("Enter your string");
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++){
        if((str[i]>=' ' && str[i]<='/') || (str[i]>=':' && str[i]<='@') || (str[i]>='{' && str[i]<='~')){
            spclchar++;
        }else if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z')){
            alphabet++;
        }else if(str[i]>='0' && str[i]<='9'){
            digit++;
        }
    }
    printf("The no of alphabets,digits & special char is %d %d and %d",alphabet,digit,spclchar);
}
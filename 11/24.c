#include <stdio.h>
#include<string.h>
int main()
{
    char a[100];
    
    printf("Please Eenter a Password:");
    scanf("%99s",a);
    
    int upperCaseCount=0;
    int lowerCaseCount=0;
    int other=0;
    int sum;
    int length=strlen(a);
    
    for(int i=0; i<length; i++){
        if(a[i]>='A'&&a[i]<='Z');{
            upperCaseCount++;
        }
        else if(a[i]>='a'&&a[i]<='z'){
            lowerCaseCount++;
        }
        else other++;
    }
    sum = upperCaseCount+lowerCaseCount+other;
    printf("%d\n", sum);
    if(sum >= 8 && sum <= 16)
    {
        printf("This passwarde is usetable\n");
    }
    else{printf("This passwarde is not usetable\n");}
    return 0;
}

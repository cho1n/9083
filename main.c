#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 50


int main()
{
    int cnt=0 ;

    scanf("%d",&cnt);
        for(int c=0;c<cnt;c++)
    {
        int a=0;
        int b=0;
        char str[SIZE];
        int nop=0;
        scanf("%s",str);
        for(int i=0;str[i]!='\0';i++)
            {
            if(str[i] == '(')
               a++;
            if(str[i]==')')
                b++;
            

        if(a<b){
            nop++;
           
        }
            }

        if(a!=b||nop > 0)
        {
            printf("NO\n");
          
        
        }
        else
            printf("YES\n");


    }



    return 0;
}

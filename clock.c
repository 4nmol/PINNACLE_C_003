#include<stdio.h>
#include<stdlib.h>

int main()
{
    int h,m,s;
    int d=1000;
    int H,M,S;
    printf("Set time in [HH:MM:SS] format\n");
    scanf("%d%d%d",&h,&m,&s);
    printf("Set alarm\n");
    scanf("%d%d%d",&H,&M,&S);
    
    if(h>12 || m>60 || s>60)
    {
        printf("!! Error :please try again !!\n");
        exit(0);
    }
    while(1)
    {
        
        s++;
        if(s>59)
        {
            m++;
            s=0;
            
        }
        if(m>59)
        {
            h++;
            m=0;
        }
        if(h>12)
        {
            h=1;
            
        }
        
        printf("clock time now:\n");
        printf("%02d:%02d:%02d\n",h,m,s);
        system("sleep 1");
        system("clear");
        
     }
    
    
}
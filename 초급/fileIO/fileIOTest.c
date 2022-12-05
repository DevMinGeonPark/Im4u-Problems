//
// Created by 박민건 on 2022/12/04.
//
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char filename[256];
    int a,b,r;
    fgets()

    fp=fopen("./INPUT.txt","r");
    if (fp==NULL) printf("null");
    do
    {
        r=fscanf(fp,"%d %d",&a,&b);
        if(r==EOF)
        {
            break;
        }
        else
        {
            printf("read %d values(s) : ",r);
            if(r==1)
            {
                printf("%d",a);
            }
            else
            {
                printf("%d %d\n",a,b);
            }
        }
    }while(1);
    fclose(fp);
    return 0;
}
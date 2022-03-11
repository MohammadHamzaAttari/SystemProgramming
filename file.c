#include <stdio.h>
#include <stdlib.h>
int main(){
           FILE *fptr;
           fptr=fopen('index.txt','w');
           if(fptr==NULL)
           {
              print("ERROR");
              exit(1);
           }
           int num;
           printf("Enter a number");
           scanf("%d",&num);
           fprintf(fptr,"%d",num);
           fclose(fptr);
}

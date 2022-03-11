#include <stdio.h>
#include <stdlib.h>
int main(){
           FILE *fptr;
          if(( fptr=fopen("index.txt","r"))==NULL)//reading the content in file
       
           {
              printf("ERROR");
              exit(1);
           }
           int num;
          
           fscanf(fptr,"%d",&num);
           printf("%d",num);
           fclose(fptr);
}

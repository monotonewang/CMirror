#include <printf.h> 
#include <stdio.h> 
#include <stdlib.h> 

extern int errno;

//读取到空格就暂停了
void readFile(){
    FILE *fp;  
    char buff[255];
    fp=fopen("/Users/fuqingwang/Desktop/a.txt","r");
    fscanf(fp,"%s",buff);
    printf("1:%s\n",buff);
}

//写入文件 注意路径
void testFiles(){
   
//    readFile();

    // FILE *fp;  
    // // fp=fopen("/Users/fuqingwang/Desktop/asss.txt","w+");
    // fp=fopen("/Users/fuqingwang/Desktop/a.txt","rb");

    // if(fp==NULL){
    //     fprintf(fp,"this is testing for printf...\n");
    //     fputs("This is testing for fputs...\n",fp);
    //     printf("error ");
    // }else{
    //     fclose(fp);
    // }

       int dividend = 20;
   int divisor = 0;
   int quotient;
 
   if( divisor == 0){
      fprintf(stderr, "Division by zero! Exiting...\n");
      exit(EXIT_FAILURE);
   }
   quotient = dividend / divisor;
   fprintf(stderr, "Value of quotient : %d\n", quotient );

   exit(EXIT_SUCCESS);
    

};


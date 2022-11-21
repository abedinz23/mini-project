#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void delay(int a);
int password();
void read();
void write();
void append();
void clear();
void help();
void dt();
void exits();
void startscreen();
void removes();
void renames();

void cdir();
void copy();
void calculator();





int main()
{
    int count=1;

    char a[100];

    printf("zainul Terminal\n");

    dt();
    printf("Welcome To zainul Terminal\n");
    int z=password();
    if(z==1){
    printf("Type \"help\" for more things!\n\n");
    
    

    while(1){

    printf(">>> ");
    fflush(stdin);
    scanf("%s", a);

    if(strcmp(a, "read") == 0){

        read();

    }else if(strcmp(a, "write") == 0){

        write();

    }else if(strcmp(a, "append") == 0){

        append();

    }else if(strcmp(a, "clr") == 0){

        clear();

    }else if(strcmp(a, "help") == 0){

        help();

    }else if(strcmp(a, "dt") == 0){

        dt();

    }else if(strcmp(a, "stscr") == 0){

        startscreen();

    }else if(strcmp(a, "remove") == 0){

        removes();

    }else if(strcmp(a, "rename") == 0){

        renames();

    }

    else if(strcmp(a, "cdir") == 0){

        cdir();

    }else if(strcmp(a, "copy") == 0){

        copy();

    }
    else if(strcmp(a, "exit") == 0){

        exits();

    }
    else if(strcmp(a,"calc")==0){
        calculator();
    }else{
        printf("Enter only stated things in help\n");
    }}

    }

    

    return 0;
}
void delay(int a){                       //this function is just for some time delay
    int add;
    int time=a*10000000;
    int i;
    for(i=0;i<time;i++){
        add*=i;
        add++;
        add++;
    }
}
int password(){              
    int static count=1;                //password protection , have a default password
    char pass[30];                                
    char def[30]="zainul";
    printf("enter the password: ");
    scanf("%s",&pass);
    if(strcmp(def,pass)==0){
        printf("you have entered correct password ");
        return 1;
    }
    else
    {
        printf("\nyou have entered wrong password %d attempt left \n",3-count);
        if(count<3){
        count++;
        password();
        
        }
        
    }
}
void read(){                                  //read a file
delay(2);
    char a[100];

    printf("Use .txt or any other extension to read\nEx: hello.txt\n\n");

    

    FILE *p;

    printf("Enter File Name To Read: ");
    scanf("%s", a);

    printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");

    char c;

    p = fopen(a, "r");

    if(p == NULL){
        printf("\nError\n");
    }

    printf("\n");

    

    while(!feof(p)){
        
        c = fgetc(p);
        printf("%c", c);
    }

    printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");

    fclose(p);

    

}

void write(){                        //write a file
delay(1);
    char a[100];

    printf("Use .txt or any other extension to write\nEx: hello.txt\n\n");

    

        FILE *p;

        printf("Enter File Name To Write: ");
        scanf("%s", a);

        p = fopen(a, "w");

        fflush(stdin);

        printf("Enter ~ to exit from writing\n");
        printf("Start writing: \n");

        char ch;

        while(ch != '~'){
            ch = getchar();

            if(ch != '~'){

            fputc(ch, p);

        }

    }



        fclose(p);

        printf("\n\nSuccessfully Written\n");
}

void append(){
delay(2);
    char a[100];

    printf("Use .txt or any other extension to append\nEx: hello.txt\n\n");



        FILE *p;

        printf("Enter File Name To Append: ");
        scanf("%s", a);

        if(p == NULL){
        printf("Error");
        }

        p = fopen(a, "a");

        printf("Enter ~ to exit from writing\n");
        printf("Start writing: \n");

        char ch;

        while(ch != '~'){
            ch = getchar();

            if(ch != '~'){

            fputc(ch, p);

        }

    }


        fclose(p);

        printf("\n\nSuccessfully Appended\n");

}

void clear(){
    delay(1);
    system("cls");
    
}

void dt(){
    time_t tt = time(NULL);
    printf("%s", ctime(&tt));
}

void startscreen()
{delay(1);
    system("cls");
    printf("zainul  Terminal\n\n");

    dt();
    printf("Welcome To zainul Terminal\n");
    printf("Type \"help\" for more things!\n\n");
}

void removes(){
    delay(2);
    char a[100];
    int m;

    printf("Enter a file name to remove: ");
    scanf("%s", a);

    m = remove(a);

    if(m == 0){
        printf("Successfully removed a file\n");
    }else{
        printf("Error in removing please check if the file exists in directory\n");
    }

}

void renames(){
delay(2);
    char a[100], b[100];
    int m;

    printf("Enter a file name to rename: ");
    scanf("%s", a);

    printf("\nEnter new name: ");
    scanf("%s", b);

    m = rename(a, b);

    if(m == 0){
        printf("Successfully renamed a file\n");
    }else{
        printf("Error in removing please check if the file exists in directory\n");
    }

}



void cdir(){
    delay(1);
    char a[100];

    printf("Your Directory:\n");
    system("dir");
}

void copy(){
delay(2);
    char a[100], b[100];
    int c;
    FILE *p, *q;

    printf("Use .txt or any other extension to copy\nEx: hello.txt\n\n");
    printf("Enter existing file name: ");
    scanf("%s", a);
    printf("\nEnter copy destination file name: ");
    scanf("%s", b);

    if(p == NULL){
        printf("The file is not found\n");
    }else{

    p = fopen(a, "r");
    q = fopen(b, "a");

    c = fgetc(p);
    while(feof(p)){
        fputc(c, q);
        c = fgetc(p);
    }

    fclose(p);
    fclose(q);

    printf("\nSuccessfully copied\n");
    }

}




void help(){                            //prints the operation you can perform on
    delay(2);
    printf("\n");
    printf("You can enter the following commands:\n\n");
    printf("write  >>> To write to a file\n");
    printf("read   >>> To read from a file\n");
    printf("append >>> To append a file\n");
    printf("remove >>> To remove a file\n");
    printf("rename >>> To rename a file\n");
    printf("clr    >>> To clear the screen\n");
    printf("dt     >>> To show date and time\n");
    printf("stscr  >>> To show start screen\n");
    printf("edit   >>> To edit a file\n");
    printf("cdir   >>> To see the directory(location) and files\n");
    printf("copy   >>> To copy one file to new file or append to a existing file\n");
    printf("exit   >>> To exit\n");
    printf("calc  >>> to calculate basic operations \n");
    printf("\n");
    
}

void exits(){                      //exits from the program
    exit(1);
}
void calculator(){                             //perform basic calculations
    delay(1);                               
    float num1,num2,result;
    char ch;
printf("enter first no: ");
scanf("%f",&num1);
fflush(stdin);
printf("enter the operation you want to perform (+,-,/,*): ");
scanf("%c",&ch);
fflush(stdin);
printf("enter the second no: ");
scanf("%f",&num2);


 
 switch (ch)
 {
   case '+':
    result=num1+num2;
   printf("%f\n",result);
    break;
  case '-':
   result=num1-num2;
   printf("%f\n",result);
    break;
   case '/':
  result=num1/num2;
  printf("%f\n",result);
    break;
case '*':
result=num1*num2;
printf("%f\n",result);
    break;

default:
 printf("you have entered the wrong values\n");
    break;
}
}
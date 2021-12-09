#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include "libxl.h"
// #include "extract.h"
void healthcare(){
    printf("Healthcare Questions\n");
    char ch;
    char sequence[10];
    printf("Please answer in Y or N. \n");
    printf("1. Do you suffering from sore throat?\n");
    scanf(" %c",&ch);
    sequence[0] = toupper(ch);
    printf("%c\n",sequence[0]);
    
    
    printf("2. Do you suffering from a runny nose?\n");
    scanf(" %c",&ch);
    sequence[1] = toupper(ch);
    printf("%c\n",sequence[1]);
    
    printf("3. Do you have headache?\n");
    scanf(" %c",&ch);
    sequence[2] = toupper(ch);
    printf("%c\n",sequence[2]);
    
    printf("4. Do you have cough?\n");
    scanf(" %c",&ch);
    sequence[3] = toupper(ch);
    printf("%c\n",sequence[3]);
    
    printf("5. Do you sneeze?\n");
    scanf(" %c",&ch);
    sequence[4] = toupper(ch);
    printf("%c\n",sequence[4]);
    
    printf("6. Do you suffering from high fever?\n");
    scanf(" %c",&ch);
    sequence[5] = toupper(ch);
    printf("%c\n",sequence[5]);
    
    printf("7. Does your muscle ache?\n");
    scanf(" %c",&ch);
    sequence[6] = toupper(ch);
    printf("%c\n",sequence[6]);
    
    printf("8. Do you feel cramps in your stomach?\n");
    scanf(" %c",&ch);
    sequence[7] = toupper(ch);
    printf("%c\n",sequence[7]);
    
    printf("9. Are you suffering from nausea and vomiting?\n");
    scanf(" %c",&ch);
    sequence[8] = toupper(ch);
    printf("%c\n",sequence[8]);
    
    printf("10. Do you have a loss of appetite?\n");
    scanf(" %c",&ch);
    sequence[9] = toupper(ch);
    printf("%c\n",sequence[9]);

    sequence[10] = '\0';


    printf("YOUR INPUT :");
    puts(sequence);
    // const char *p = &answers[0];
    // return p;

    BookHandle book = xlCreateBook();
    const char* s;
    
    const char* name;
    
    // printf("HERE : %s\n\n", mobile());
    if(book) 
    {
        if(xlBookLoad(book, "health.xls")) 
        {
            SheetHandle sheet = xlBookGetSheet(book, 0);
            if(sheet)
            {
                for(int i = 1; i < 10; i++) {
                    s = xlSheetReadStr(sheet, i,1,0);

                    if(strcmp(s,sequence) == 0){
                        printf("FOUND!\n");
                        name = xlSheetReadStr(sheet,i,0,0);
                        //PRINT NAME
                        if(name) printf("%s\n", name);
                        break;
                    }
                }
                } //for
        }     
    }
    
        xlBookRelease(book);
}



    BookHandle book = xlCreateBook();
    const char* s;
    
    const char* name;
    
    
void bot(){
    int choice;
    printf("Bot starting now...");
    printf("Select a category. \n   1. Healthcare \n 2. Exit");
    scanf("%d",&choice);
    
     if(choice == 1){
        healthcare();
    }
    else {
        printf("Invalid Input!");
        exit(1);
    }
}

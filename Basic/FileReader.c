#include <stdio.h>
#include <stdlib.h>


int main(){
    
    FILE *fptr;
    char ch;
    
    fptr = fopen("c:\\test1.txt","r");
    while((ch = fgetc(fptr)) != EOF)
            printf("%c", ch);
    fclose(fptr);

    
	system("pause");
	return 0;
}

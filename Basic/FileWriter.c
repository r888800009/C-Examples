#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fptr;
    char ch;
    
    fptr = fopen("c:\\test1.txt","w");
     
    while((ch = getche()) != '$'){
        if(ch != '\r')
            fputc(ch,fptr);
        else{ 
            fputc('\n',fptr);              
            printf("\n");
        } 
    }
    fclose(fptr);
	system("pause");
	return 0;
}

#include <stdio.h>
#include <string.h>

int main () {
   FILE *fp;
//   char c[] = "this is tutorialspoint";
   char buffer[32];

   /* Open file for both reading and writing */
   fp = fopen("file.txt", "r+");

   /* Read and display data */
	
   fread(buffer, 32, 1, fp);
   printf("%s\n", buffer);
   fclose(fp);
   
   return(0);
}

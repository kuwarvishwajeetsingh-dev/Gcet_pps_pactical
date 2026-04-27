#include <stdio.h>
int main() {
 FILE *fp;
 fp=fopen("kuwar1.txt","w");
 if( fp == NULL) {
        printf("Error in opening file\n");
 } else {
        printf("File opened successfully\n");}
 fprintf(fp,"This is the First line in the file.\n");
 fprintf(fp,"This is the Second line in the file.\n");
 fprintf(fp,"This is the Third line in the file.\n");
 fclose(fp);
Reading file line by line----> Just to print the content of the file!!
 fp=fopen("kuwar1.txt","r");
 if( fp == NULL) {
        printf("Error in opening file\n");  
    } else {
        printf("File opened successfully\n");
        char ch[500];
        while(fgets(ch,500,fp) != NULL){
            printf("%s",ch);   
        }
    }
    fclose(fp);
//|
//|>>>>> Reading character by character ---> for moore preise reading n performance ie counting no of characters in the file!!
// fp= fopen("kuwar1.txt","r");
// if (fp ==NULL){
//     printf("Error in opening\n");
// }
// char ch;
// int count_word=0;
// int count_line=0;
// while((ch=fgetc(fp)) !=EOF){
//     if(ch==' ' || ch=='\n'){
//         count_word++;
//     }
//     if(ch=='\n'){
//         count_line++;
//     }
// }
// fclose(fp);
// printf("Number of words: %d\n", count_word);
// printf("Number of lines: %d\n", count_line);
// fp=fopen("kuwar1.txt","a+");
// if(fp==NULL){
//     printf("Error in opening file\n");
// } else {
//     printf("File opened successfully and started in append mode\n");
//     fprintf(fp,"This is the Fourth line in the file.\n");
//     fprintf(fp,"This is the Fifth line in the file.\n");
//     fprintf(fp,"This is the Sixth line in the file.\n");
// }
// fclose(fp);
// fp=fopen("kuwar1.txt","r");
// if(fp==NULL){
//     printf("Error in opening file\n");
// } else {
//     printf("File opened successfully and ready to read\n");
//     char ch[500];
//     while(fgets(ch,500,fp)!=NULL){
//         printf("%s",ch);
//     }
// }
// fclose(fp);
    return 0;
}
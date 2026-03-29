// Struct 
//----> WHY WE USE STRUCT(structure)???--->>
//                                         It allows us to grp different types of data together under single name!!!!!!!!!!!
#include <stdio.h>
struct student {
    char name[50];
    int age;
    float grade;
}s1[3],s2[2],s3[1];   // s1 s2 s3 are called objects in mordern programming but ideally  here in C called Structure Variables.
int main() {
  ///  struct student s1[3];
    // for(int i=0;i<3;i++){
    //     printf("Enter name: ");
    //     scanf("%s", s1[i].name);
    //     printf("Enter age: ");
    //     scanf("%d", &s1[i].age);
    //     printf("Enter grade: ");
    //     scanf("%f", &s1[i].grade);
    // }
        // for(int i=0;i<3;i++){
        //     printf("Name: %s\n", s1[i].name);
        //     printf("Age: %d\n", s1[i].age);
        //     printf("Grade: %.2f\n", s1[i].grade);
        // }
        // struct student s2[2];
        // for(int i=0;i<2;i++){
        //     printf("Enter name: ");
        //     scanf("%s", s2[i].name);
        //     printf("Enter age: ");
        //     scanf("%d", &s2[i].age);
        //     printf("Enter grade: ");
        //     scanf("%f", &s2[i].grade);
        // }
        // struct student s3[1];
        // for(int i=0;i<1;i++){
        //     printf("Enter name: ");
        //     scanf("%s", s3[i].name);
        //     printf("Enter age: ");
        //     scanf("%d", &s3[i].age);
        //     printf("Enter grade: ");
        //     scanf("%f", &s3[i].grade);
        // }
        // for(int i=0;i<2;i++){
        //     printf("Name: %s\n", s2[i].name);
        //     printf("Age: %d\n", s2[i].age);
        //     printf("Grade: %.2f\n", s2[i].grade);
        // }
        // for(int i=0;i<1;i++){
        //     printf("Name: %s\n", s3[i].name);
        //     printf("Age: %d\n", s3[i].age);
        //     printf("Grade: %.2f\n", s3[i].grade);
        // }

  //  |---> for understanding
  //  |----> we used fputs as what r thy doing here in struct
   // |----> we used fgets  as what r thy doing here in struct 
   
        // printf("Enter name for s1[first member]: ");
        // fgets(s1[0].name,50,stdin);
        // fputs(s1[2].name,stdout);
        // fputs("\n",stdout);
        // fputs(s1[0].name,stdout);

    
    return 0;
}
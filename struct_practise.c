#include <stdio.h>
// struct student{
//     int roll_no;
//     char name[50];
// };
// int main(){
//     struct student s;
//     printf("enter student roll number:");
//     scanf("%d", &s.roll_no);
//     printf("enter student name:");
//     scanf("%s", s.name);
//     printf("Student Information\nStudent:%s\nRoll number:%d", s.name, s.roll_no);
// }



struct complex{
    int real, imag;
};
int main(){
    struct complex c1, c2;
    printf("Enter first complex number:");
    scanf("%d %d", &c1.real, &c1.imag);
    printf("Enter second complex number:");
    scanf("%d %d", &c2.real, &c2.imag);
    int sum_r = c1.real + c2.real;
    int sum_i = c1.imag + c2.imag;
    printf("Sum of complex numbers: %d +/- %di", sum_r, sum_i);
}
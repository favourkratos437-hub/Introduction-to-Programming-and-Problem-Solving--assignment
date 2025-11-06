//Name:Bright Atsiaya Matasio
//Reg:PA106/G/28751/25
//Description:Student examination record

#include <stdio.h>

struct Student {
    char name[50];
    char regNo[20];
    float marks;
};

int main() {
    FILE *file;
    struct Student s;

    file = fopen("results.dat", "rb"); 
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Student Results:\n");
    printf("-----------------\n");

    while (fread(&s, sizeof(struct Student), 1, file)) {
        printf("Name: %s\nReg No: %s\nMarks: %.2f\n\n", s.name, s.regNo, s.marks);
    }

    fclose(file);
    return 0;
}
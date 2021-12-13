#include <stdio.h>
#include <stdlib.h>
//Array: Banyak elemen
//Array of struct : elemen yang memiliki beberapa tipe data

// CRUD: Create, Read, Update, Delete.
struct Course
{

    char ID[10];
    char namaDosen[255];
};

struct Student{ // singluar-capital
    char name[255];
    double GPA;
    Course c;
};



// Read
void read(Student *s){ // pass pointer yang menunjuk ke alamat student
    printf("Name: %s\n", s->name); // (*s).name
    printf("GPA: %lf\n", s->GPA); // (*s).GPA
    printf("Course ID: %s\n", s->c.ID); // (*s).c.ID
    printf("Nama Dosen: %s\n", s->c.namaDosen); // (*s) c.namaDosen
}


int main(){
    Student s = {"Dodie", 3.90, {"COMP6047", "Pak Indra"}};
    printf("%s\n", s.name);
    printf("%s\n", s.c.namaDosen);
    return 0;
}
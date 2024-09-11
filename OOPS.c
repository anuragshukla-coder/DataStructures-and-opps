#include <stdio.h>
#include <string.h>

// Base class (Using struct to simulate a class)
typedef struct {
    char name[50];
    int age;
} Person;

// Function to simulate encapsulation (getter and setter for name)
void setName(Person *p, const char *name) {
    strcpy(p->name, name);
}

const char* getName(Person *p) {
    return p->name;
}

// Function to simulate encapsulation (getter and setter for age)
void setAge(Person *p, int age) {
    p->age = age;
}

int getAge(Person *p) {
    return p->age;
}

// Derived class (Inheritance)
typedef struct {
    Person base;  // Person is the base class
    int student_id;
} Student;

// Function to initialize Student (Constructor simulation)
void initStudent(Student *s, const char *name, int age, int student_id) {
    setName(&s->base, name);
    setAge(&s->base, age);
    s->student_id = student_id;
}

// Function to display Student details (Polymorphism)
void displayPerson(Person *p) {
    printf("Name: %s\n", getName(p));
    printf("Age: %d\n", getAge(p));
}

// Function to display Student details (Polymorphism)
void displayStudent(Student *s) {
    displayPerson(&s->base);  // Call base class function
    printf("Student ID: %d\n", s->student_id);
}

// Main function to demonstrate the OOP concepts
int main() {
    // Creating and initializing a Student object
    Student s1;
    initStudent(&s1, "Anurag Shukla", 20, 160250034);

    // Display Student details (Polymorphism in action)
    displayStudent(&s1);

    return 0;
}
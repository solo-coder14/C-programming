#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// create struct with person1 variable
struct Person {
  char name[50];
  int citNo;
  float salary;
}person1;

int main() {

  // assign value to name of person1
  //strcpy(person1.name, "George Orwell");
  printf("Enter the person name: ");
  scanf("%s",person1.name);

  // assign values to other person1 variables
  //person1.citNo = 1984;
  printf("Enter City No: ");
  scanf("%d",&person1.citNo);
  //person1. salary = 2500;
  printf("Enter Salary: ");
  scanf("%f",&person1.salary);

  // print struct variables
  printf("\n\t\tDisplay Information\n\n");
  printf("Name: %s\n",person1.name);
  printf("Citizenship No.: %d\n", person1.citNo);
  printf("Salary: %.2f", person1.salary);

  return 0;
}

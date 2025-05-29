#include <stdio.h>
struct info{
int year;
};
void main() {

    struct info person1;
    person1.year=10;
    printf("%d",person1.year);

}

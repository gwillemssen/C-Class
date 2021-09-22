#include <stdio.h>

typedef struct {
    char* name;
    int age;
    int height;
    int weight;
} User;

User u = {.name = "Gabriel", .age = 20, .height = 65, .weight = 120};

int main(void) {
    printf("%s\n", u.name);
    printf("%d\n", u.age);
    printf("%d\n", u.height);
    printf("%d\n", u.weight);
    return 0;
}
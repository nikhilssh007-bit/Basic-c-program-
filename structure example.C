#include <stdio.h>

struct student {
    int id;
    char name[50];
};

int main() {
    struct student s;

    scanf("%d %s", &s.id, s.name);

    printf("ID: %d\nName: %s", s.id, s.name);

    return 0;
}

#include <stdio.h>
//Your Code goes here!
char grade(int m) {
    if (m >= 90) return 'A';
    else if (m >= 75) return 'B';
    else if (m >= 60) return 'C';
    else if (m >= 40) return 'D';
    else return 'F';
}

int main() {
    int marks;
    scanf("%d", &marks);
    printf("%c", grade(marks));
    return 0;
}

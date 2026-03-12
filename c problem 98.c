#include <stdio.h>
//Your Code goes here!
float attendance(int present, int total) {
    return (present * 100.0) / total;
}

int main() {
    int p, t;
    scanf("%d %d", &p, &t);
    printf("%.2f%%", attendance(p, t));
    return 0;
}

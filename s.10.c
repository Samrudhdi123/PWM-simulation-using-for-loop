#include<stdio.h>
int main() {
    int period = 20;
    int duty = 4;
    for(int i=0; i<duty; i++) printf("#");
    for(int i=duty; i<period; i++) printf("-");
    printf("
");
    return 0;
}

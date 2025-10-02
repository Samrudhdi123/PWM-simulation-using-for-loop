#include<stdio.h>
int main() {
    int period = 45;
    int duty = 20;
    for(int i=0; i<duty; i++) printf("#");
    for(int i=duty; i<period; i++) printf("-");
    printf("
");
    return 0;
}

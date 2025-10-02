#include<stdio.h>
int main() {
    int period = 60;
    int duty = 40;
    for(int i=0; i<duty; i++) printf("#");
    for(int i=duty; i<period; i++) printf("-");
    printf("
");
    return 0;
}

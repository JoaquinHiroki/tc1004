#include <stdio.h>

int main(int argc, char **argv) {
int i;
for (i = 1; i < argc ; i++) {
    printf("Hello world %s\n",argv[i]);
}
    return 0;
}
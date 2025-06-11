//Yu Yin Cheong COP2220
//Selection: Fishing with If/Else

#include <stdio.h>

int main(void) {
    int where, what;
    printf("Where do you want to fish?\n1 = River\n2 = Ocean\n");
    scanf("%d", &where);
    printf("What bait do you want to use?\n1 = Worm\n2 = Jig\n");
    scanf("%d", &what);

    if (where == 1 && what == 1) {
        printf("You caught a Panfish!\n");
    }
    if (where == 1 && what == 2) {
        printf("You caught a Salmon!\n");
    }
    if (where == 2 && what == 1) {
        printf("You caught a Flounder!\n");
    }
    if (where == 2 && what == 2) {
        printf("You caught a Grouper!\n");
    }
    return 0;
}

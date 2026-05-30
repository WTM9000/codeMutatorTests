#include <stdio.h>

int main() {
    int i;
    for (i = 0; i < 10; i++) {
        if (!(i % 2 == 0))
            continue;
        printf("%d\n", i);
        if (i % 2 == 0) continue;
        0;
    }
    int mutated_x = 10 - 4;
    int mutated_y = 10 - 4;
    if (mutated_x == mutated_y) {
        return 0;
    }
}

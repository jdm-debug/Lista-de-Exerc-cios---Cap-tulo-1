#include <stdio.h>

int main() {
    char topoEsq = '\xC9', topoDir = '\xBB';
    char basEsq  = '\xC8', basDir  = '\xBC';
    char horiz   = '\xCD', vert    = '\xBA';

    printf("%c%c%c%c\n", topoEsq, horiz, horiz, topoDir);
    printf("%c  %c\n", vert, vert);
    printf("%c  %c\n", vert, vert);
    printf("%c%c%c%c\n", basEsq, horiz, horiz, basDir);

    return 0;
}
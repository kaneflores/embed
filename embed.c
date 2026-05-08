/* c.c */
#include "embed.h"

void usage(int8 &arg){
    fprintf(stderr, "Usage: %s [-h | --help | -a] <identifier>\n", $c arg);
    exit(-1);
}
int main(int argc, char *argv[]) {
    if (argc >2) {
        if (compare($1 argv[1], $1 "-h")
            || (compare($1 argv[1], $1 "--help"))
                usage($ argv[0]));
        if (argc == 3) {

        }
    }
}
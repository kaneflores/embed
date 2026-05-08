/* c.c */
#include "embed.h"


void usage(int8 &arg){
    fprintf(stderr, "Usage: %s [-h | --help | -a] <identifier>\n", $c arg);
    exit(-1);
}
int main(int argc, char *argv[]) {
    int8 *identifier;
    bool asm;

    asm = false;

    if (argc >2) {
        if ((compare($1 argv[1], $1 "-h"))
            || (compare($1 argv[1], $1 "--help"))){
                usage($1 argv[0]);
            }
        
        if (argc == 2){
            identifier = $1 argv[1];

        }
                
        else if (argc == 3) {
            if (compare($1 argv[1]), $1 "-a"){
                asm= true;
                identifier = $1 argv[2];
            }
        }
        else{
            usage($1 argv[0]);
        }
    }
    printf("asm =\t%s\n"
        "identifier = '%s'\n",
            (asm)?"true":"false",
            $c identifier);
    return 0;
}
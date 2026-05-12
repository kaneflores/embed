/* embed.c */
#include "embed.h"


void usage(int8 *arg){
    fprintf(stderr, "Usage: %s [-h | --help | -a] <identifier>\n", $c arg);
    exit(-1);
}

int16 length(int8 *str){
    int16 n;
    int8 *p;

    for (p=str, n =0; *p; p++, n++);

    return n;
}
bool compare(int8 *xs, int8 *ys){// if strings have different lengths, you don't want to overflow emmory
    bool ret;
    int8 *px, *py;
    int16 n, nx, ny;

    nx = length(xs);
    ny = length(ys);
    if (nx != ny){
        return false;
    }
    for ( n = nx, px = xs, py= ys, ret=true; n; px++, py++, n--){
        // at each iteration
        if(*px != *py){
            ret = false;
            break;

        }

    }
    return ret;
    
    

}

//headers
void printhdr(int8 *identifier, language lang){
    switch (lang) {
        case asm:
            printf("%s: \n", identifier);
            break;
        
        default:
        case c:
            printf("unsigned char %s[] =\n", identifier);
            break;
    }
    return; 
}


void printbody(language lang){
    int
}
int main(int argc, char *argv[]) {
    int8 *identifier;
    language lang;
    lang = c;

    identifier = 0;
    if (argc ==2){
        identifier = $1 argv[1];
    }
    else if (argc >2) {
        if ((compare($1 argv[1], $1 "-h"))
            || (compare($1 argv[1], $1 "--help"))){
                usage($1 argv[0]);
            }
        
        else if (argc == 2){
            identifier = $1 argv[1];

        }
                
        else if (argc == 3) {
            if (compare($1 argv[1], $1 "-a")){
                lang = asm;
                identifier = $1 argv[2];
            }
        }
        else{
            usage($1 argv[0]);
        }
    }
    
    else{
        usage($1 argv[0]);
    }

    printhdr(identifier, lang);
    printbody(lang);
    return 0;
    //tester
    // printf("asm =\t%s\n"
    //     "identifier = '%s'\n",
    //         (asm)?"true":"false",
    //         $c identifier);
    // if (compare($1 "abc", $1 "abc")){
    //     printf("true\n");
    // }
    // else{
    //     printf("false\n");
    // }
    
}
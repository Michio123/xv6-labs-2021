//Sleep.

#include "kernel/types.h"
#include "user/user.h"
#include "kernel/stat.h"

int main(int argc, char *argv[]){
    if (argc <= 1){
        fprintf(2, "usage: sleep seconds\n");
        exit(1);
    }
    sleep(atoi(argv[1]));
    exit(0);
}
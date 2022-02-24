#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
        pid_t process;
        process = fork();
        if(process == 0){
                exit(0);
        }
        else{
                printf("PID: %d\n", process);
        }
        while(1){
                sleep(10);
        }
        return 0;
}
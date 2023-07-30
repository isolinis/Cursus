#include <stdio.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    int fd = 5;
    int pi[2];


    pipe(pi);
    if (fork() == 0)
    {
        dup2(1, 0);
        write(1, &"Hola",6);
    }
    else
    {  wait(0);}
    return (0);
}

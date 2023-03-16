// Karuclock: A simple terminal clock
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
int main()
{
    char buff[100];
    time_t now = time(0);

    while(1 == 1)
    {
        system("clear");
        now = time(0);
        strftime(buff, 100, "%Y-%m-%d %H:%M:%S", localtime (&now));
        printf("[%s] Hello!\n", buff);
        sleep(1);
    }
    return 0;
}

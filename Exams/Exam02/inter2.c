#include <unistd.h>

void solve(char *str1, char *str2)
{
    int i ;
    int tab[256] = {0};

    i = 0;
    while(str2[i])
    {
        if(tab[(int)str2[i]] == 0)
        {
            tab[(int)str2[i]] = 1;
        }
        i++;
    }
    i = 0;
    while(str1[i])
    {
        if(tab[(int)str1[i]] ==1)
        {
            tab[(int)str1[i]] = 2;
            write(1,&str1[i],1);
        }
        i++;
    }
}
int main(int ac , char **av)
{
    if(ac ==3)
    {
        solve(av[1],av[2]);
    }
    write(1,"\n",1);
}

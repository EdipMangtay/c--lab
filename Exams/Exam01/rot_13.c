#include <unistd.h>


void put_str(char c) // Karakter yazdırma fonksiyonu
{
    write(1,&c,1); // write fonksiyonu ile karakteri yazdır

}

char rot_13(char c)
{
    if((c >= 'A' && c <= 'M') ||(c >= 'a' && c <= 'm')) // A'dan M'ye kadar olan karakterlerin ASCII değerlerine bakarak 13 ekleyince aynı karakteri elde ederiz.
    {
        return(c+13);
    }
    else if((c >= 'N' && c <= 'Z') || (c >= 'n' && c <= 'z')) // 13 karakterlik bir döngü olduğu için 13 ekleyince aynı karakteri elde ederiz.
    {
        return(c -13);
    }
    else // Diğer karakterlerde aynı karakteri döndür.
        return c;
}


int	main(int ac, char **av)
{
	int i;
	int x;

	if (ac >= 2) // En az 1 argüman bekleniyor (argv[1])
	{
		x = 1;
		while (x < ac) // Her argüman için döngü
		{
			i = 0;
			while (av[x][i]) // Her argümanın her karakteri için döngü
			{
				put_str(rot_13(av[x][i])); // Her karakteri rot_13 fonksiyonuna gönderin ve yazdırın
				i++;
			}
			write(1, "\n", 1); // Her argümandan sonra yeni satır
			x++;
		}
	}
	return (0);
}

#include <unistd.h>

// Bu fonksiyon, bir karakteri standart çıktıya yazar.
void	ft_putchar(char c)
{
    write(1, &c, 1); // Standart çıktıya bir karakter yaz
}

// Bu fonksiyon, bir tam sayıyı standart çıktıya yazar.
void	ft_putnbr(int nb)
{
    if (nb == -2147483648) // Eğer sayı en küçük int değerine eşitse
    {
        ft_putchar('-'); // Negatif işaretini yaz
        ft_putchar('2'); // En büyük basamağı yaz
        nb = 147483648; // Sayının geri kalanını güncelle
    }
    if (nb < 0) // Eğer sayı negatifse
    {
        ft_putchar('-'); // Negatif işaretini yaz
        nb *= -1; // Sayıyı pozitif yap
    }
    if (nb >= 10) // Eğer sayı iki basamaklı veya daha büyükse
    {
        ft_putnbr(nb / 10); // İlk basamağı yazdır
        ft_putnbr(nb % 10); // İkinci basamağı yazdır
    }
    else // Eğer sayı tek basamaklıysa
    {
        ft_putchar(nb + 48); // Sayıyı karaktere dönüştür ve yazdır
    }
}

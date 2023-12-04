#include <unistd.h>
#include <stdio.h>

void ft_multiple(char *str)
{
    int i;

    i=0;
    while (str[i]!='\0')
    {
        if(i%3==0 && i%5==0 || i%3==0)
        {
            write(1,"5",1);
            i++;
        }
        if(i%5==0)
        {
            write(1,"3",1);
            i++;
        }
        else
        {
            write(1,&str[i],1);
            i++;
        }
    }
}
/*int main (void)
{
	char saludo [] = "Hola me llamo Ana";
	
	ft_multiple(saludo);
	printf("\nResultado esperado: 5ol5 35 l53m5 A5a");
	return (0);
}*/

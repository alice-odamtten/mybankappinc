#include <stdio.h>

int main(void)
{
    char firstname[50], lastname[50], othername[100], buf[3];

    printf("\nHello, Welcome To Jireh Bank. Banking in your home\n");

    //create account - implement registration
    printf("creat an acount\n y or n\n");
    fgets(buf, sizeof(buf), stdin);

    if (buf == 'y')
    {
        printf("Enter first name: \n");
        
    }
}

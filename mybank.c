#include <stdio.h>

int main(void)
{
    char firstname[50], lastname[50], othername[100], buf[4];
    char pword[21], comp[21];
    int i = 3, pcorrect = 0;

    printf("\nHello, Welcome To Jireh Bank. Banking in your home\n");

    //create account - implement registration
    printf("Create an account with us? y or n\n");
    fgets(buf, sizeof(buf), stdin);

    if (buf[0] == 'y')
    {
        printf("Enter first name: \n");
        fgets(firstname, sizeof(firstname), stdin);
        printf("Enter last name: \n");
        fgets(lastname, sizeof(lastname), stdin);
        printf("Enter other name: \n");
        fgets(othername, sizeof(othername), stdin);
    }
    else
    {
        printf("Login\n");
    }

    //ask for password
}

#include <stdio.h>
#include <string.h>
void _password(void);

int main(void)
{
    char firstname[50], lastname[50], othername[100], buf[4];

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
        _password();
    }
    else
    {
        printf("Login\n");
    }
}
//ask for password
 void _password(void)
 {
    char pword[21], comp[21];
    int i = 3, pcorrect = 0, scmp;

    printf("Create a password: \n");
    fgets(pword, sizeof(pword), stdin);
    printf("Confirm password: \n");
    fgets(comp, sizeof(comp), stdin);

    scmp = strcmp(pword, comp);
    if (scmp != 0)
    {
        printf("Password Incorrect\n");
        printf("Try Again:\n");
        while (i >= 0)
        {
            printf("Create a password: \n");
            fgets(pword, sizeof(pword), stdin);
            printf("Confirm password: \n");
            fgets(comp, sizeof(comp), stdin);

            scmp = strcmp(pword, comp);
            if (scmp == 0)
            {
                pcorrect =1;
                break;
            }
            if (i > 0)
               printf(" You have %d attempt left\n", i-1);
            else
               printf(" Sorry you cannot create an account\n");
                      i--;
        }
    }
 }
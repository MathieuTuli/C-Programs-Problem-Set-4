#include <stdio.h>

int main()
{
    int alph[26],i,j,max,location,k;
    char c;

    printf("Enter a word that has at least one letter appearing more than any other: ");

    for (i=0;i<=26;i++)
        alph[i]=0;

    do
    {
        c=getchar();
        if(c>='A'&&c<='Z')
            c+=32;
        if(c>='a'&&c<='z')
        {
            j=c;
            k=j-97;
            alph[k]+=1;
        }
    } while (c!='\n');

    max=alph[0];
    for (i = 1; i<=25; i++)
    {
        if (alph[i] > max)
        {
            location=i;
            max=alph[i];
        }
    }
    c=location+97;
    printf("The letter that appeared the most was %c",c);

    return 0;
}

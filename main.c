#include <stdio.h>

int my_strlen(const char* str)
{
    if(str==NULL)
    {
        return -1;
    }

    int size=0;
    while(*str)
    {
        size++;
        str++;
    }
    return size;
}

char* trim(char* str)
{
    if(str==NULL)
        return NULL;

    int i=0;
    int start, end, dlugosc;


    while(*(str+i) != '\0')
    {
        int counter=0;
        if(*(str+i)==' ')
        {
            start=i;
            int f=0;
            for(f=1; (*(str+i+f)==' '); f++)
            {
                counter++;
            }
            end=f+i;
            dlugosc = (end-start)-1;
            if(counter>=1)
            {
                int j;
                for(j=end; *(str+j) != '\0'; j++)
                {
                    *(str+j-dlugosc) = *(str+j);
                }
                *(str+j-dlugosc) = *(str+j);
                i=0;
            }
        }
        i++;
    }

    if(*str==' ')
    {
        int g;
        for(g=1; *(str+g) != '\0'; g++)
        {
            *(str+g-1) = *(str+g);
        }
        *(str+g-1) = *(str+g);
    }

    i=0;
    while(*(str+i) != '\0')
    {
        i++;
    }
    i-=1;

    if(i<1)
    {
        return str;
    }

    if(*(str+i)==' ')
    {
        *(str+i)='\0';
    }


    return str;
}

int connect(const char* t1, const char* t2, const char* t3, char* t4, int size)
{
    if(t1==NULL || t2==NULL || t3==NULL || t4==NULL || size<1)
    {
        return 1;
    }
    trim(t1);
    trim(t2);
    trim(t3);
    int size1, size2, size3;
    size1=my_strlen(t1);
    size2=my_strlen(t2);
    size3=my_strlen(t3);

    int i;
    for(i=0; i<size1; i++)
    {
        *(t4+i) = *(t1+i);
    }
    *(t4+i) = ' ';

    for(i=0; i<size2; i++)
    {
        *(t4+size1+i+1) = *(t2+i);
    }
    *(t4+size1+i+1) = ' ';

    for(i=0; i<size3; i++)
    {
        *(t4+size1+size2+i+2) = *(t3+i);
    }
    *(t4+size3+size2+size1+2) = '\0';
    return 0;
}




int main()
{
    char tab[1001];
    char tab2[1001];
    char tab3[1001];
    char wynik[3004];

    printf("Pierwszy: ");
    scanf("%1000[^\n]", tab);

    while(getchar()!='\n'){}

    printf("Drugi: ");
    scanf("%1000[^\n]", tab2);

    while(getchar()!='\n'){}

    printf("Trzeci: ");
    scanf("%1000[^\n]", tab3);

    while(getchar()!='\n'){}

    connect(tab, tab2, tab3, wynik, 3000);
    printf("%s\n", wynik);
    return 0;
}

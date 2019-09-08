#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *dic[][40]={
    "atlas", "a volume of maps",
    "airplane","flying transportation vehicle",
    "movie", "film",
    "", ""
};

int main(void)
{
    char word[80],ch;
    char **p;

    do{
        puts("\nenter word");
        scanf("%s",word);

        p=(char **)dic;
        do{
            if(!strcmp(*p,word)){
                puts("Meaning");
                puts(*(p+1));
                break;
            }
            if (!strcmp(*p,word)) break;
            p = p + 2;
        } while(*p);
        if(!*p) puts("Word not in dictionary");
        printf("Another word?:");
        scanf("%c%*c", &ch);
    }while(toupper(ch) != 'n');
    return 0;
}

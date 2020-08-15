#include<stdio.h>
int main()
{
    char str[100]="my_name_is_edcast_future_skills";
    printf("%s", str);
    char *s=strtok(str, "_");
    while(s!=NULL)
    {
        printf("\n%s", s);
        s = strtok(NULL, "_");
    }
    return 0;
}

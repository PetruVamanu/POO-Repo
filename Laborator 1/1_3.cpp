#include <iostream>
#include <cstring>

using namespace std;

int cmp(char a[], char b[])
{
    int i = 0;
    int la = 0, lb = 0;
    while(a[la] != 0) la++;
    while(b[lb] != 0) lb++;
    if(la != lb)
    {
        return (la > lb);
    }
    while(a[i] != 0 && b[i] != 0)
    {
        if(a[i] > b[i])
            return 1;
        if(a[i] < b[i])
            return 0;
        i++;
    }
    return 0;
}
void swapp(char q[][500], int i, int j)
{
    for(int k = 0; k <= 499; ++k)
        q[i][k] ^= q[j][k] ^= q[i][k] ^= q[j][k]; 
}
int main()
{
    char str[500], cuv[500][500];
    bool ok = true;
    int words = 0;
    scanf("%499[^\n]", str);
    for(int i = 0; str[i] != 0;)
        if(str[i] != ' ')
        {
            words++;
            int len = 0;
            while(str[i] != ' ' && str[i] !=0)
                cuv[words][len++] = str[i++];
            cuv[words][len] = 0; 
        }
        else{
            i++;
        }

    do{
        ok = false;
        for(int i = 2; i <= words; ++i)
            if(cmp(cuv[i], cuv[i - 1]))
            {
                swapp(cuv, i - 1, i);
                ok = true;
            }
    }while(ok);

    for(int i = 1; i <= words; ++i)
        printf("%s\n", cuv[i]);
}
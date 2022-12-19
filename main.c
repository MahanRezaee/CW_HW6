#include <stdio.h>

int counter(char a[], char b, int n);

int main()
{
    int n;
    scanf("%d", &n);
    int light[n];
    for(int x=0; x<n; x++)
    {
        light[x]= 3;
    }

    for(int i=0;i<n; i++)
    {
        int l;
        scanf("%d", &l);
        char a[l], b[l];
        scanf("%s\n%s", a, b);

        int f1 = 0, f2 = 0;
        for(int j=0; j<l; j++)
        {
            for(int k=0; k<l; k++)
            {
                if(a[j] == b[k])
                {
                    f1 = 1;
                    int counter_j = counter(a, a[j], l);
                    int counter_k = counter(b, b[k], l);
                    if(counter_j == counter_k)
                        f2 = 1;
                }
            }
           if(f1 == 0 || f2 == 0)    light[i]= 0;
           f1 = 0;
           f2 = 0;
        }
    }

    for(int i=0; i<n; i++)
    {
        if(light[i] == 3)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}

int counter(char a[], char b, int n)
{
    int counter = 0;
    for(int i=0; i<n; i++)
    {
        if( b == a[i])   counter++;
    }

    return counter;
}

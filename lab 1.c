#include <stdio.h>

int main(void)

{
    int t,i,n,j,a,b,cnt;
    scanf("%d",&t);
    for(i=1;i<=t;++i)
    {
        scanf("%d",&n);
        cnt=0;
        for(j=1;j<=n;++j)
        {
            scanf("%d%d",&a,&b);

            if(b<a)
                ++cnt;

        }
    printf("%d\n",cnt);
    return 0;


}    }

#include<bits/stdc++.h>
#define sfi(n) scanf("%d", &n)
#define sfl(n) scanf("%lld", &n)
#define sfd(n) scanf("%lf", &n)
#define sfi2(x, y) scanf("%d %d", &x, &y);
#define sfl2(x, y) scanf("%lld %lld", &x, &y);
#define sfd2(x, y) scanf("%lf %lf", &x, &y);
#define pf(n) printf("%d", n)
#define pfc(i) printf("Case %d: ", i)
#define pfn(n) printf("%d\n", n)
#define pfdn(n) printf("%f\n", n)
#define pb push_back
#define bl printf("\n")
#define spc putchar(' ')
#define fli() freopen("in.txt","r",stdin)
#define flo() freopen("out.txt","w",stdout)
#define ll long long
#define ull unsigned long long
#define f   first
#define s   second
#define PI  acos(-1)
#define debug(x) cerr << #x << " : " << x << endl
#define find puts("I am here")
#define repe(i, n, test) for(int i=n; i<=test; i++)
#define rep(i, n, test) for(int i=n; i<test; i++)
#define MOD 1000000007
#define EPS 1e-7
#pragma comment(linker, "/stack:20000000")
#define _CRT_SECURE_NO_WARNINGS
#define MAX 1000005
#define N   100

using namespace std;


int main()
{
    //fli();
    //flo();
    int t, a, b, c, d;
    double x, r, v, r1, r2, h, p;
    sfi(t);
    for(int i = 1; i <=t; i++)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        r1 = a;
        r2 = b;
        h = c;
        p = d;
        x = (h*r2)/(r1-r2);
        r = r2 + (p*(r1-r2))/h;
        v = (1.00/3*PI*(r*r)*(p+x)) - (1.00/3*PI*(r2*r2)*x);
        printf("Case %d: %.6lf\n",i,v <= 0.00? 0:v);
    }


    return 0;
}

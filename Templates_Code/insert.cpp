#include <bits/stdc++.h>

using namespace std;

#define SZ(x) ((int)x.size())
#define Int register int
#define mod 998244353
#define ll long long
#define MAXN 1000005

int mul(int a, int b)
{ return 1ll * a * b; }

int dec(int a, int b)
{ return a >= b ? a - b : a + mod - b; }

int add(int a, int b)
{ return a + b >= mod ? a + b - mod : a + b; }

int qkpow(int a, int k)
{
    int res = 1;
    for (; k; k >>= 1, a = 1ll * a * a) if (k & 1) res = 1ll * res * a;
    return res;
}

int inv(int x)
{ return qkpow(x, mod - 2); }

typedef vector<int> poly;

int w[MAXN], rev[MAXN];

void init_ntt()
{
    int lim = 1 << 18;
    for (Int i = 0; i < lim; ++i) rev[i] = (rev[i >> 1] >> 1) | ((i & 1) << 17);
    int Wn = qkpow(3, (mod - 1) / lim);
    w[lim >> 1] = 1;
    for (Int i = lim / 2 + 1; i < lim; ++i) w[i] = mul(w[i - 1], Wn);
    for (Int i = lim / 2 - 1; i; --i) w[i] = w[i << 1];
}

void ntt(poly &a, int lim, int type)
{
#define G 3
#define Gi 332748118
    static int d[MAXN];
    for (Int i = 0, z = 18 - __builtin_ctz(lim); i < lim; ++i) d[rev[i] >> z] = a[i];
    for (Int i = 1; i < lim; i <<= 1)
        for (Int j = 0; j < lim; j += i << 1)
            for (Int k = 0; k < i; ++k)
            {
                int x = mul(w[i + k], d[i + j + k]);
                d[i + j + k] = dec(d[j + k], x), d[j + k] = add(d[j + k], x);
            }
    for (Int i = 0; i < lim; ++i) a[i] = d[i];
    if (type == -1)
    {
        reverse(a.begin() + 1, a.begin() + lim);
        for (Int i = 0, Inv = inv(lim); i < lim; ++i) a[i] = mul(a[i], Inv);
    }
#undef G
#undef Gi
}

poly operator+(poly a, poly b)
{
    a.resize(max(SZ (a), SZ (b)));
    for (Int i = 0; i < SZ (b); ++i) a[i] = add(a[i], b[i]);
    return a;
}

poly operator-(poly a, poly b)
{
    a.resize(max(SZ (a), SZ (b)));
    for (Int i = 0; i < SZ (b); ++i) a[i] = dec(a[i], b[i]);
    return a;
}

poly operator*(poly a, int b)
{
    for (Int i = 0; i < SZ (a); ++i) a[i] = mul(a[i], b);
    return a;
}

poly der(poly a)
{
    for (Int i = 0; i < SZ (a) - 1; ++i) a[i] = mul(a[i + 1], i + 1);
    a.pop_back();
    return a;
}

poly operator*(poly a, poly b)
{
    int d = SZ (a) + SZ (b) - 1, lim = 1;
    while (lim < d) lim <<= 1;
    a.resize(lim), b.resize(lim);
    ntt(a, lim, 1), ntt(b, lim, 1);
    for (Int i = 0; i < lim; ++i) a[i] = mul(a[i], b[i]);
    ntt(a, lim, -1), a.resize(d);
    return a;
}

poly inv(poly a, int n)
{
    poly b(1, inv(a[0])), c;
    for (Int l = 4; (l >> 2) < n; l <<= 1)
    {
        c.resize(l >> 1);
        for (Int i = 0; i < (l >> 1); ++i) c[i] = i < n ? a[i] : 0;
        c.resize(l), b.resize(l);
        ntt(c, l, 1), ntt(b, l, 1);
        for (Int i = 0; i < l; ++i) b[i] = mul(b[i], dec(2, mul(b[i], c[i])));
        ntt(b, l, -1), b.resize(l >> 1);
    }
    b.resize(n);
    return b;
}

poly inv(poly a)
{ return inv(a, SZ (a)); }

poly Mod(poly F, poly G)
{
    int n = SZ (F) - 1, m = SZ (G) - 1;
    poly Q;
    Q.resize(m + 1);
    for (Int i = 0; i <= m; ++i) Q[i] = G[i];
    reverse(F.begin(), F.end()), reverse(G.begin(), G.end()), reverse(Q.begin(), Q.end()), Q.resize(n - m + 1), Q = inv(
            Q) * F, Q.resize(n - m + 1), reverse(Q.begin(), Q.end());
    reverse(F.begin(), F.end()), reverse(G.begin(), G.end()), Q = G * Q, Q.resize(m), Q = F - Q, Q.resize(m);
    return Q;
}

template<typename T>
inline void read(T &t)
{
    t = 0;
    char c = getchar();
    int f = 1;
    while (c < '0' || c > '9')
    {
        if (c == '-') f = -f;
        c = getchar();
    }
    while (c >= '0' && c <= '9')
    {
        t = (t << 3) + (t << 1) + c - '0';
        c = getchar();
    }
    t *= f;
}

template<typename T, typename ... Args>
inline void read(T &t, Args &... args)
{
    read(t);
    read(args...);
}

template<typename T>
inline void write(T x)
{
    if (x < 0)
    {
        x = -x;
        putchar('-');
    }
    if (x > 9) write(x / 10);
    putchar(x % 10 + '0');
}

int n, a[MAXN], bb[MAXN], AAns[MAXN];
poly AAA, D[MAXN << 2], DR[MAXN << 2];

void divide1(int i, int l, int r)
{
    if (l == r) return DR[i].resize(2), DR[i][0] = mod - a[l], DR[i][1] = 1, void();
    int mid = (l + r) >> 1;
    divide1(i << 1, l, mid), divide1(i << 1 | 1, mid + 1, r);
    DR[i] = DR[i << 1] * DR[i << 1 | 1];
}

ll c1, c2, c3, c4, b[17];

void divide2(int i, int l, int r, poly AA)
{
    if (r - l <= 512)
    {
        for (Int i = l; i <= r; ++i)
        {
            int x = a[i];
            b[0] = 1;
            int now = r - l;
            for (Int j = 1; j <= 16; ++j) b[j] = b[j - 1] * x;
            ll Ans = AA[now];
            for (Int j = now - 1; j - 15 >= 0; j -= 16)
            {
                c1 = Ans * b[16] + AA[j] * b[15] + AA[j - 1] * b[14] + AA[j - 2] * b[13], c1 %= mod;
                c2 = AA[j - 3] * b[12] + AA[j - 4] * b[11] + AA[j - 5] * b[10] + AA[j - 6] * b[9], c2 %= mod;
                c3 = AA[j - 7] * b[8] + AA[j - 8] * b[7] + AA[j - 9] * b[6] + AA[j - 10] * b[5], c3 %= mod;
                c4 = AA[j - 11] * b[4] + AA[j - 12] * b[3] + AA[j - 13] * b[2] + AA[j - 14] * b[1], c4 %= mod;
                Ans = (c1 + c2 + c3 + c4 + AA[j - 15]);
            }
            for (Int j = now % 16 - 1; ~j; --j) Ans = (Ans * x + AA[j]);
            AAns[i] = Ans;
        }
        return;
    }
    if (l == r) return write(AA[0]), putchar('\n'), void();
    poly B = Mod(AA, DR[i << 1]);
    int mid = (l + r) >> 1;
    divide2(i << 1, l, mid, B);
    B = Mod(AA, DR[i << 1 | 1]);
    divide2(i << 1 | 1, mid + 1, r, B);
}

void divide3(int i, int l, int r)
{
    if (l == r) return D[i].resize(1), D[i][0] = mul(bb[l], inv(AAns[l])), void();
    int mid = (l + r) >> 1;
    divide3(i << 1, l, mid), divide3(i << 1 | 1, mid + 1, r);
    D[i] = DR[i << 1 | 1] * D[i << 1] + DR[i << 1] * D[i << 1 | 1];
}

signed main()
{
    init_ntt(), read(n);
    for (Int i = 1; i <= n; ++i) read(a[i], bb[i]);
    divide1(1, 1, n), AAA = der(DR[1]), divide2(1, 1, n, AAA), divide3(1, 1, n);
    for (Int i = 0; i < n; ++i) write(D[1][i]), putchar(' ');
    putchar('\n');
    return 0;
}
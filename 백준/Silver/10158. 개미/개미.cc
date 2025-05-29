#include<iostream>

int xy(int w, int p, int t)
{
    t = t - (w - p);
    if ((t / w) % 2 == 1) return (t % w);
    else return w - abs(t % w);
}
int main()
{
    int w, h, p, q, t;

    std::cin >> w >> h >> p >> q >> t;

    printf("%d %d", xy(w, p, t), xy(h, q, t));
}
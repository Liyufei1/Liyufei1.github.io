long mult2(long,long);

void mulstore(long a, long b, long *c)
{
    long d = mult2(a,b);
    *c = d;
}
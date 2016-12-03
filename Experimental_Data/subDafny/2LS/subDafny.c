extern void __VERIFIER_error(void);
extern void __VERIFIER_assume(int);
void __VERIFIER_assert(int cond) {
    if (!(cond)) {
    ERROR: __VERIFIER_error();
    }
    return;
}
int __VERIFIER_nondet_int();

void main()
{
    int X;
    int Y;
    int r;
    int l;
    r = X;
    __VERIFIER_assume(X >= 0 && Y>=0);
    if(Y < 0)
    {
        l = Y;
        while(l != 0)
        {
            r = r + 1;
            l = l + 1;
        }
    }
    else
    {
        l = Y;
        while(l != 0) {
            r = r - 1;
            l = l - 1;
        }
    }
    __VERIFIER_assert(r == X-Y);
}

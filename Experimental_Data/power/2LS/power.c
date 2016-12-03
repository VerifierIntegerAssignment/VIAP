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



		int J,P;
                int a;
                int b;
		J=0;
		P=1;
                __VERIFIER_assume(a>=0 && b>=0);
		while(J<b)
		{
			P=P*a;
			J=J+1;
		}
	

	__VERIFIER_assert(P == power(a,b));
	

}


int power(int a,int b)
{
    __VERIFIER_assume(a>=0 && b>=0);
    if (a == 0 && b>0)
    { return 0;
    }
    else
    {
        if (b == 0)
        {
            return 1;
        }
        else
        {
            return power(a,b-1)*a;
        }
    }
}
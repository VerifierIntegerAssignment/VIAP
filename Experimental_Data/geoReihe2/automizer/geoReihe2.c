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


	

		int m;
  		int l;
  		int c;
                int Z;
                int K;
		m = 1;
  		l = 1;
  		c = 1;
                __VERIFIER_assume(Z>1 && K>0);

  		while (c < K){
    			 c = c + 1;
    			 m = m*Z + 1;
    			 l = l*Z;
  		}

                __VERIFIER_assert(m == ((power(Z,K)-1)/(Z-1)));
	

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
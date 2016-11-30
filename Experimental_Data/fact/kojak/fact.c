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
		int i;
		int F;
		int X;
		
		i=1;
		F=1;
		__VERIFIER_assume(X>=0);
		
		while(i <= X)
		{
			F=F*i;
			i=i+1;
		}
                __VERIFIER_assert(F==factorial(X));
}


int factorial(int n) 
{
        __VERIFIER_assume(n>=0);
        if (n == 0){
            return 1;
            }
       else {
           return factorial(n-1)*n;
           }
}
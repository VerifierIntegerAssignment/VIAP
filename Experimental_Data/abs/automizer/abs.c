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
	int a;
        int X;	
	if(X<=0)
	{
		a=-X;
	}
	else
	{
		a=X;
	}
        __VERIFIER_assert(a>=0);
}

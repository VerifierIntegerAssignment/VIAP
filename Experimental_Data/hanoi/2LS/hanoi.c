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


int i,h; 
int x;
i=1;
h=1;

  __VERIFIER_assume(x>=0);
  while (i < x) {
    h=2*h+1;
    i=i+1;     
  }
	
__VERIFIER_assert(h==power(2,x)-1);
	
	

}


int power(int a,int b)
{
    assume(a>=0 && b>=0);
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
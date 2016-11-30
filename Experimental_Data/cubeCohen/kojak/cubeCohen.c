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
		 int i,m,y,z;
                int X;
		i=1;
 		m=0;   
		y=1;   
		z=6;
        __VERIFIER_assume(X >= 0);
    	while( i<=X )
        {
               	i=i+1;
        	m=m+y;
        	y=y+z;
        	z=z+6;
        }
        __VERIFIER_assert(m == X*X*X);
}

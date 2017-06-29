>>> file_name='sv-benchmarks/loops/sum_array_false-unreach-call.i'
>>> prove_auto(file_name)
Program Body
{
  int RET = 0;
  int _1_PROVE[];
  unsigned M = __VERIFIER_nondet_uint();
  int A[];
  int B[];
  int C[];
  unsigned i;
  i = 0;
  while (i < M)
  {
    A[i] = __VERIFIER_nondet_int();
    i = i + 1;
  }

  i = 0;
  while (i < M)
  {
    B[i] = __VERIFIER_nondet_int();
    i = i + 1;
  }

  i = 0;
  while (i < M)
  {
    C[i] = A[i] + B[i];
    i = i + 1;
  }

  i = 0;
  while (i < M)
  {
    _1_PROVE[i] = C[i] == (A[i] - B[i]);
    i = i + 1;
  }

}

Function Name:
main
Return Type:
int
Input Variables:
{}
Local Variables:
{ A:array C:array B:array i:unsigned _1_PROVE:array M:unsigned RET:int}
Program Body
{
  int RET = 0;
  int _1_FAILED = 0;
  if (cond <= 0)
  {
    ERROR:


    _1_FAILED = 1;
  }

}

Function Name:
__VERIFIER_assert
Return Type:
void
Input Variables:
{ cond:int}
Local Variables:
{ _1_FAILED:int RET:int}
Output for main:
Output in prefix notation:
1. Frame axioms:
(= A1 A)
(= C1 C)
(= B1 B)
(= _1_PROVE1 _1_PROVE)

2. Output equations:
(= i1 (+ _N4 0))
(= (d1array1 _x1 _x2) (d1array8 _x1 _x2 _N4))
(= M1 __VERIFIER_nondet_uint)
(= main 0)

3. Other axioms:
(= (d1array2 _x1 _x2 (+ _n1 1)) (ite (and (= _x1 A) (= _x2 (+ _n1 0))) __VERIFIE
R_nondet_int (d1array2 _x1 _x2 _n1)))
(= (d1array2 _x1 _x2 0) (d1array _x1 _x2))
(>= _N1 (- __VERIFIER_nondet_uint 0))
(implies (< _n1 _N1) (< (+ _n1 0) __VERIFIER_nondet_uint))
(= (d1array4 _x1 _x2 (+ _n2 1)) (ite (and (= _x1 B) (= _x2 (+ _n2 0))) __VERIFIE
R_nondet_int (d1array4 _x1 _x2 _n2)))
(= (d1array4 _x1 _x2 0) (d1array2 _x1 _x2 _N1))
(>= _N2 (- __VERIFIER_nondet_uint 0))
(implies (< _n2 _N2) (< (+ _n2 0) __VERIFIER_nondet_uint))
(= (d1array6 _x1 _x2 (+ _n3 1)) (ite (and (= _x1 C) (= _x2 (+ _n3 0))) (+ (d1arr
ay6 A (+ _n3 0) _n3) (d1array6 B (+ _n3 0) _n3)) (d1array6 _x1 _x2 _n3)))
(= (d1array6 _x1 _x2 0) (d1array4 _x1 _x2 _N2))
(>= _N3 (- __VERIFIER_nondet_uint 0))
(implies (< _n3 _N3) (< (+ _n3 0) __VERIFIER_nondet_uint))
(= (d1array8 _x1 _x2 0) (d1array6 _x1 _x2 _N3))
(>= _N4 (- __VERIFIER_nondet_uint 0))
(implies (< _n4 _N4) (< (+ _n4 0) __VERIFIER_nondet_uint))

Output in normal notation:
1. Frame axioms:
A1 = A
C1 = C
B1 = B
_1_PROVE1 = _1_PROVE

2. Output equations:
i1 = (_N4+0)
d1array1(_x1,_x2) = d1array8(_x1,_x2,_N4)
M1 = __VERIFIER_nondet_uint
main = 0

3. Other axioms:
d1array2(_x1,_x2,(_n1+1)) = ite(((_x1=A) and (_x2=(_n1+0))),__VERIFIER_nondet_in
t,d1array2(_x1,_x2,_n1))
d1array2(_x1,_x2,0) = d1array(_x1,_x2)
(_N1>=(__VERIFIER_nondet_uint-0))
(_n1<_N1) -> ((_n1+0)<__VERIFIER_nondet_uint)
d1array4(_x1,_x2,(_n2+1)) = ite(((_x1=B) and (_x2=(_n2+0))),__VERIFIER_nondet_in
t,d1array4(_x1,_x2,_n2))
d1array4(_x1,_x2,0) = d1array2(_x1,_x2,_N1)
(_N2>=(__VERIFIER_nondet_uint-0))
(_n2<_N2) -> ((_n2+0)<__VERIFIER_nondet_uint)
d1array6(_x1,_x2,(_n3+1)) = ite(((_x1=C) and (_x2=(_n3+0))),(d1array6(A,(_n3+0),
_n3)+d1array6(B,(_n3+0),_n3)),d1array6(_x1,_x2,_n3))
d1array6(_x1,_x2,0) = d1array4(_x1,_x2,_N2)
(_N3>=(__VERIFIER_nondet_uint-0))
(_n3<_N3) -> ((_n3+0)<__VERIFIER_nondet_uint)
d1array8(_x1,_x2,0) = d1array6(_x1,_x2,_N3)
(_N4>=(__VERIFIER_nondet_uint-0))
(_n4<_N4) -> ((_n4+0)<__VERIFIER_nondet_uint)

4. Assumption :

5. Assertion :
(d1array8(C,(_n4+0),_n4)==(d1array8(A,(_n4+0),_n4)-d1array8(B,(_n4+0),_n4)))
Output for __VERIFIER_assert:
Output in prefix notation:
1. Frame axioms:
(= (cond1 cond) cond)

2. Output equations:
(= (_1_FAILED1 cond) (ite (<= cond 0) 1 0))
(= (__VERIFIER_assert cond) 0)

3. Other axioms:

Output in normal notation:
1. Frame axioms:
cond1(cond) = cond

2. Output equations:
_1_FAILED1(cond) = ite((cond<=0),1,0)
__VERIFIER_assert(cond) = 0

3. Other axioms:

4. Assumption :

5. Assertion :

----Proving Process----


Function Name--main

Assertion To Prove:ForAll([_n4],(d1array8(C, _n4, _n4)==d1array8(A, _n4, _n4) -
d1array8(B, _n4, _n4)))
Failed to Prove

Function Name--__VERIFIER_assert
No Assertion to Prove
0
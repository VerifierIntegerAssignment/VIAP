from z3 import *
set_param(proof=True)
_p1=Int('_p1')
_p2=Int('_p2')
_n=Int('_n')
arraySort = DeclareSort('arraySort')
_f=Function('_f',IntSort(),IntSort())
_1_ASSUME=Int('_1_ASSUME')
x=Int('x')
_1_PROVE=Int('_1_PROVE')
y=Int('y')
RET=Int('RET')
_1_ASSUME1=Int('_1_ASSUME1')
_1_PROVE1=Int('_1_PROVE1')
RET1=Int('RET1')
x1=Int('x1')
y1=Int('y1')
x3=Function('x3',IntSort(),IntSort())
_N1=Const('_N1',IntSort())
_n1=Int('_n1')
__VERIFIER_nondet_uint=Int('__VERIFIER_nondet_uint')
__VERIFIER_nondet_uint=Int('__VERIFIER_nondet_uint')
main=Int('main')
__VERIFIER_assert=Function('__VERIFIER_assert',RealSort(),IntSort())
_s=Solver()
_s.add(ForAll([_n],Implies(_n>=0, _f(_n)==_n)))
_s.set("timeout",60000)
_s.add(y1 == __VERIFIER_nondet_uint)
_s.add(x1 == x3(_N1))
_s.add(main == 0)
_s.add(ForAll([_n1],Implies(_n1>=0,x3(_n1 + 1) == If(x3(_n1)<(__VERIFIER_nondet_uint/x3(_n1)),x3(_n1),x3(_n1) + 1))))
_s.add(x3(0) == 1)
_s.add(0 <= -__VERIFIER_nondet_uint + x3(_N1))
_s.add(ForAll([_n1],Implies(And(_n1 < _N1,_n1>=0),x3(_f(_n1)) < __VERIFIER_nondet_uint)))
_s.add(Or(_N1==0,x3(_N1 - 1) < __VERIFIER_nondet_uint))
_s.add(_N1>=0)
_s.add(__VERIFIER_nondet_uint > 0)
_s.add(Not((x3(_N1)!=__VERIFIER_nondet_uint)))
if sat==_s.check():
	print "Counter Example"
	print _s.model()
	witnessXmlStr=['<?xml version="1.0" encoding="UTF-8" standalone="no"?><graphml xmlns="http://graphml.graphdrawing.org/xmlns" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance"><key attr.name="isEntryNode" attr.type="boolean" for="node" id="entry"><default>false</default></key><key attr.name="isViolationNode" attr.type="boolean" for="node" id="violation"><default>false</default></key><key attr.name="witness-type" attr.type="string" for="graph" id="witness-type"/><key attr.name="sourcecodelang" attr.type="string" for="graph" id="sourcecodelang"/><key attr.name="producer" attr.type="string" for="graph" id="producer"/><key attr.name="specification" attr.type="string" for="graph" id="specification"/><key attr.name="programFile" attr.type="string" for="graph" id="programfile"/><key attr.name="programHash" attr.type="string" for="graph" id="programhash"/><key attr.name="memoryModel" attr.type="string" for="graph" id="memorymodel"/><key attr.name="architecture" attr.type="string" for="graph" id="architecture"/><key attr.name="startline" attr.type="int" for="edge" id="startline"/><key attr.name="assumption" attr.type="string" for="edge" id="assumption"/><key attr.name="assumption.scope" attr.type="string" for="edge" id="assumption.scope"/><key attr.name="assumption.resultfunction" attr.type="string" for="edge" id="assumption.resultfunction"/><graph edgedefault="directed"><data key="witness-type">violation_witness</data><data key="sourcecodelang">C</data><data key="producer">CPAchecker 1.6.1-svn</data><data key="specification">CHECK( init(main()), LTL(G ! call(__VERIFIER_error())) )</data><data key="programfile">sv-benchmarks/loop-acceleration/phases_false-unreach-call2.i</data><data key="programhash">1776ed2413d170f227b69d8c79ba700d31db6f75</data><data key="memorymodel">precise</data><data key="architecture">32bit</data><node id="entry"><data key="entry">true</data></node><node id="error"><data key="violation">true</data></node><edge source="entry" target="error">', '<data key="assumption.scope">main</data><data key="assumption.resultfunction">__VERIFIER_nondet_int</data></edge></graph></graphml>', 'main', 'sv-benchmarks/loop-acceleration/phases_false-unreach-call2.i']
	middle=''
	for element in _s.model():
		if str(element)==witnessXmlStr[2]:
			middle+='<data key="assumption">'+'\\'+'result=='+str(_s.model()[element])+'</data>'
	file = open(witnessXmlStr[3]+'_witness.graphml', 'w')
	file.write(witnessXmlStr[0]+middle+witnessXmlStr[1])
	file.close()
elif unsat==_s.check():
	_s.check()
	if os.path.isfile('j2llogs.logs'):
		file = open('j2llogs.logs', 'a')
		file.write("\n**************\nProof Details\n**************\n"+str(_s.proof().children())+"\n")
		file.close()
	else:
		file = open('j2llogs.logs', 'w')
		file.write("\n**************\nProof Details\n**************\n"+str(_s.proof().children())+"\n")
		file.close()
	print "Successfully Proved"
else:
	print "Failed To Prove"
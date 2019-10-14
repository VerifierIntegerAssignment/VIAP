from z3 import *
set_param(proof=True)
StructTypeSort = DeclareSort('StructTypeSort')
SSort = DeclareSort('SSort')
_x1=Const('_x1',StructTypeSort)
_x2=Const('_x2',SSort)
StructType_s=Function('StructType_s',StructTypeSort,SSort)
StructType_S_x1=Function('StructType_S_x1',StructTypeSort,SSort,IntSort())
StructType_S_y1=Function('StructType_S_y1',StructTypeSort,SSort,IntSort())
StructType_S_x=Function('StructType_S_x',StructTypeSort,SSort,IntSort())
StructType_S_y=Function('StructType_S_y',StructTypeSort,SSort,IntSort())
_s=Solver()
_s.add(ForAll([_x1,_x2],StructType_S_x1(_x1,_x2)==If(_x2==StructType_s(_x1),1,StructType_S_x(_x1,_x2))))
_s.add(ForAll([_x1,_x2],StructType_S_y1(_x1,_x2)==If(_x2==StructType_s(_x1),2,StructType_S_y(_x1,_x2))))
_s.add(Not(ForAll([_x1],StructType_S_x1(_x1,StructType_s(_x1))==1)))
if sat==_s.check():
	print "Counter Example"
elif unsat==_s.check():
	print "Successfully Proved"
else:
	print "Failed To Prove"
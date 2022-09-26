from kanren import run,var,fact
from kanren.assoccomm import eq_assoccomm as eq
from kanren.assoccomm import commutative,associative

add='add' #Defining operations
mul='mul'

fact(commutative,mul) #Addition and multiplication are commutative and associative
fact(commutative,add)
fact(associative,mul)
fact(associative,add)

a,b,c=var('a'),var('b'),var('c') #Defining variables
#2ab+b+5c is the expression we have'

expression=(add, (mul, 2, a, b), b, (mul, 5, c))
expression=(add,(mul,5,-2),(mul,(add,1,(mul,2,5)),-1)) #Expression

expr1=(add,(mul,(add,1,(mul,2,a)),b),(mul,5,c)) #Expressions to match
expr2=(add,(mul,c,5),(mul,b,(add,(mul,2,a),1)))
expr3=(add,(add,(mul,(mul,2,a),b),b),(mul,5,c))

print(run(0, (a,b,c), eq(expression, expr1)))
print(run(0, (a,b), eq(expression, expr2)))
print(run(0, (a), eq(expression, expr3)))

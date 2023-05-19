import numpy
a=numpy.array([[2,3,4],[7,2,8],[8,5,7]])
b=numpy.array([[7,3,9],[7,5,3],[8,4,6]])

add=a+b
sub=a-b
mul=a*b

print("addition=\n",add)
print("subtraction\n",sub)
print("multiplication\n",sub)
print("shape of addition matrix")
print(add.shape)
print("shape  of subtraction matrix")
print(sub.shape)
print("shape  of multiplication matrix")
print(mul.shape)
print("datatype of addition matrix ")
print(add.dtype)

print("datatype of subtraction matrix ")
print(sub.dtype)

print("datatype of multipication matrix ")
print(mul.dtype)

print("Flattened output of addition matrix:")
print(add.flatten())
print("Flattened output of subtraction matrix:")
print(sub.flatten())
print("Flattened output of multiplication matrix:")
print(mul.flatten())
print("Dimension of Addition Matrix:")
print(add.ndim)
print("Dimension of Subtraction Matrix:")
print(sub.ndim)
print("Dimension of Multiplication Matrix:")
print(mul.ndim)
rank = numpy.linalg.matrix_rank(add)
print("Rank of Addition matrix =",rank)
rank2 = numpy.linalg.matrix_rank(sub)
print("Rank of Subtraction matrix =",rank2)
rank3 = numpy.linalg.matrix_rank(mul)
print("Rank of Multiplication matrix =",rank3)
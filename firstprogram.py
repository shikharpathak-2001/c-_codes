a,b = 0, 1
# non-zero = true
while b < 10:
	# formatted output, without \n
  print(f'{b}')
	# multiple assignment
  a,b = b, a+b
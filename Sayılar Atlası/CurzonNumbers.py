def IsCurzon(x):
	if (2**x + 1) % (2 * x + 1) == 0:
		return True

	else:
		return False

for x in range(100):
    if IsCurzon(x + 1):
        print(x + 1);
s = open('24.txt').readline()
k = i = mx = kt = 0


while i < len(s):
	if s[i]=='.':
		i+=1
		kt+= 1
		if kt>5:
			break
		else:
			k+=1
			if k>mx:mx=k
	else:
		k+=1
		if k>mx:mx=k
		i+=1

print(k)
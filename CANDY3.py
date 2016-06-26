t=input()
for _ in xrange(t):
	s=raw_input()
	n=input()
	sum=0
	for _a in xrange(n):
		sum+=input()
	if sum%n==0:
		print "YES"
	else:
		print "NO"
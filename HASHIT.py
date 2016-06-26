t=input()
for _ in xrange(t):
	n=input()
	hash={}
	for _n in xrange(n):
		s=raw_input()
		key=0
		b=s[4:]
		l=0
		for i in b:
			l+=1
			key+=(ord(i)*l)
		key=(key*19)%101
		if s[0]=="A":
			#key doesn't exits
		#	print b+":key:"+str(key)
		
			word_exists=0
			if hash.get(key,-1)==-1:
				hash[key]=[b,[]]
				word_exists=1
				
			elif hash[key][0]=='_nil':
				hash[key][0]=b
				word_exists=1
			else:
				#check if word exists
				if hash[key][0]==b:
					word_exists=1
				else:
					f=hash[key][1]
					for i in f:
						if hash[i][0]==b:
							word_exists=1
							break
						
			#open_addressing
			if word_exists==0:
				#finding the open_address
				for j in xrange(1,20):
					open=(key+j**2 + 23*j)%101
					
					if hash.get(open,-1)==-1:
						hash[open]=[b,[]]
						break
					
					elif hash[open][0]=='_nil':
						hash[open][0]=b
						break
					else:
						continue
					
				hash[key][1].append(open)
			#	print b+":open:"+str(open)
				
			else:
				continue
			
			
		else:
			if hash.get(key,-1)!=-1:
				if hash[key][0]==b:
					hash[key][0]='_nil'
				else:
					f=hash[key][1]
					rem=-1
					for i in f:
						if hash[i][0]==b:
							hash[i][0]='_nil'
							rem=i
							break
					if rem>0:
						hash[key][1].remove(rem)
			else:
				continue
	 
	#printing
	a=sorted(hash)
	#print a
	res={}
	#print hash
	for key in a:
		if hash[key][0]!="_nil":
			res[key]=hash[key][0]
	
	print len(res)
	a=sorted(res)
	#print res
	#print a
	for i in a:
		print str(i)+":"+str(res[i])
		
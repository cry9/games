from random import *
def num_hits():
	a=randint(1,2)
	b=randint(1,2)
	if a==b:
		c=input("Wanna try? (y/n): ")
		d=randint(1,5)
		print("")
		a = 0
		b = 0
		if c != 'n' and c!= 'no'and c!='No' and c!='N':
			print("")
			print("Go",d,"time(s).")
			print("")
			c=0
			num_hits()
	else:
		c=input("Wanna try? (y/n): ")
		print("")
		a=0
		b=0
		if c != 'n' and c!= 'no'and c!='No' and c!='N':
			print("")
			print("Try again. You may either go once or be skipped.")
			print("")
			c=0
			num_hits()
num_hits()
print("Goodbye (:")

import random
import sys

def asciicheck(key):
	asciisum = 0
	for i in key:
		asciisum += ord(i)
	return asciisum

key = ""
while True:
	key += random.choice("abcdefghijklmnopqrstuvABCDEFGHIJKLMNOPQRSTUVWXYZ123456789")
	count = asciicheck(key)
	# change 811 to the desired ascii
	if count > 811:
		key = ""
	elif count == 811:
		print("key : ", key)

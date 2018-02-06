
def is_unique(my_string):
	temp_string = ""
	for new_char in my_string:
		for used_char in temp_string:
			if new_char == used_char:
				print(my_string + " is not unique")
				return False;
		temp_string += new_char;
	print(my_string + "is unique")
	return True;



print is_unique('milk')     # True
print is_unique('trashy')   # True
print is_unique('minister') # False
print is_unique('teeny')    # False
print is_unique('toes')     # True
print is_unique('towering') # True
print is_unique('dusty')    # True
print is_unique('pause')    # True
print is_unique('high')     # False
print is_unique('familiar') # False

# Is Unique: Implement an algorithm to determine if a string has all unique characters. What if you
# cannot use additional data structures?

# Big-O 
def is_unique(s):
    for i, char in enumerate(s):
        j = i + 1
        while j < len(s):
            if char == s[j]:
                return False
            j += 1
    return True

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

# Classify age Act
def classify_age(age):
	if age <= 12:
		print(f"Your Just {age} Your a CHILD")
	elif age <= 19:
		print(f"{age} Your a TEEN")
	elif age <= 20:
		print(f"{age}  Your a ADULT")
	else:
		print(f"{age} Your a SENIOR ")
	
while True:
	age = int(input("Age:"))
	classify_age(age)
	
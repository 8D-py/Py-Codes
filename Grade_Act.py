#Assign grade Act
def assign_grade(score):
	if 0 <= score <= 100:
		if score >= 90:
			a = "A"
		elif score >=80:
			a = "B"
		elif score >=70:
			a = "C"
		elif score >=60:
			a = "D"
		else:
			a = "F"
		print(f"YOU GOT {a} !!!!")
	else:
		print("ERROR, YOU ALWAYS BE AN ERROR")

while True:
	score = int(input("Grade (1-100) only:"))
	assign_grade(score)
  

	



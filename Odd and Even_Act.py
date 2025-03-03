# Check Number Act
def check_number(num):
	if num % 2 == 0:
		print(f"{num} is VERY Even Number")
	else:
		print(f"{num} is VERY Odd Number")

while True:
	num = int(input("Odd and Even:"))
	check_number(num)


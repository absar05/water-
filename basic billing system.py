# Simple Shop Billing Program

print("Welcome to My Shop")

item1 = input("Enter item name: ")
price1 = float(input("Enter item price: "))
qty1 = int(input("Enter quantity: "))

item2 = input("Enter second item name: ")
price2 = float(input("Enter second item price: "))
qty2 = int(input("Enter quantity: "))

total1 = price1 * qty1
total2 = price2 * qty2
grand_total = total1 + total2

print("\n----- BILL -----")
print(item1, ":", total1)
print(item2, ":", total2)
print("Total Amount:", grand_total)
print("Thank you for shopping!")

exp = 10 ** 5
ms, hl, li, mi = map(
    lambda x: float(x) / exp,
    input("Enter Monthly Salary, House loan, Life Inurance, Medical Insurance: ")
    .strip()
    .split(),
)

yi = ms * 12

if yi >= 10:
    yi -= 2.5 if hl > 2.5 else hl
    yi -= 1.5 if li > 1.5 else li
    yi -= 0.5 if mi > 0.5 else mi

if yi > 15:
    tax = 1.875 + 0.3 * (yi - 15)
elif yi > 12.5:
    tax = 1.25 + 0.25 * (yi - 12.5)
elif yi > 10:
    tax = 0.75 + 0.2 * (yi - 10)
elif yi > 7.5:
    tax = 0.375 + 0.15 * (yi - 7.5)
elif yi > 5:
    tax = 0.125 + 0.1 * (yi - 5)
elif yi > 2.5:
    tax = 0.05 * yi

print(f"Tax = {(tax*exp):.2f}")

/*
	Name: Harsh Khandeparkar
	Roll: 21EC30023
	Dept: Electronics and Electrical Communication Engineering
	Package: Visual Studio Code, gcc v11.2.0
	LabTest: 1(a)
*/

#include <stdio.h>

int main() {
	// all input variables
	float montly_salary,
		house_loan,
		life_insurance_premium,
		medical_insurance;

	// take user input
	printf("Enter montly salary: ");
	scanf("%f", &montly_salary);

	printf("Enter yearly house loan: ");
	scanf("%f", &house_loan);

	printf("Enter yearly life insurance premium: ");
	scanf("%f", &life_insurance_premium);

	printf("Enter yearly medical insurance: ");
	scanf("%f", &medical_insurance);

	// calculate yearly salary
	float yearly_salary = montly_salary * 12;

	/**
	 * "certain types of investments are considered as tax-free for minimum yearly income of Rs. 10, 00, 000"
	 * Assuming that the above statement means that these invesments are not taxed for income >= 10, 00, 000
	 * What if yearly salary is < 10,00,000 but after adding investments it becomes > 10,00,000, should the investments be considered or not?
	 * Here I have assumed that the investments are tax-free if the total income(i.e., including the investments),
	 * exceeds 10,00,000.
	 * Also assuming it is >= and not >
	 */

	float total_income = yearly_salary + house_loan + life_insurance_premium + medical_insurance;
	float taxable_income = total_income;

	if (total_income >= 1000000) {
		// deduct investments under a certain limit from the taxable income;

		if (house_loan <= 250000) taxable_income -= house_loan;
		if (life_insurance_premium <= 150000) taxable_income -= life_insurance_premium;
		if (medical_insurance <= 50000) taxable_income -= medical_insurance;
	}

	/**
	 * "Rs. 12500 + 10% of total income exceeding Rs. 5,00,000"
	 * Here I have assumed this statement means that
	 * tax = 12500 + 0.1 * (taxable_income - 5,00,000)
	 */

	float tax = 0;

	if (taxable_income <= 250000) tax = 0;
	else if (taxable_income >= 250001 && taxable_income <= 500000) tax = taxable_income * 0.05;
	else if (taxable_income >= 500001 && taxable_income <= 750000) tax = 12500 + (taxable_income - 500000) * 0.1;
	else if (taxable_income >= 750001 && taxable_income <= 1000000) tax = 37500 + (taxable_income - 750000) * 0.15;
	else if (taxable_income >= 1000001 && taxable_income <= 1250000) tax = 75000 + (taxable_income - 1000000) * 0.2;
	else if (taxable_income >= 1250001 && taxable_income <= 1500000) tax = 125000 + (taxable_income - 1250000) * 0.25;
	else tax = 187500 + (taxable_income - 1500000) * 0.3;

	printf("Total tax: %.2f\n", tax);

	// Unfortunately none of the examples given match my assumptions so my assumptions might be wrong

	return 0;
}
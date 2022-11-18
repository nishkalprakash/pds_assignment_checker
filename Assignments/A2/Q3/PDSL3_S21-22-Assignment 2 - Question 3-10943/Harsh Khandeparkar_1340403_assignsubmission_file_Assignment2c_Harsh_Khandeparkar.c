/*
	Name: Harsh Khandeparkar
	Roll: 21EC30023
	Dept: Electronics and Electrical Communication Engineering
	Package: Visual Studio Code, gcc v11.2.0
	Assign: 2(c)
*/

#include <stdio.h>

int main() {
	// initialize all quotes
	int m1[4] = {8200, 8300, 6900, 9200},
		m2[4] = {7700, 3700, 4900, 9200},
		m3[4] = {1100, 6900, 500, 8600},
		m4[4] = {800, 900, 9800, 2300};

	// vendors with the minimum total cost
	// 0-indexed
	int min_vendors[4] = {0, 1, 2, 3};
	int min_cost = m1[0] + m2[1] + m3[2] + m4[3];

	// index of the vendor for each machine in each case, for the loop
	// 0-indexed
	int m1_vendor, m2_vendor, m3_vendor, m4_vendor;

	for (m1_vendor = 0; m1_vendor < 4; m1_vendor++) {
		for (m2_vendor = 0; m2_vendor < 4; m2_vendor++) {
			// if vendor is already assigned, skip
			if (m2_vendor == m1_vendor) continue;

			for (m3_vendor = 0; m3_vendor < 4; m3_vendor++) {
				// if vendor is already assigned, skip
				if (
					m3_vendor == m2_vendor ||
					m3_vendor == m1_vendor
				) continue;

				for (m4_vendor = 0; m4_vendor < 4; m4_vendor++) {
					// if vendor is already assigned, skip
					if (
						m4_vendor == m3_vendor ||
						m4_vendor == m2_vendor ||
						m4_vendor == m1_vendor
					) continue;

					int cost = m1[m1_vendor] + m2[m2_vendor] + m3[m3_vendor] + m4[m4_vendor];

					// if total cost in this case is less than the current known minimum, update
					if (cost < min_cost) {
						min_cost = cost;

						min_vendors[0] = m1_vendor;
						min_vendors[1] = m2_vendor;
						min_vendors[2] = m3_vendor;
						min_vendors[3] = m4_vendor;
					}
				}
			}
		}
	}

	printf("Total Cost = %d\n", min_cost);
	printf("Machine1 - Vendor%d\n", min_vendors[0] + 1);
	printf("Machine2 - Vendor%d\n", min_vendors[1] + 1);
	printf("Machine3 - Vendor%d\n", min_vendors[2] + 1);
	printf("Machine4 - Vendor%d\n", min_vendors[3] + 1);

    return 0;
}
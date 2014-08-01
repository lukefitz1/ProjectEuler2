//project euler

#include <stdio.h>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <stdlib.h>
#include <math.h>
using namespace std;

int main() {
	//Project Euler #4
	/*
	int num1 = 0;
	int length = 0;
	int palindrome = 0;
	int i = 100;
	int j = 100;
	int control = 0;
	string answer;

	while (i < 1000) {
		num1 = i * j;
		
		answer = std::to_string(num1);
		length = answer.length();

		if (length == 6) {
			if (answer[0] == answer[5]) {
				if (answer[1] == answer[4]) {
					if (answer[2] == answer[3]) {
						//printf("%i*%i = %i\n", i, j, num1);
						if (num1 > palindrome) {
							palindrome = num1;
						}
					}
				}
			}
		}

		else if (length == 5) {
			if (answer[0] == answer[4]) {
				if (answer[1] == answer[3]) {
					//printf("%i*%i = %i\n", i, j, num1);
					if (num1 > palindrome) {
						palindrome = num1;
					}
				}
			}
		}

		j++;
		if (j == 1000) {
			j = 100;
			i++;
		}
	}

	printf("%i", palindrome);
	*/

	//Project Euler #7
	/*
	int primeNum = 3;
	int num2 = 0;
	int counter = 0;

	while (counter < 10002) {
		for (int i = 2; i < primeNum + 1; i += 2) {
			if (primeNum % i != 0) {

			}
		}

	}

	//Project Euler #8
	string longString = "7316717653133062491922511967442657474235534919493496983520312774506326239578318016984801869478851843858615607891129494954595017379583319528532088055111254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049156044077239071381051585930796086670172427121883998797908792274921901699720888093776657273330010533678812202354218097512545405947522435258490771167055601360483958644670632441572215539753697817977846174064955149290862569321978468622482839722413756570560574902614079729686524145351004748216637048440319989000889524345065854122758866688116427171479924442928230863465674813919123162824586178664583591245665294765456828489128831426076900422421902267105562632111110937054421750694165896040807198403850962455444362981230987879927244284909188845801561660979191338754992005240636899125607176060588611646710940507754100225698315520005593572972571636269561882670428252483600823257530420752963450";
	int num1 = 0;
	int num2 = 0;
	int q,w,e,r,t;

	for (int i = 0; i < 995; i++) {	
		q = longString[i] - '0';
		w = longString[i + 1] - '0';
		e = longString[i + 2] - '0';
		r = longString[i + 3] - '0';
		t = longString[i + 4] - '0';

		num1 = q * w * e * r * t;

		if (num1 > num2) {
			num2 = num1;
			int index = i;
		}
	}

	printf("%i", num2);

	//Project Euler #16
	long double answer = pow(2, 1000);
	printf("%f", answer);
	*/

	system ("pause");
	return 0;
}
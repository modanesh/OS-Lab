#include<stdio.h>
#include<celtofar.h>

void celtofar() {
	float celsius = 10;
	float fahrenheit;

	fahrenheit = (1.8 * celsius) + 32;
	printf("\nTemperature in Fahrenheit : %f ", fahrenheit);

	return;
}

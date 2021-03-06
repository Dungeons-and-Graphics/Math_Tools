
#include <stdio.h>
#include <assert.h>

#include "MT.h"
#include "MT_vec2.h"

int main()
{
	int i;

	i = 0;
	printf("Test   0 %f\n", MT_ScaleNumberf(  0, (MT_Vector2){0, 500}, (MT_Vector2){-2, 2}));
	printf("Test 500 %f\n", MT_ScaleNumberf(500, (MT_Vector2){0, 500}, (MT_Vector2){-2, 2}));
	printf("Test 250 %f\n", MT_ScaleNumberf(250, (MT_Vector2){0, 500}, (MT_Vector2){-2, 2}));
	printf("Test 125 %f\n", MT_ScaleNumberf(125, (MT_Vector2){0, 500}, (MT_Vector2){-2, 2}));
	printf("Test 375 %f\n", MT_ScaleNumberf(375, (MT_Vector2){0, 500}, (MT_Vector2){-2, 2}));
	//printf("EVERYTHING WORKS FINE\n");
	//printf("EVERYTHING WORKS FINE\n");
	//printf("EVERYTHING WORKS FINE\n");
	//printf("EVERYTHING WORKS FINE\n");
	//printf("EVERYTHING WORKS FINE\n");
	//// printf("------------ MT TESTS -------------\n");
	//printf("~ MT test #%02d MT_GCD\n", i++);
	//assert(MT_GCD(1, 1) == 1);
	//assert(MT_GCD(42, 42) == 42);
	//assert(MT_GCD(10, 5) == 5);
	//assert(MT_GCD(3456, 987) == 3);
	//assert(MT_GCD(-275, -865) == 5);
	//assert(MT_GCD(-275, 865) == 5);
	//assert(MT_GCD(2516, 999) == 37);
	//printf("\tPassed\n");

	//printf("~ MT test #%02d MT_ToRad \n", i++);
	//printf("%f\n", MT_ToRadf(90));
	//assert(MT_ToRad(0) == 0);
	//assert(MT_ToRad(90) == 1);
	//assert(MT_ToRad(180) == 3);
	//assert(MT_ToRad(270) == 4);
	//assert(MT_ToRad(360) == 6);
	//assert(MT_ToRad(42) == 0);
	//assert(MT_ToRad(-25) == 0);
	//assert(MT_ToRad(25) == 0);
	//printf("\tPassed\n");


    //MT_Vector2 a;
    //MT_Vector2 b;

    //a.x = 10;
    //a.y = 20;

    //b.x = 5;
    //b.y = 10;

    //atan2();
    //MT_V2Angle_Rad(a, b);

	return 0;
}

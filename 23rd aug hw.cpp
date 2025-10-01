
//Write a C program to update the number of workers
/*#include<stdio.h>
int main()
{
	// varaibles
	unsigned int workers;
	// taking values from the user 
	printf("Enter the number of workers in your company :");
	scanf("%u",&workers);
	//writing the logical part 
	workers/=2;
	//displaying the output
	printf("\nThe number of workers are %u due to automation",workers);	
	return 0;
}*/
//A class has n students. If the teacher gives lab coats only to even roll numbers
/*#include<stdio.h>
int main()
{
	// assigining the varaibles
	unsigned int students;
	//taking the inputs from the user 
	printf("Enter the number of students in the lab :");
	scanf("%u",&students);
	//logical part
	students/=2;
	// output
	printf("\nThe number of students elgible for lab coat are %u",students);
	return 0;
}*/
// Write a C program to multiply the land and display the total area.
/*#include<stdio.h>
int main()
{
	unsigned int acre,area;
	printf("Enter the amount of acres :");
	scanf("%u",&acre);

	acre*=3;
	area = acre*=4;
	
	printf("\nThe new land of acre is %u and the total area is %u",acre,area);
	
	return 0;
}*/
// math.h problems
//Find the shortest distance it travels in a straight line.
/*#include<stdio.h>
#include<math.h>
int main()
{
	// varaibles
	int x1,x2,y1,y2,square_root;
	// taking the values from the user
	printf("Enter the values of x1,x2,y1 and y2 :");
	scanf("%d %d %d %d",&x1,&x2,&y1,&y2);
	//logical part
	square_root = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
	printf("\nThe shortest distance travelled is %d",square_root);
	return 0;
}*/
/*//95 books need packing. Each box can hold 12 books. Find number of boxes.
#include<stdio.h>
#include<math.h>
int main()
{
	unsigned int books = 95,boxes;
	boxes = books/=12;
	round(boxes);
	printf("The number of boxes required to fit 95 books are %u",boxes);
	return 0;
}*/
/*//You have 45 days. How many complete weeks?
#include<stdio.h>
#include<math.h>
int main()
{
	unsigned int days = 45,weeks;
	weeks = days/=7;
	round(weeks);
	printf("The number of complete weeks are %u",weeks);
	return 0;
}*/
//A 40.6 m rod is cut into 7.2 m lengths. How much rod remains
/*#include<stdio.h>
#include<math.h>
int main()
{
	float rod = 40.6,length = 7.2;
	rod/=length;
	round(rod);
	printf("The remaning rod is %.2f",rod);
	return 0;
}*/
//Bill is rupees 245.49. Round to nearest rupee
/*#include<stdio.h>
#include<math.h>
int main()
{
	float bill = 245.49;
	round(bill);
	printf("The bill is rounded to %.1f",bill);
	return 0;
}*/
//stdlib.h questions
/*#include<stdio.h>
#include<stdlib.h>
int main()
{
	unsigned int rahul = 78,priya = 85,result;
	result = abs(rahul - priya);
	printf("The gap is %u",result);
	return 0;
}*/


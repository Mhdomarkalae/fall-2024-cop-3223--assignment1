#include <stdio.h>
#define PI 3.14159
#include <math.h>
// This is a protype 
double calculateDistance(void);
double calculatePerimeter(void);
double calculateArea(void);
double calculateHeight(void);
double calculateWidth(void);
double askForUserInput(void);



int main(int argc , char**argv) {
    
    //This is all the function ive called
    calculatePerimeter();
    calculateArea();
    calculateHeight();
    calculateWidth();
    return 0;
    }


double calculateDistance() {
    // asks for user input
    
    double x1,x2,y1,y2;
    printf("Enter x1 and x2:");
    scanf("%lf %lf",&x1,&x2);
    printf("Enter y1 and y2:");
    scanf("%lf %lf",&y1,&y2);
    
    //This is the calcation done for distance
    double distance = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    
    printf("The distance between the points is %lf\n",distance);
    
    
    return distance;
}

    
double calculatePerimeter() {

    

    // calling distance function to not repeat code and tells the distance between two points for perimeter
    double distance_2 = calculateDistance();

    double perimeter = PI * distance_2;

    printf("The perimeter of the city encompassed by your request is %.2lf\n ", perimeter);

    return 3.7;

    }

double calculateArea(){
    // calling distance function to not repeat code and tells the distance between two points for area 
    double radius = calculateDistance();
    
    double area= PI* pow(radius,2);

    printf("The area of the city encompassed by your request is %lf ", area);
    
    return 4.7;
    



}

double calculateHeight(){
    
    //User input
    double x1,x2,y1,y2;
    printf("\nEnter x1 and x2 for height:");
    scanf("%lf %lf",&x1,&x2);
    printf("Enter y1 and y2 for height:");
    scanf("%lf %lf",&y1,&y2);
    //fromula for height
    double Height= y2-y1; 
    
    printf("The height of the city encompassed by your request is %lf ", Height);

    return 2.3;

}
double calculateWidth(){
    //user input
    double x1,x2,y1,y2;
    printf("\nEnter x1 and x2 for Width:");
    scanf("%lf %lf",&x1,&x2);
    printf("Enter y1 and y2 for Width:");
    scanf("%lf %lf",&y1,&y2);
    // Formula for width
    double Width = x2-x1;
    printf("The width of the city encompassed by your request is %lf ", Width);

    return 2.0;
}




    
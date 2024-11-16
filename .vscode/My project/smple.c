#include <stdio.h>
#define PI 3.14
int Area_Func(int Input);




// int main(){
//     int a;
//     printf("Area:\n Triangle(1)\tCircle(2)\tSquare(3)\tRectangle(4)\n");
//     scanf("%d",&a);
//     Area_Func(a);
//     return 0;
// }

// int Area_Func(int Input){
//      int b, h, r, s;

//     if (Input == 1) {
//         printf("Enter base and height of triangle:\n");
//         scanf("%d", &b);
//         scanf("%d", &h);
//         printf("Area of triangle is %.2f\n", 0.5 * b * h); // Use %.2f for better formatting
//     } else if (Input == 2) {
//         printf("Enter radius of circle:\n");
//         scanf("%d", &r);
//         printf("Area of circle is %.2f\n", PI * r * r); // Use %.2f for better formatting
//     } else if (Input == 3) {
//         printf("Enter side of square:\n");
//         scanf("%d", &s);
//         printf("Area of square is %d\n", s * s);
//     } else if (Input == 4) {
//         printf("Enter Length and Breadth:\n");
//         scanf("%d", &b);
//         scanf("%d", &h);
//         printf("Area of Rectangle is %d\n", b * h);
//     } else {
//         printf("Invalid Input\n");
//     }

//     return 0; // Added return statement
// }

// int main(){
//     int i,n,a;
//     printf("Enter the number of terms in the series:\n");
//     scanf("%d",&n);
//     int array_[n];

//     for(i = 0; i < n; i++){
//         printf("Enter number at index %d:\n",i);
//         scanf("%d",&array_[i]);
        
//     }
//     for (i = 0; i < n; i++){
//         printf("Index %d is %d\n",i,array_[i]);
//     }
// }


#include <stdio.h>

int main() {
    int i, n;

    printf("Enter the number of terms in the series:\n");
    scanf("%d", &n);

    // Check for valid input
    if (n <= 0) {
        printf("Please enter a positive integer for the number of terms.\n");
        return 1; // Exit with an error code
    }

    int array_[n];

    for(i = 0; i < n; i++) {
        printf("Enter number at index %d:\n", i);
        scanf("%d", &array_[i]);
    }

    // Print the numbers stored in the array
    printf("The numbers in the array are:\n");
    for(i = 0; i < n; i++) {
        printf("Index %d: %d\n", i, array_[i]);
    }

    return 0;
}
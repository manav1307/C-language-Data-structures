An array is a variable that can store multiple values. For example, if you want to store 100 integers, you can create an array for it.![Screenshot 2021-12-15 at 3 13 45 PM](https://user-images.githubusercontent.com/72225080/146162700-116ada84-b29a-41cd-bae1-6845e6b2ff93.png)

 1. How to declare an array?

     dataType arrayName[arraySize];
     
     example :  int numbers[20];

     . we declared an array, numbers, of int type. And its size is 20. Meaning, it can hold 20 int values.
     .It's important to note that the size and type of an array cannot be changed once it is declared.

2.How to initialize an array?

    .int mark[5] = {19, 10, 8, 17, 9};

    .int mark[] = {19, 10, 8, 17, 9};//we have not inialized size of the array.

3.Change Value of Array elements

    int mark[5] = {19, 10, 8, 17, 9}

    // make the value of the third element to -1
    mark[2] = -1;

    // make the value of the fifth element to 0
    mark[4] = 0;

4.Input and Output Array Elements

    // take input and store it in the 3rd element
    scanf("%d", &mark[2]);

    // take input and store it in the ith element
    scanf("%d", &mark[i-1]);


5.add numbers to the array and print the values:

    // Program to take 5 values from the user and store them in an array
    // Print the elements stored in the array
    #include <stdio.h>

    int main() {
      int values[5];

      printf("Enter 5 integers: ");

      // taking input and storing it in an array
      for(int i = 0; i < 5; ++i) {
         scanf("%d", &values[i]);
      }

      printf("Displaying integers: ");

      // printing elements of an array
      for(int i = 0; i < 5; ++i) {
         printf("%d\n", values[i]);
      }
      return 0;
}

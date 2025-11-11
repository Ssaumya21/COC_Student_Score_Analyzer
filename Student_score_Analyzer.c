#include<stdio.h>

// Function to calculate average marks of student.
float average(int n , int marks[])
{
    // Creating a variable named sum to store sum of marks.
    int sum =0;
    for(int i=0; i<n; i++)
    {
       sum += marks[i];
    }
    float average = sum/n;
    return average;
}

int maximum(int n , int marks[])
{
    // Creating a variable to score highest marks.
    int highest_marks = marks[0];

    // Scaning the array to store highest marks.
    for(int i =0; i<n; i++)
    {
        // Storing Highest marks in variable.
        if(highest_marks < marks[i])
        {
            highest_marks = marks[i];
        }
    }
    return highest_marks;
}

int minimum(int n, int marks[])
{
    // Creating an variable to Store Minimum Marks of students.
    int minimum_marks = marks[0];

    // Scanning the array to store minimum marks.
    for(int i=1; i<n; i++)
    {
        // Storing lowest marks in variable.
        if(marks[i] < minimum_marks)
        {
            minimum_marks = marks[i];
        }
    } 
    return minimum_marks;
}

int main()
{
    // Number of students whose score you want to enter.
    int n;
    printf("Enter Number of Students: ");
    scanf("%d", &n);

    // Creating an array to store Marks of students.
    int marksOfStudent[n];

    // Reading Marks of Students one by one using for loop.
    for(int i=0; i<n; i++)
    {
        printf("Enter Marks of Student %d: ", i+1);
        scanf("%d", &marksOfStudent[i]);
    }
    // Printing Average marks of students.
    float meanScore = average(n , marksOfStudent);
    printf("Class Average : %.2f\n", meanScore);

    // Printing Highest marks of students.
    int highestScore = maximum(n , marksOfStudent);
    printf("Highest Score : %d\n",highestScore );

    // printing Lowest marks of students.
    int lowestScore = minimum(n, marksOfStudent);
    printf("Lowest Score : %d\n", lowestScore);

    return 0;
}
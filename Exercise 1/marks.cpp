#include<stdio.h>
#include<math.h>
int student_num=0;
int passedStudents(int marks[], int size)
    {
    int count=0,num_passed=0;
    while(count<size)
    {
        if(marks[count]>=50)
        {
            num_passed++;
        }
        else
        {
            
        }
        count++;
    }
    printf("The numbers of students who have passed are: %d\n", num_passed);
    return 0;
    }
float markaverage(int marks[], int student_num)
    {
        int count,sum=0;
        double average;
        for(int count=0;count<student_num;count++)
            {
            sum=sum+marks[count];
            }
        average=sum/student_num;
        printf("The average of the student's marks is: %f\n", average);
    return 0;
    }
float stdDeviation(int marks[], int student_num)
    {
        int count,sum=0, average;
        for(int count=0;count<student_num;count++)
            {
            sum=sum+marks[count];
            }
        average=sum/student_num;
        int diff, diff_square,sum_diff_square=0, variance;
        double deviation;
        for(int count=0;count<student_num;count++)
            {
            diff=marks[count]-average;
            diff_square=diff*diff;
            sum_diff_square=sum_diff_square+diff_square;
            }
            variance=sum_diff_square/student_num;
            deviation=sqrt(variance);
            printf("The standard deviation is: %lf\n", deviation);
    return 0;
    }
int main()
{  
    int student_num,passed;
    float average, std_deviation;
    printf("Please enter the number of students:");
    scanf("%d",&student_num);
    int marks[student_num];

    for(int i=0;i<student_num;i++)
        {
            printf("Enter marks for student %d:",i+1);
            scanf("%d",&marks[i]);
            if(marks[i]<0||marks[i]>100)
                {
                printf("Please enter valid marks from 0 to 100\n.");
                break;
                }
            else
            {
            
            }
        }
    passed=passedStudents(marks, student_num);
    average= markaverage(marks,student_num);
    std_deviation=stdDeviation(marks,student_num);
return 0;
}
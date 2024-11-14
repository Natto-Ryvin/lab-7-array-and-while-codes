#include<iostream>
using namespace std;
int main()
{
    int student_count, i=1, j=1, k=1;
    cout<<"Enter number of students: ";
    cin>>student_count;
    int students[student_count]={};
    int hours[]={};
    do
    {
      cout<<"Enter hours of student "<<i<<": ";
      cin>>hours[i];
      i++;
    } while (i<=student_count);
    do
    {
        cout<<"Hours of student "<<j<<": "<<hours[j]<<endl;
        j++;
    } while (j<=student_count);
    int highest_hours=hours[0];
    do
    {
        if(hours[k]>highest_hours)
        {
            highest_hours = hours[k];
        }
        k++;
    } while (k<=student_count);
    cout<<"The highest student count is: "<<highest_hours;
    return 0;
}

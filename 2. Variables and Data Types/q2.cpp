/*
Question 2: Enter cost of 3 items from the user (using float datatype) - a pencil, a pen, and an eraser.
 You have to output the total cost of the items back to the user as their bill. 
 (Add-on: You can also try adding 18% GST tax to the items in the bill as an advanced problem)
 */
#include <iostream> 
using namespace std; 

int main()
{
    float pencil,pen,eraser;
    cin>>pencil>>pen>>eraser;
    float tbill=pencil+pen+eraser;
    float taxbill=0.18*tbill+tbill;
    cout<<"Cost:"<<endl<<"Pencil: "<<pencil<<endl<<"Pen: "<<pen<<endl<<"Eraser: "<<eraser<<endl<<"Total bill: "<<tbill<<endl<<"Bill after GST: "<<taxbill;
}
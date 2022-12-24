#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system(
) or input loop */
/*branch name
*
*
*
*/
//prototype

void show(int b[][3],int r,int c);

void showdia(int b[][3],int r,int c);

//--------------------------
//micro
//---------------------
//global variable
//-------------------
int main(int argc, char** argv)
{

//Declar array
int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

//Show array
cout<<"Show array :"<<endl;
show(a,3,3);


//Seperator
cout<<endl<<"------------------------"<<endl;

//Show diamater array
cout<<"Show diamater array :"<<endl;
showdia(a,3,3);


getch();
}
//function variable
//--------------------------
//functions

//This function show array
void show(int b[][3],int r,int c)
{

for(int i=0; i<r; ++i)
{

for(int j=0; j<c; ++j)
{

    cout<<b[i][j]<<"\t";

}
cout<<endl;
}

}

//Function for show diamater value

void showdia(int b[][3],int r,int c)
{
    for(int i=0; i<r; ++i)
{

for(int j=0; j<c; ++j)
{

    if (i == j)
    cout<<b[i][j]<<"\t";

}

}

}



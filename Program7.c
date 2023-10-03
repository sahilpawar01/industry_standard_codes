#include<stdio.h>
////////////////////////////////////////////////////////////////////////////////////////
//
//   FUNCTION NAME : ADDITION
//   DESCRIPTION :  IT IS USED TO PERFORM ADDITION OF 2 INTEGERS
//   INPUT ARGUMENTS : INTEGER , INTEGER 
//   OUTPUT :      Integer
//   AUTHOR :      SAHIL NANDKUMAR PAWAR
//   DATE :        25/09/23
//
////////////////////////////////////////////////////////////////////////////////////////

int Addition(int iNo1 , int iNo2){

int iSum = 0 ;           //variable to store the value of additon 
iSum = iNo1 + iNo2 ;       
return iSum;

}
////////////////////////////////////////////////////////////////////////////////////////
// Entry point function of an application which perform addition of 2 integers 
//  
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{


    int iValue1 = 0 ;           // variable to store first input
    int iValue2 = 0 ;           //variable to store second input
    int iAns = 0 ;              //variable to store the result
    printf("ENTER THE FIRST NUMBER: \n") ;
    scanf("%d" ,&iValue1) ;

    printf("ENTER THE SECOND NO : \n" );
    scanf("%d" , &iValue2);

    iAns =Addition(iValue1 , iValue2) ;      // function call to perform addition 

    printf( " additon is %d\n " ,iAns  );

    return 0 ;
}



// step 5 : test the code
/*
test case 1 :
input : 10 11 
output : 21 


Test case 2 :
input : 21 -10
output : 11



*/
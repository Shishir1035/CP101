// // 


// // C++ program for the above approach
// #include <bits/stdc++.h>
// using namespace std;

// // Function to find the value of A and
// // B whose sum is X and xor is Y
// void findNums(int X, int Y)
// {

// 	// Initialize the two numbers
// 	int A, B;

// 	// Case 1: X < Y
// 	if (X < Y) {
// 		A = -1;
// 		B = -1;
// 	}

// 	// Case 2: X-Y is odd
// 	else if (abs(X - Y) & 1) {
// 		A = -1;
// 		B = -1;
// 	}

// 	// Case 3: If both Sum and XOR
// 	// are equal
// 	else if (X == Y) {
// 		A = 0;
// 		B = Y;
// 	}

// 	// Case 4: If above cases fails
// 	else {

// 		// Update the value of A
// 		A = (X - Y) / 2;

// 		// Check if A & Y value is 0
// 		if ((A & Y) == 0) {

// 			// If true, update B
// 			B = (A + Y);
// 		}

// 		// Otherwise assign -1 to A,
// 		// -1 to B
// 		else {
// 			A = -1;
// 			B = -1;
// 		}
// 	}

// 	// Print the numbers A and B
// 	cout << A << " " << B <<endl;
// }

// // Driver Code
// int main()
// {
// 	int t;
// 	cin>>t;
// 	while(t--)
// 	{
// 			int X,Y;
// 	cin>>X>>Y;

// 	// Function Call
// 	findNums(X, Y);
// 	}
// 	// Given Sum and XOR of 2 numbers


// 	return 0;
// }


#include <stdio.h>
#include<stdlib.h>

int main()
{
   int t;
   scanf("%d",&t);
   if(t<1 || t>1000)
    {
   		printf("Invalid number of test cases\n");
   		return 1;
    }
   while(t--)
   {
      long long S, X;
      scanf("%lld %lld",&S,&X);
      if (S<0 || S>10000)
	    {
	   		printf("Invalid value of sum\n");
	   		return 1;
	    }
      if (X<0 || X>10000)
	    {
	   		printf("Invalid value of X-OR\n");
	   		return 1;
	    }
   }
   return 0;
}

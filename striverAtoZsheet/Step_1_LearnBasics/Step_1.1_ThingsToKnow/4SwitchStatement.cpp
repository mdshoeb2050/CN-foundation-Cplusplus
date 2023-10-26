//https://www.codingninjas.com/studio/problems/switch-case-statement_8357244?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf
// double areaSwitchCase(int ch, vector<double> a) {
	
// Approach - 1

// 	switch(ch){
// 		case 1:
// 		      std::cout << std::fixed << std::setprecision(5);
// 			  return 3.14159265359*a[0]*a[0];
// 		case 2:
// 			  std::cout << std::fixed << std::setprecision(5);
// 		      return a[0]*a[1];
			
// 	}
// }


// Approach -2 

/*
    Time complexity: O(1)
    Space complexity: O(1)
*/

// double areaSwitchCase(int ch, vector<double> a) {

//     double area = 0.0;

//     // Using switch-case to figure out whose area we want to find

//     switch (ch) {

//         case 1: // Circle
//             area = M_PI * a[0] * a[0];
//             break;

//         case 2: // Rectangle
//             area = a[0] * a[1];

//     }

//     // Returning the calculated area
//     return area;
// }


// shortCode

// double areaSwitchCase(int ch, vector<double> a) {
//     double area = 0.0;
//     switch (ch) {
//         case 1: 
//             area = M_PI * a[0] * a[0];
//             break;
//         case 2: 
//             area = a[0] * a[1];

//     }
//     return area;
// }



// https://www.codingninjas.com/studio/problems/data-type_8357232?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf


// Approach -1 

// int dataTypes(string type) {
// 	// Write your code here
// 	cin>>type;
// 	if(type == "Integer") 
// 	     return sizeof(int);
// 	else if(type == "Long") 
// 	     return sizeof(long);
// 	else if(type == "Float") 
// 	     return sizeof(float);
//     else if(type == "Double") 
// 	     return sizeof(double);
// 	else   
// 	     return sizeof(char);
// }


// Approach -2

// int dataTypes(string type) {

//     // Checking 'type' with all the data types we know.

//     if (type == "Integer")
//         return 4;
//     else if (type == "Long")
//         return 8;
//     else if (type == "Float")
//         return 4;
//     else if (type == "Double")
//         return 8;
//     else if (type == "Character")
//         return 1;
//     else // 'type' should have matched with some data type above
//         return -1; // Should not be returned
// }
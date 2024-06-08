// THE SWITCH STATEMENT

// switch (integer_control_expr) {
//   case expression_1: statement_1; break;
//   case expression_2: statement_2; break;
//   case expression_3: statement_3; break;
//   ...
//   case expression_n: statement_n; break;
//   default: statement_default; -- similar to an "else" statement
// }

//Example

// switch (selection) {
//   case '1': cout << "1 selected";
//     break;
//   case '2': cout << "2 selected";
//     break;
//   case '3':
//   case '4': cout << "3 or 4 selected"; -- Similar to "OR" statement
//     break;
//   default:  cout << "1,2,3,4 NOT selected";
// }

// RANGE BASED FOR LOOP
// int scores [] {100, 90, 97};

// for (int score : scores)
//   cout << score << endl;


// DO-WHILE LOOP
// Example:

// char selection {};

//   do {
//     double width {}, height {};
//     cout << "Enter width and height separated by a space: ";
//     cin >> width >> height;

//     double area {width * height};
//     cout << "the area is " << area << endl;

//     cout << "Calculate anaother? (Y/N): ";
//     cin >> selection;
//   } while (selection == 'Y' || selection == 'y');
//   cout << "Thanks!" << endl;


// CONTINUE AND BREAK STATEMENTS
// vector<int> values {1,2,-1,3,-1,-99,7,8,10};
// for (auto val: values) {
//   if (val == -99)
//     break;
//   else if (val == -1)
//     continue;
//   else
//     cout << val << endl;
// }

// output:
// 1
// 2
// 3

// NESTED LOOPS
// for (outer_val {1}; outer_val <= 2 ; ++outer_val)
//   for (inner_val {1}; innner_val <= 3; ++inner_val)
//     cout << outer_val << ", " << inner_val << endl;

// Output:
// 1, 1
// 1, 2
// 1, 3        out_val, inner_val
// 2, 1        Note: inner loop loops "faster"
// 2, 2
// 2, 3


// for (int num1 {1}; num1 <= 10 ; ++num1) {
//         for (int num2 {1}; num2 <= 10; ++num2) {
//             cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
//         }
//     cout << "-----------" << endl;
//     }

// int grid[5][3] {};
    
//     for (int row {0}; row < 5; ++row ) {
//         for (int col {0}; col < 3; ++col ) {
//             grid[row][col] = 1000;
//         }
//     }
    
//     for (int row {0}; row < 5; ++row ) {
//         for (int col {0}; col < 3; ++col ) {
//             cout << grid[row][col] << " ";
//         }
//         cout << endl;
//     }

// vector<vector<int>> vector_2d {
//   {1, 2, 3},
//   {10, 20, 30, 40},
//   {100, 200, 300, 400, 500}
// };

// for (auto vec: vector_2d) {
//   for (auto cal: vec) {
//     cout << val << " ";
//   }
//   cout << endl;
// }
// c-style strings

// char my_name[8];
// ? ? ? ? ? ? ? ?

// my_name = "Frank";        // Error
// strcpy(my_name, "Frank"); // Ok

----------------------------------------
// char my_name[8] {"Frank"};
// F r a n k \0 \0 \0

// my_name[5] = 'y'; //OK

-----------------------------------------
// char my_name[] {"Frank"};
// F r a n k \0
// my_name[5] = 'y' ; // Problem

-----------------------------------------
char str[80];

strcpy(str, "Hello "); //copy
strcat(str, "there"); //concatenate
cout << strlen(str); //11
strcmp(str, "Another"); // > 0
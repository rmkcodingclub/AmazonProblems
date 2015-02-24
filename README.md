# AmazonProblems
Practice problems from Amazon


Questions:<br>
1.A string of alphanumeric is there. Find a string that starts with b and ends with 3 
characters. 

2.There is a sorted array which is of very large size.In that all except one no. are 
repeated once.How to find that non repeated no.

3.There are 2 linked lists.Those 2 lists are meeting at a point. How to find that 
meeting point.

4. How do you convert a decimal number to its hexa-decimal equivalent.Give a C 
code to do the same

5. Given an array all of whose elements are positive numbers, find the maximum 
sum of a subsequence with the constraint that no 2 numbers in the sequence 
should be adjacent in the array.
Eg.
i) 3 2 7 10 should return 13 (sum of 3 and 10)
ii) 3 2 5 10 7 should return 15 (sum of 3, 5 and 7)

6. Given a Binary Search Tree, write a program to print the kth smallest element 
without using any static/global variable. You can pass the value k to any function 
also.

7.You are given some denominations of coins in an array (intdenom[])and infinite 
supply of all of them. Given an amount (int amount), find the minimum number of 
coins required to get the exact amount. What is the method called?

8.Given an array of size n. It contains numbers in the range 1 to n. Each number is 
present at least once except for 1 number. Find the missing number.

9.Given an array of size n. It contains numbers in the range 1 to n. Each number is 
present at least once except for 2 numbers. Find the missing numbers.

10.Given an array of size n. It contains numbers in the range 1 to n. Find the 
numbers which aren't present.

11.Given a string,find the first un-repeated character in it? Give some test cases

12.You are given a dictionary of all valid words. You have the following 3 
operations permitted on a word:
a) Delete a character
b) Insert a character
c) Replace a character
Now given two words - word1 and word2 - find the minimum number of steps 
required to convert word1 to word2. (one operation counts as 1 step.)

13.Given a cube of size n*n*n (i.e made up of n^3 smaller cubes), find the number 
of smaller cubes on the surface. Extend this to k-dimension.

14.What is a C array and illustrate the how is it different from a list.

15.Write a function which takes as parameters one regular expression(only ? and 
`*` are the special characters) and a string and returns whether the string matched 
the regular expression.

16.Find the second largest element in an array with minimum no of comparisons 
and give the minimum no of comparisons needed on an array of size N to do the 
same.

17. Given an array of size n ,containing every element from 1 to n+1, except one. 
Find the missing element.

18. Two trains enter at the opposite sides of a tunnel of length L with speeds 'V'. 
A particle enters the tunnel at the same time with a speed 'v' and it vibrates in 
the tunnel[i.e. if it reaches the end of the tunnel then it comes back]. What is the 
position of the particle by the time the 2 trains meet?

19.Given an array of size n+1 which contains all the numbers from 1 to n.Find the 
number which is repeated in O(n) time .How do you proceed with the same with 
floating numbers from 0 to 1 instead of 1 to n?

20. Design a data structure to represent the movement of a knight on a chess 
board

21. Write an algorithm to traverse a knight covering all the squares on a 
chessboard starting at a particular point.

22. What is wrong with this class, assuming that this is its complete interface?

class C {

 char *p;

 public:

 C() { 
  p = new char[64]; 
  strcpy(p, "Hello world"); 
 }

 ~C() { 
  delete p; 
 }

 void foo() { 
  cout<< "My ptr is: '" << p << "'" <<endl;
 }

};

Since this has an overtly programmed destructor, the member wise semantics for 
destruction are not good enough; therefore, they are not good enough for copy 
and assignment either. But, the copy ctor and op= are not programmed, so we 
will have some serious trouble.
Gradual hinting: what happens when we make a copy? [correct answer: pointer is 
copied]. Now, the original goes out of scope, what happens to the copy? [pointer 
dangles]. How would you fix it?
[also, that delete p should be delete[ p since p was allocated with the array new]
Assuming that swap() and copy construction are part of your interface for class C, 
what's the cookie-cutter pattern for operator= that uses them?
answer:

C& C:perator=(const C &rhs) {
if (this != &rhs) {
C tmp(rhs);
this->swap(tmp);
}
return *this;
}
]]

23. “given two lists write a function which returns a list which is the intersection 
of the two lists.the original lists should remain same.
(Intersection – if first list is say,1,20 3,45 and second list is 3,24 ,45,90,68 then 
intersection should be 3,45 )

24. Given two nodes of a binary tree find the closest ancestor of the two nodes.
Note:consider binary tree and binary search tree also.

25. Given an array all of whose elements are positive numbers, find the maximum 
sum of a subsequence with the constraint that no 2 numbers in the sequence 
should be adjacent in the array.
i) 3 2 7 10 should return 13 (sum of 3 and 10)
ii) 3 2 5 10 7 should return 15 (sum of 3, 5 and 7)

26. Given a Binary Search Tree, write a program to print the kth smallest element 
without using any static/global variable. You can’t pass the value k to any function 
also.

27.Given an array of size n. It contains numbers in the range 1 to n. Each number 
is present at least once except for 2 numbers. Find the missing numbers.

28.Given an array of size n. It contains numbers in the range 1 to n. Find the 
numbers which aren't present.

29. How would you find the second largest element in an array using minimum no 
of comparisons?

30. Write a C program for level order traversal of a tree?

31. You are given: 3 types of vehicles: Motorbike, Car, and a special type of car for 
the handicapped.
3 Types of parking: Motorbike parking, Car parking, handicapped car parking.
Motorbikes and cars can only park in their designated parkings, while the 
handicapped cars can park either in their own parking or the regular car parking.
How would you model this as classes? Explain your methods.

32.Two tables emp(empid,name,deptid,sal) and dept(deptid,deptname) are 
there.write a query which displays empname,correspondingdeptname also 
display those employee names who donot belong to any dept.
Display the employees whose salary is less than average salary.

33. what is the output of the program

main()

{

int c=5;

printf("%d %d %d",c,c<<2,c>> 2);

}

34.

main()

{

int a[8][10],c=0,i,j;

 for(i=0;i<10;

i++) for(j=0;

j<8;j++) a[j][i]=c++;

printf("%d",a[3][6]);

}

35.What is the wrong in this program

main()

{

char *p,*q;

p=(char *)malloc(25);

q=(char*) malloc(25);

strcpy(p,"amazon" );

strcpy(q,"hyd");

strcat(p,q);

printf("%s",p);

}

36.write prefix and post fix notation for (a+b)*c-(d+e)^(f-g)

37.what is the output of the program

main()

{

inti=5;

printf("%d",fun(fun(fun(fun( fun(i))))));

}

void fun(inti)

{ if(i%2) return (i+(7*4)-(5/2)+(2*2));

else return (i+(17/5)-(34/15)+(5/2));

}

38.When it is always true boolean fun

(node *p)

{

return ((p==null)||(p->next==null)|| (p->info<=p->next->info)&&( fun(p->next)));

}

a)when list is empty or has one node
b)when the ele are sorted in non decreasing order
c)when the ele are sorted in non increasing order

39.what is x here (x&&!(x&(x-1))==1)
a)x is always a prime
b)x is a power of 2
c)x is even d)x is odd

40.what is valid in cpp char *cp; const char *cpp; 1) cpp=cp; 2) cp=cpp;

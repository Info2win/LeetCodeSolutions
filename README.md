# LEETCODE EXPLANATIONS FOR INTERVIEWS

## Q1 twoSum

- Approach 1

    - Solved by using nested for loops
    - 13 lines

- Approach 2 

    - Solved by using a for loop and a map 
    - 17 lines

## Q13 romantToInt

- Approach 1

    - Solved by checking every character in a if else if block which is in a for loop
    - 59 lines

- Approach 2 

    - Solved by using a map which stores every single possibility and their's values. A for loop and a if else block is used to check if keys with 2 characters exists.
    - 17 lines

## Q14 longestCommonPrefix

- Approach 1

    - Solved by using nested loops and checked all the strings against first string with an if 
    - 19 lines

- Approach 2

    - Solved by first sorting the strings then checking the first string
    - 12 lines

## Q9 isPalindrome

- Approach 1
    - Solved by first converting int to string with to_string(x) then making a mirror of a string with reverse(mirror.begin(),mirror.end()) then comparing original string to its mirror
    - 9 lines

- Approach 2 
    - Solved without converting to string just by converting int to its reverse
    - 12 lines
- Approach 3
    - Solved without using reverse() just by using to_string() and checking chars in a for loop
    - 10 lines

## Q20 validParentheses      

- Approach 1
    - Solved by pushing into a stack if it is opening bracket, checked if stack is empty then popded if it is the matching closing bracket if empty or not matches return false, at the end return stack.empty()
    - 27 lines

## Q21 mergeTwoSortedLists

- Approach 1
    - Solved by first checking if any of the lists are empty, then assigning the low one to the end, then looping through the list1 and list2 and creating the new list until one of the given  lists is reaches to end, lastly pointed the new list's last nodes next to the one of the given lists which did not reach to its end at the end of the while loop.
    - 51 lines
- Approach 2
    - Recorsive solution
    - 31 lines

## Q23 removeDuplicatesFromSortedArray

- Approach 1
    - Kept insertion_place in a variable and looped through the array, if current element is not equal to insertion_place's element inserted current element to the place, returned insertion_place+1 as the uniqe elements' count
    - 15 lines
- Approach 2
    - Used std::unique(nums.begin(),nums.end()) to get all the unique elements at the begining of the array and hold the return value(an iterator to where the unique elements end) in a variable named it,used std::resize(std::distance(nums.begin(),it)) to resize the array of the unique part.
    - 8 lines
## Q66 plusOne

- Approach 1
    - Returned +1 if last element is not 9, else counted how many 9 we have at the end and popped them then if all the elements of the array was 9 pushed 1 as the first element else incremented the last remaining element once, lastly added the requried zeros at the end
    - 32 lines
- Approach 2
    - Traversed the array back, if element is 9 make it 0 and we have a carry else element++ and no carry, after the traverse back if we have carry that means every element in the array was 9 so push front 1
    - 13 lines
## Q69 Sqrt(x)
- Approach 1
    - Went through every integer and checked if their square is equal or greater then given integer returned current number if they are equal, returned current number - 1 if square is greater then the given inter
    - 18 lines
- Approach 2
    - Solved by returning 0 if the given integer is 0 otherwise using binary search
    - 14 lines
## Q70 climbingStairs
- Approach 1
    - Go through integers until n-1 with a for loop and in the loop do =>  temp = v[0]; v[0] += v[1]; v[1] = temp; // this is O(n) but it is easy to implement 
    - 15 lines
## Q88 mergeSortedArray
- Approach 1 
    - Checked if second array empty else merged the arrays using std::merge() into a temporary array then copied temporary array into first array
    - 10 lines
- Approach 2
    - second array placed into zeros of first array in a for loop than sorted with sort()
    - 10 lines
## Q99 BTinorderTraversal
- Approach 1 
    - Solved recursivly, not that result variable is declared in the scope of class not the function
    - 23 lines
- Approach 2
    - Solved iteratively, using a stack.
    - 31 lines
- Approach 3
    - Solved iteratively, using Morris traversal.
    - 40 lines
## Q101 symmetricTree

- Approach 1
    - Checked recursiveCheck(rootLeft->left,rootRight->right) && recursiveCheck(rootLeft->right,rootRight->left) in a recursive function.
    - 23 lines
- Approach 2
    - Stored both left subtree and right subtree in stacks using 2 recursive functions. Then checked if the stacks are same.
    - 49 lines
- Approach 3
    - Iterative solution, in a stack<TreeNode*> stored rootLeft->left, rootRight->right , rootLeft->right, rootRight->left, then popped 2 of them at a time, checked if the popped ones are same or not.
    - 34 lines
## Q104 maximumDepthOfBinaryTree
- Approach 1
    - Recursively solution is just a line ,return max(maxDepth(root->left),maxDepth(root->right))+1; so we do not need consider even another approach to solve this problem.
    - 18 lines
## Q108 Convert Sorted Array to Binary Search Tree
- Approach 1
    - Recursively called to construct left subtree and right subtree.
    - 26 lines
## Q217 Contains Duplicate
- Approach 1
    - Linear search using nested loops
    - 13 lines
## Q242 Valid Anagram
- Approach 1
    - Hold every char's count in maps for each string. Then compare counts.
    - 17 lines
## Q49 Group Anagrams
- Approach 1
    - Map charCount to list of Anagrams
    - 33 lines
## Q347 Top K Frequent Elements
- Approach 1
    - Use Bucket Sort
    - 22 lines
## Q238 Product of Array Except Self
- Approach 1
    - Compute product of prefix first, store them in result vector, compute postfix, multiply prefixes with the associated postfixes
    - 19 lines
## Q36 Valid Sudoku
- Approach 1
    - For every row,column, and sub-box seperatly check if they contain digits once. Hold counts in a map.
    - 47 lines
## Q128 Longest Consecutive Sequence
- Approach 1
    - Sort the nums. Then, check nums[i] against nums[i+1]
    - 16 lines
## Q15 3Sum
- Approach 1
    - Sort, for each i, have j & k go outside in, check for 0 sums
    - 50 lines 
## Q11 Container With Most Water
- Approach 1
    - Check every possiblity with a nested loop. (Note that 0(n^2) is too much so time limit exceets)
    - 18 lines
- Approach 2
    - Use two pointer, move the left pointer is pointing to a hight that is higher than right pointer's. (Note that it is the optimal solution with O(n))
    - 20 lines
## Q155 Min Stack
- Approach 1
    - Use two stacks, one of them hold actual values, other holds min value and its count
    - 35 lines
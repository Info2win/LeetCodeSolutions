# LEETCODE EXPLANATIONS FOR INTERVIEWS

## Q1 twoSum

- Approach 1

    - Solved by using nested for loops
    - Memory Usage: 10.3 MB
    - 13 lines

- Approach 2 

    - Solved by using a for loop and a map 
    - Memory Usage: 10.9 MB
    - 17 lines

## Q13 romantToInt

- Approach 1

    - Solved by checking every character in a if else if block which is in a for loop
    - Memory Usage: 6 MB
    - 59 lines

- Approach 2 

    - Solved by using a map which stores every single possibility and their's values. A for loop and a if else block is used to check if keys with 2 characters exists.
    - Memory Usage: 12.7 MB
    - 17 lines

## Q14 longestCommonPrefix

- Approach 1

    - Solved by using nested loops and checked all the strings against first string with an if 
    - Memory Usage: 9.3 MB
    - 19 lines

- Approach 2

    - Solved by first sorting the strings then checking the first string
    - Memory Usage: 9.0 MB
    - 12 lines

## Q9 isPalindrome

- Approach 1
    - Solved by first converting int to string with to_string(x) then making a mirror of a string with reverse(mirror.begin(),mirror.end()) then comparing original string to its mirror
    - Memory Usage: 5.9 MB
    - 9 lines

- Approach 2 
    - Solved without converting to string just by converting int to its reverse
    - Memory Usage: 5.9 MB
    - 12 lines
- Approach 3
    - Solved without using reverse() just by using to_string() and checking chars in a for loop
    - Memory Usage: 5.9 MB
    - 10 lines

## Q20 validParentheses      

- Approach 1
    - Solved by pushing into a stack if it is opening bracket, checked if stack is empty then popded if it is the matching closing bracket if empty or not matches return false, at the end return stack.empty()
    - Memory Usage: 6.2 MB
    - 27 lines

## Q21 mergeTwoSortedLists

- Approach 1
    - Solved by first checking if any of the lists are empty, then assigning the low one to the end, then looping through the list1 and list2 and creating the new list until one of the given  lists is reaches to end, lastly pointed the new list's last nodes next to the one of the given lists which did not reach to its end at the end of the while loop.
    - Memory Usage: 14.8 MB
    - 51 lines
- Approach 2
    - Recorsive solution
    - Memory Usage: 14.8 MB
    - 31 lines

## Q23 removeDuplicatesFromSortedArray

- Approach 1
    - Kept insertion_place in a variable and looped through the array, if current element is not equal to insertion_place's element inserted current element to the place, returned insertion_place+1 as the uniqe elements' count
    - Memory Usage: 18.4 MB
    - 15 lines
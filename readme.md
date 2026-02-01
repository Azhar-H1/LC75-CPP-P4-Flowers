link: https://leetcode.com/problems/can-place-flowers/?envType=study-plan-v2&envId=leetcode-75

helpful comment 1 - solution framework: https://leetcode.com/problems/can-place-flowers/description/comments/1838544/
"We do not want any flower beds one place ahead of our current index and one place behind our index. So check for that while traversing the array.
Take a variable which increments when the above conditions are satisfied.
And after the loop check if the c is greate than or equal to the given n."


helpful comment 2 - test cases: https://leetcode.com/problems/can-place-flowers/description/comments/1838600/
some test cases :
[1,0,0,0,1]
1
true
[1,0,0,0,1]
2
false
[1,0,0,0,1]
1
true
[0,0,1,0,0]
1
true
[0,0,1,0,0,0,0,0,1,0,0]
4
true
[1,0,0,0,0,0,1]
2
true
[0]
1
true
[1,0,0,0,0,1]
2
false
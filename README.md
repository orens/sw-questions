## Preparation questions for SW interview

#### Guidelines
- Make sure you have a working compilation environment. Visual Studio is a good option: https://visualstudio.microsoft.com/vs/community/
- Try to write tests, even simple ones (example in the first question).
- Aside from Medium 3, 4, try to use the standard library, when applicable. For questions 3,4 you can use everything but the standard collections.
- I tried to make the order of questions incremental and contextual. That said, feel free to choose the best order for you.
- If you get stuck on something, let me know and I'll point you to the right direction.
- Drink coffee. It's bad for your health but good for your programming skills :)
- **Good Luck**
#### Basic

1. find the index of the maximum value in an integer array
   ```C++
   int findMaxIndex(std::vector<int> v);
   ```
   Test it with this code:
    ```C++
    int main()
    {
        std::vector myVec;
        myVec.push_back(10);
        cout << findMaxIndex(myVec) << endl; // prints 0
        myVec.push_back(1);
        cout << findMaxIndex(myVec) << endl; // prints 0
        myVec.push_back(13);
        cout << findMaxIndex(myVec) << endl; // prints 2
        myVec.push_back(23);
        cout << findMaxIndex(myVec) << endl; // prints 3
        myVec.push_back(10);
        cout << findMaxIndex(myVec) << endl; // prints 3
        return 0;
    }
    ```
1. Given a string containing only digits (e.g., `"3454389890110"`), return the one that only repeat once (all the other repeat twice)
   ```C++
   int findSingleDigit(std::string s);
   ```
1. Write a function that returns true if the given string is a palindrome (A palindrome is a sequence of characters which reads the same backward as forward, e.g., `"abbaghtthgabba"`)
   ```C++
   bool isPalindrome(std::string s);
   ```
1. Given a string, find the length of the longest sequence of identical characters (e.g., `f("abccbbgkkklrkk")` will return 3
   ```C++
   int findLengthOfLongestSequence(std::string s);
   ```
1. Implement factorial (`f(n) = n*(n-1)*(n-2)*...*1`), once using recursion **and** once using iteration
   ```C++
   unsigned int factorial(unsigned int i);
   ```
1. Find the **first** location of a substring in a given string (`f("abc", "dfgabcurksabceiod") == 3`)
   ```C++
   int findSubstringEarliestIndex(std::string substring, std::string s);
   ```
1. Find the **last** location of a substring in a given string (`f("abc", "dfgabcurksabceiod") == 10`)
   ```C++
   int findSubstringLastIndex(std::string substring, std::string s);
   ```
#### Medium
1. Given a number, find the length of the longest zeros in its **binary** (e.g., `7 == b111 => f(7) == 0`; `9 == b1001 => f(9) == 2`)
   ```C++
   int findLongestZerosLengthInBinary(unsigned int i);
   ```
1. Write a function that returns true if the given string is a balanced sequence of Parentheses (e.g., `"((())())()"`, but **not** `"(())())"`
    ```C++
    bool isBalancedParentheses(std::string s);
    ```
1. Implement a singly linked list of numbers. It should support the following operations:
    ```C++
    int main()
    {
        LinkedList myList;
        cout << myList.size() << endl; // prints 0
        myList.add(5);
        myList.add(9);
        myList.add(4);
        cout << myList.size() << endl; // prints 3
        cout << myList.popFirst() << endl; // prints 5 
        cout << myList.popFirst() << endl; // prints 9
        cout << myList.popFirst() << endl; // prints 4
        cout << myList.size() << endl; // prints 0
        return 0;
    }
    ```
1. Change the list from last question to always be sorted:
    ```C++
    int main()
    {
        LinkedList myList;
        cout << myList.size() << endl; // prints 0
        myList.add(5);
        myList.add(9);
        myList.add(4);
        cout << myList.size() << endl; // prints 3
        cout << myList.popFirst() << endl; // prints 4 
        cout << myList.popFirst() << endl; // prints 5
        cout << myList.popFirst() << endl; // prints 9
        cout << myList.size() << endl; // prints 0
        return 0;
    }
    ```
1. Given two points (x1, y1), (x2, y2), find the area of a rectangle which has its every side parallel to one of the axis (`f(1,2,3,4) == 4`)
   ```C++
   float twoPointsRectangleArea(float x1, float y1, float x2, float y2);
   ```
1. Given four numbers, assign them to two points (x1, y1), (x2, y2) such that the distance between them will be the maximal one. Return that distance.
    e.g., `[1, 5, 9, 17]` can be assigned as `(1, 9), (5, 17)`, `(1, 5) (9, 17)` or `(1, 17), (5, 9)`
    **Do not** check every possible option. Find a better way.
   ```C++
   float maxDistance(float f1, float f2, float f3, float f4);
   ```
#### Hard(er)
1. You are given a list of meetings. For each meeting:
    No. of attendees, start time, end time
    Design and implement a way to find out how many people *at most* will be at a meeting at the same time
    
## To be continued :)

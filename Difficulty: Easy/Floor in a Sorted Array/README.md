<h2><a href="https://www.geeksforgeeks.org/problems/floor-in-a-sorted-array-1587115620/1?page=1&difficulty=Easy&status=unsolved&sortBy=submissions">Floor in a Sorted Array</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18px;">Given a sorted array <strong>arr[] </strong>and an integer <strong>x</strong>, find the index (0-based) of the largest element in arr[] that is less than or equal to x. This element is called the <strong>floor</strong> of x. If such an element does not exist, return -1.</span></p>
<p><span style="font-size: 18px;"><strong>Note:</strong> In case of multiple occurrences of ceil of x, return the index of the last occurrence.</span></p>
<p><strong style="font-size: 18px;">Examples</strong></p>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [1, 2, 8, 10, 10, 12, 19], x = 5
<strong>Output: </strong>1<strong>
Explanation: </strong>Largest number less than or equal to 5 is 2, whose index is 1.</span></pre>
<pre><span style="font-size: 18px;"><strong>Input: </strong>arr[] = [1, 2, 8, 10, 10, 12, 19], x = 11
<strong>Output: </strong>4<strong>
Explanation: </strong>Largest Number less than or equal to 11 is 10, whose indices are 3 and 4. The index of last occurrence is 4.<br></span></pre>
<pre><span style="font-size: 14pt;"><strong>Input: </strong>arr[] = [1, 2, 8, 10, 10, 12, 19], x = 0<br><strong>Output: </strong>-1<strong>
Explanation: </strong>No element less than or equal to 0 is found. So, output is -1.</span></pre>
<p><span style="font-size: 18px;"><strong>Constraints:</strong><br>1 ≤ arr.size() ≤ 10<sup>6</sup><br>1 ≤ arr[i] ≤ 10<sup>6</sup><br>0 ≤ x ≤<sup> </sup>arr[n-1]</span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Amazon</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Searching</code>&nbsp;<code>Sorting</code>&nbsp;<code>Algorithms</code>&nbsp;
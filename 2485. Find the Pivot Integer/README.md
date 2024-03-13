<h2><a href="https://leetcode.com/problems/find-the-pivot-integer/">2485. Find the Pivot Integer</a></h2> <img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' alt='Difficulty: Easy' /><hr><p>Given a positive integer <code>n</code>&nbsp;, find the pivot integer <code>x</code>&nbsp;such that:</p>

<ul>
	<li>The sum of all elements between <code>1</code>&nbsp;and <code>x</code>&nbsp;inclusively equals the sum of all elements between <code>x</code>&nbsp;and <code>n</code>&nbsp;inclusively.</li>
</ul>

<p>Return the pivot integer <code>x</code>&nbsp;. If no such integer exists, return <code>-1</code>&nbsp;. It is guaranteed that there will be at most one pivot index for the given input.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 8
<strong>Output:</strong> 6
<strong>Explanation:</strong> 6 is the pivot integer since: 1 + 2 + 3 + 4 + 5 + 6 = 6 + 7 + 8 = 21.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> n = 1
<strong>Output:</strong> 1
<strong>Explanation:</strong> 1 is the pivot integer since: 1 = 1.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> n = 4
<strong>Output:</strong> -1
<strong>Explanation:</strong> It can be proved that no such integer exist.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n &lt;= 1000</code></li>
</ul>
<h2><a href="https://leetcode.com/problems/minimum-common-value/">2540. Minimum Common Value</a></h2> <img src='https://img.shields.io/badge/Difficulty-Easy-brightgreen' alt='Difficulty: Easy' /><hr><p>Given two integer arrays nums1 and nums2, sorted in non-decreasing order, return the <code>minimum integer common</code>&nbsp;to both arrays. If there is no <code>common</code>&nbsp;integer amongst nums1 and nums2, return -1.</p>

<p>Note that an integer is said to be common to nums1 and nums2 if both arrays have <code>at least one</code>&nbsp;occurrence of that integer.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums1 = [1,2,3], nums2 = [2,4]
<strong>Output:</strong> 2
<strong>Explanation:</strong> The smallest element common to both arrays is 2, so we return 2.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums1 = [1,2,3,6], nums2 = [2,3,4,5]
<strong>Output:</strong> 2
<strong>Explanation:</strong> There are two common elements in the array 2 and 3 out of which 2 is the smallest, so 2 is returned.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= nums1.length, nums2.length &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= nums1[i], nums2[j] &lt;= 10<sup>5</sup></code></li>
	<li><strong>Both nums1 and nums2 are sorted in non-decreasing order.</strong></li>
</ul>
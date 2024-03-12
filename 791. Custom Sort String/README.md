<h2><a href="https://leetcode.com/problems/custom-sort-string/">791. Custom Sort String</a></h2><img src='https://img.shields.io/badge/Difficulty-Medium-orange' alt='Difficulty: Medium' /><hr><p>You are given two strings <code>order</code>&nbsp;and <code>s</code>&nbsp;. All the characters of <code>order</code>&nbsp;are <strong>unique</strong> and were sorted in some custom order previously.</p>

<p>Permute the characters of <code>s</code>&nbsp;so that they match the order that <code>order</code>&nbsp;was sorted. More specifically, if a character <code>x</code>&nbsp;occurs before a character <code>y</code>&nbsp;in <code>order</code>&nbsp;, then <code>x</code>&nbsp;should occur before <code>y</code>&nbsp;in the permuted string.</p>

<p>Return any permutation of <code>s</code>&nbsp;that satisfies this property.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> order = "cba", s = "abcd" 
<strong>Output:</strong> "cbad" 
<strong>Explanation:</strong> "a", "b", "c" appear in order, so the order of "a", "b", "c" should be "c", "b", and "a". 

Since "d" does not appear in order, it can be at any position in the returned string. "dcba", "cdba", "cbda" are also valid outputs.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> order = "bcafg", s = "abcd" 
<strong>Output:</strong> "bcad" 
<strong>Explanation:</strong> The characters "b", "c", and "a" from order dictate the order for the characters in s. The character "d" in s does not appear in order, so its position is flexible.

Following the order of appearance in order, "b", "c", and "a" from s should be arranged as "b", "c", "a". "d" can be placed at any position since it's not in order. The output "bcad" correctly follows this rule. Other arrangements like "bacd" or "bcda" would also be valid, as long as "b", "c", "a" maintain their order.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= order.length &lt;= 26</code></li>
	<li><code>1 &lt;= s.length &lt;= 200</code></li>
	<li><strong><code>order</code>&nbsp;and <code>s</code>&nbsp;consist of lowercase English letters.</strong></li>
	<li><strong>All the characters of order are unique.</strong></li>
</ul>